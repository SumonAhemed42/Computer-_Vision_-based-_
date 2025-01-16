import time

num:int=1
for i in range(0, 5):
    num=num+1
    f = open("data.txt", "w")
    f.write(str(num))
    time.sleep(2)

