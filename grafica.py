import numpy as np
import matplotlib.pyplot as plt

data = np.loadtxt("runk4.dat")

# Grafica x vs y
plt.figure(figsize=(7,7))
plt.plot(data[:,0], data[:,1])
plt.plot(data[:,2], data[:,3])
plt.title("Runge kutta 4to orden")
plt.xlabel("x")
plt.ylabel("y")

plt.savefig("plot.png")
