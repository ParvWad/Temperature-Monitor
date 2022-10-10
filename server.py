import datetime
import socket
UDP_IP_ADDRESS = '192.168.2.78'
UDP_PORT_NO = 1024
serverSock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
serverSock.bind((UDP_IP_ADDRESS, UDP_PORT_NO))
while True:
    data, addr = serverSock.recvfrom(1024)
    result = data.decode("ASCII")
    try:
        finalres = result.split(" ")
        temp =(finalres[0])
        humid = (finalres[1])
        time = (datetime.datetime.now().hour) + (datetime.datetime.now().minute)/100
        f = open("Tempdata.txt", "a+")
        f.write(str(temp) + " " + str(humid) + " " + str(time) +"\n")
    except: f.close()
