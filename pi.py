import random
import time

# creates a random distribution of numbers between 0 and 1 on x and y
# coordinates. If the distance between the two point is less than 1 then it is
# inside the circle. We then divide the points in the circle by the total
# points and get an estimation of pi 

n = input("Number of test cases: ")

# starts clock to measure execution time
start = time.time()

num_point_circle = 0
num_point_total = 0
for _ in range(n):
    x = random.uniform(0, 1)
    y = random.uniform(0, 1)
    distance = x * x + y * y
    if distance <= 1:
        num_point_circle += 1
    num_point_total += 1

pi = 4.0 * num_point_circle / num_point_total

# ends clock to store elapsed time
end = time.time()

print "Pi estimation:", pi
print "Time taken: {0} seconds".format(end - start)
