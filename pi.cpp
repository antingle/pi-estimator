#include <iostream>
#include <cstdlib>
#include <time.h>

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
    clock_t t;

    cout << "Number of test cases: ";
    cin >> n;

    // starts clock to measure execution time
    t = clock();

    for (unsigned long int i = 0; i < n; i++)
    {
        x = (float) rand()/RAND_MAX;
        y = (float) rand()/RAND_MAX;
        distance = x * x + y * y;

        if (distance <= 1)
            pointsInCircle += 1;
        totalPoints += 1;
    }

    pi = 4 * pointsInCircle / totalPoints;

    // ends clock to store elapsed time
    t = clock() - t;
    double timeTaken = ((double)t)/CLOCKS_PER_SEC;

    cout << "Pi estimation: " << pi << '\n';

    cout << "Time taken: " << timeTaken << " seconds" << '\n';

    return 0;
}
