const readline = require("readline");
/* creates a random distribution of numbers between 0 and 1 on x and y
 * coordinates. If the distance between the two point is less than 1 then it is
 * inside the circle. We then divide the points in the circle by the total
 * points and get an estimation of pi */

let pointsInCircle = 0.0;
let totalPoints = 0.0;
let x, y, pi, distance;

// allows input from stdin
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false,
});

rl.question("", function (cases) {
  rl.close();

  // starts clock to measure execution time
  const start = Date.now();

  for (let i = 0; i < cases; i++) {
    x = Math.random();
    y = Math.random();
    distance = x * x + y * y;

    if (distance <= 1) {
      pointsInCircle += 1;
    }
    totalPoints += 1;
  }

  pi = (4 * pointsInCircle) / totalPoints;

  // ends clock to store elapsed time
  const end = Date.now();
  const timeElapsed = (end - start) / 1000;

  console.log(`Pi estimation: ${pi}`);

  console.log(`Time taken: ${timeElapsed} seconds`);
});
