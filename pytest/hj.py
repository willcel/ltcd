from typing import *
import heapq
from createtree import *
from collections import *

class Solution:
    def alternateDigitSum(self, n: int) -> int:
        sign, res = -1, 0
        while n:
            res += n%10 * sign
            sign *= -1
            n //= 10
        
        return -sign*res



a= Solution()
# res = a.applyOperations([847,847,0,0,0,399,416,416,879,879,206,206,206,272])
res = a.largestIsland([[0,0,0,0,0,0,0],[0,1,1,1,1,0,0],[0,1,0,0,1,0,0],[1,0,1,0,1,0,0],[0,1,0,0,1,0,0],[0,1,0,0,1,0,0],[0,1,1,1,1,0,0]])
# res = a.applyOperations([0,1])
print(res)


# test_tree = [1,2,3,4,5,6,7]
# root = construct_binary_tree(test_tree)
# for node in res:
#     printTree(node, None, False)