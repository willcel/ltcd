from typing import List

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        def dicStr(s):
            count = dict()
            for i in s:
                if ord(i) not in count: 
                    count[ord(i)] = 1
                else:
                    count[ord(i)] += 1
            
            return count

        idx_used = dict()
        strlen = len(strs)

        idx_cur = 0
        res = []

        # if strs[idx_cur] == "":
        #     res.append([""])
        #     return res

        while idx_cur < strlen:
            if idx_cur in idx_used:
                idx_cur += 1
                continue
            res_cur = []
            res_cur.append(strs[idx_cur])
            idx_used[idx_cur] = 1
            count = dicStr( strs[idx_cur] )
            for idx_cp in range(idx_cur+1, strlen):
                if idx_cp in idx_used:
                    continue
                
                count2 = dicStr( strs[idx_cp] )
                if count2 == count:
                    res_cur.append( strs[idx_cp] )
                    idx_used[idx_cp] = 1
            
            res.append(res_cur)
            idx_cur += 1
         
        return res

# tar = ["",""]
# a = Solution()
# res = a.groupAnagrams(tar)
# print(res)


while 1:
    res = 0
    try:
        a = input()
        nums = [int(i) for i in a.split()]
        if nums[0] == 0:
            break
        else:
            for i in range(1, len(nums)):
                res += nums[i]
            print(res)
    except:
        break