import numpy as np
import matplotlib.pyplot as plt
import serial

porta = 'COM1'
velociade = 9600
conexao = serial.Serial(porta, velociade)


x = []
y = []


i = 1
ax = plt.subplot(111)
while True:
    x.append(i)
    y.append(float(conexao.readline().decode('ascii')))
    ax.plot(x, y, '-k')
    plt.pause(1)
    i += 1

plt.show()
