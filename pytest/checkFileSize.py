
import os

def check_folder(directory):
    for root, dirs, files in os.walk(directory):
        for file in files:
            file_path = os.path.join(root, file)
            if os.path.getsize(file_path) < 1396 * 1024:  # 文件大小小于100KB
                print("文件名:", file)
                print("所在位置:", file_path)

# 指定要检查的文件夹路径
folder_path = "/mnt/d/新年工作/0629五棵松/测线4"

# 调用函数检查文件夹
check_folder(folder_path)

