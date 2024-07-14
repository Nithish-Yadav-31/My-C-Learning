import numpy as np

array =  [[1,2,3],
          [4,3,2],
          [8,0,9]]

array2 = [[0.1,0.2, 0.4],
          [0.3, 0.2, 0.6],
          [0.8, 0.3, 0.5]]

product = np.matmul(array, array2)

output = 1 / (1 + np.exp(product)) 

print(output)