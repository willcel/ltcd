import matplotlib.pyplot as plt
import numpy as np

# 二维数组
data = np.array([[0,0,0,0,0,0,0],[0,1,1,1,1,0,0],[0,1,0,0,1,0,0],[1,0,1,0,1,0,0],[0,1,0,0,1,0,0],[0,1,0,0,1,0,0],[0,1,1,1,1,0,0]])

# 创建一个新的画板，设置画板大小为10x10
plt.figure(figsize=(10, 10))

# 绘制热图
plt.imshow(data, cmap='gray')

# 隐藏横纵坐标线
plt.axis('off')

# 显示图片
plt.show()
