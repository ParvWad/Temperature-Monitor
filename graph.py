import datetime
import socket
import matplotlib.pyplot as plt
import matplotlib.animation as animation
temp = []
time = []
humid = []
with open("Tempdata.txt") as f:
    for line in f:
        a = line.split(" ")
        for i in range (len(a)):
            if i==0:
                temp.append(a[i])
            elif i ==1:
                humid.append(a[i])
            elif i ==2:
                time.append(a[i])
plt.plot(time,temp, label = "temperature vs time")
plt.plot(time, humid, label = "humidity vs time")
plt.title("my room")
plt.legend()
plt.show()
