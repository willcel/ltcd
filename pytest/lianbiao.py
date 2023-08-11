from typing import Optional

class ListNode:
    def __init__(self, val, next = None):
        self.val = val
        self.next = next

def nums2ListNode(nums):
    dummy = ListNode(None)
    root = ListNode(nums[0])
    dummy.next = root
    i = 1
    while i < len(nums):
        node = ListNode(nums[i])
        root.next = node
        root = root.next
        i += 1
    
    return dummy.next
    
def printList(root):
    while root:
        print(root.val,'|', end=' ')
        root = root.next

def rotateRight( head: Optional[ListNode], k: int) -> Optional[ListNode]:
    if not head: return None

    cur = head
    cnt = 0
    while cur:
        cur = cur.next
        cnt += 1
    
    shift = k % cnt

    if shift == 0:
        return head
    
    cur = head
    for _ in range(cnt-shift):
        tmp = cur
        cur = cur.next

    newhead = cur
    tmp.next = None

    tmp = newhead
    for _ in range(shift-1):
        tmp = tmp.next

    tmp.next = head
    return newhead


root = nums2ListNode([1,2,3,4,5])
newhead = rotateRight(root, 2)
printList(newhead)