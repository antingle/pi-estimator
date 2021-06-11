import Foundation

/* creates a random distribution of numbers between 0 and 1 on x and y
 * coordinates. If the distance between the two point is less than 1 then it is
 * inside the circle. We then divide the points in the circle by the total
 * points and get an estimation of pi */
var pointsInCircle = 0.0
var totalPoints = 0.0
var x, y, pi, distance: Double

print("Number of test cases: ")
var nString = readLine()
let n = Int(nString!) ?? 0


// starts clock to measure execution time
let startTime = CFAbsoluteTimeGetCurrent()

for _ in 0..<n {
    x = Double.random(in: 0..<1)
    y = Double.random(in: 0..<1)
    distance = pow(x, 2) + pow(y, 2);
    
    if distance <= 1 {
        pointsInCircle += 1;
    }
    totalPoints += 1;
}

pi = 4 * pointsInCircle / totalPoints;

// ends clock to store elapsed time
let timeElapsed = CFAbsoluteTimeGetCurrent() - startTime

print("Pi estimation: \(pi)")
                                    
print("Time elapsed: \(String(format: "%.05f", timeElapsed)) seconds")
