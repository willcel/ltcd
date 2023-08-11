from collections import deque

class TreeNode:
    def __init__(self, val = 0, left = None, right = None):
        self.val = val
        self.left = left
        self.right = right


# 根据数组构建二叉树

def construct_binary_tree(nums: []) -> TreeNode:
    if not nums: 
        return None
    # 用于存放构建好的节点
    root = TreeNode(-1)
    Tree = []
    # 将数组元素全部转化为树节点
    for i in range(len(nums)):
        if nums[i]!= -1:
            node = TreeNode(nums[i])
        else:
            node = None
        Tree.append(node)
        if i == 0:
            root = node
    # 直接判断2*i+2<len(Tree)会漏掉2*i+1=len(Tree)-1的情况
    for i in range(len(Tree)):
        if Tree[i] and 2 * i + 1 < len(Tree):
            Tree[i].left = Tree[2 * i + 1]
            if 2 * i + 2 < len(Tree):
                Tree[i].right = Tree[2 * i + 2]
    return root

class Trunk:
    def __init__(self, prev=None, str=None):
        self.prev = prev
        self.str = str
 
def showTrunks(p):
    if p is None:
        return
    showTrunks(p.prev)
    print(p.str, end='')
 
 
def printTree(root, prev, isLeft):
    if root is None:
        return
 
    prev_str = '    '
    trunk = Trunk(prev, prev_str)
    printTree(root.right, trunk, True)
 
    if prev is None:
        trunk.str = '———'
    elif isLeft:
        trunk.str = '.———'
        prev_str = '   |'
    else:
        trunk.str = '`———'
        prev.str = prev_str
 
    showTrunks(trunk)
    print(' ' + str(root.val))
    if prev:
        prev.str = prev_str
    trunk.str = '   |'
    printTree(root.left, trunk, False)



















"""
class Solution:
    def __init__(self):
        self.T = []
    def inorder(self, root: TreeNode) -> []:
        if not root:
            return 
        self.inorder(root.left)
        self.T.append(root.val)
        self.inorder(root.right)
        return self.T



def connect( root: 'Optional[Node]') -> 'Optional[Node]':
    if not root: return root
    def fun1(node):
        if node.left:
            # print(node.val)
            cur1, cur2 = node.left, node.right
            cur1.next = cur2 # make sure there always exist nodeleft
            while cur1.right:
                cur1.right = cur2.left
                cur1, cur2 = cur1.right, cur2.left

            fun1(node.left)
            # node.right.next = None
            fun1(node.right)

    # root.next = None
    fun1(root)

    return root


# 验证创建二叉树的有效性,二叉排序树的中序遍历应为顺序排列

test_tree = [1,2,3,4,5,6,7]
root = construct_binary_tree(test_tree)
# A = Solution()
# print(A.inorder(root))
connect(root)
"""