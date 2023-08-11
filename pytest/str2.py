from typing import List

class Solution:
    def lastRemaining(self, n: int, m: int) -> int:
        rep = {}
        cnt = 0 # 已删除个数
        point = 0 # 目前指向的点
        while cnt < n-1:
            for _ in range(m-1):
                while (point+1)%n in rep:
                    point = (point+1)%n
                point = (point+1)%n
            rep[point] = 1
            while (point+1)%n in rep:
                point = (point+1)%n 
            point = (point+1)%n
            cnt += 1
        # return cnt
        for i in range(n):
            if i not in rep:
                return i

a= Solution()
res = a.lastRemaining(5,2)
print(res)