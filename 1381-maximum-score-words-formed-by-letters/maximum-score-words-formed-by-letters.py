class Solution:
    def maxScoreWords(self, words: List[str], letters: List[str], score: List[int]) -> int:
        def dfs(i, count):
            if i == len(words):
                return 0
            res = dfs(i + 1, count)
            valid = True
            cur_score = 0
            for char in words[i]:
                if count[ord(char) - ord('a')] == 0:
                    valid = False
                count[ord(char) - ord('a')] -= 1
                cur_score += score[ord(char) - ord('a')]
            if valid:
                res = max(res, cur_score + dfs(i + 1, count))
            for char in words[i]:
                count[ord(char) - ord('a')] += 1
            return res
        
        return dfs(0, [letters.count(chr(ord('a') + i)) for i in range(26)])