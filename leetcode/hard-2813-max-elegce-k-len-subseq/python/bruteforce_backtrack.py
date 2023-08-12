class Solution:
    def findMaximumElegance(self, items: list[list[int]], k: int) -> int:
        n = len(items)
        max_elegance = 0
        items.sort(reverse = True)
        print(items)
        # Generate all possible subsequences of size k
        def generate_subsequences(start, curr_subseq):
            nonlocal max_elegance
            f=0
            if len(curr_subseq) == k:
                total_profit = sum(item[0] for item in curr_subseq)
                distinct_categories = len(set(item[1] for item in curr_subseq))
                elegance = total_profit + distinct_categories**2
                max_elegance = max(max_elegance, elegance)
                return
            for i in range(start, n):
                generate_subsequences(i + 1, curr_subseq + [items[i]])
    
        generate_subsequences(0, [])
        return max_elegance

sol = Solution()
ans = sol.findMaximumElegance([[3,1],[3,1],[2,2],[5,3]],2)
print(ans)