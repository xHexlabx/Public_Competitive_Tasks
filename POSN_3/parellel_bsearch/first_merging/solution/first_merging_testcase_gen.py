import os 
import numpy as np

try : 
    os.makedirs('input')
except :
    pass

# case 1 1e3
# range 1000 nodes 

# case 2 2e5
# range 200000 nodes

size = 2e5 

for test in range (7 , 10 + 1) : 

    text = ''

    n = np.random.randint(size / 2 , size + 1)  
    q = np.random.randint(size / 2 , size + 1)

    text += f'{n} {q}\n'

    for i in range(n) : 
        
        x = np.random.randint(1 , size + 1) 

        y = np.random.randint(1 , size + 1)

        while(x == y) :

            y = np.random.randint(1 , size + 1)

        text += f'{x} {y}\n'

    for i in range(q) :

        x = np.random.randint(1 , size + 1) 

        y = np.random.randint(1 , size + 1)

        while(x == y) :

            y = np.random.randint(1 , size + 1)

        text += f'{x} {y}\n'

    with open(f'./input/input{test}.txt' ,'w') as file :

        file.write(text) 
    

