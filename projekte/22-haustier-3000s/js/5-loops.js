let c;

function setup() {
  c = createCanvas(400, 400);
}

function draw() {
  background("white");

  for (let i = 0; i < 100; i = i + 1) {
    let diam = sinus(frameCount * 0.01 + i * 100, 100, 400);
    drawCircle(diam);
  }
}
