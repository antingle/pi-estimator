#include <iostream>
#include <cmath>
#include <cstdlib>
#include <chrono>

using namespace std;

/* creates a random distribution of numbers between 0 and 1 on x and y
 * coordinates. If the distance between the two point is less than 1 then it is
 * inside the circle. We then divide the points in the circle by the total
 * points and get an estimation of pi */
int main()
{

    unsigned long int n;
    double pointsInCircle = 0;
    double totalPoints = 0;
    double x, y, pi, distance;

    cout << "Number of test cases: ";
    cin >> n;

    // starts clock to measure execution time
    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();

    for (unsigned long int i = 0; i < n; i++)
    {
        x = (float) rand()/RAND_MAX;
        y = (float) rand()/RAND_MAX;
        distance = pow(x, 2) + pow(y, 2);

        if (distance <= 1)
            pointsInCircle += 1;
        totalPoints += 1;
    }

    pi = 4 * pointsInCircle / totalPoints;

    // ends clock to store elapsed time
    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

    cout << "Pi estimation: " << pi << '\n';

    cout << "Time taken (sec) = " <<  (std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count()) /1000000.0  << '\n';

    return 0;
}
