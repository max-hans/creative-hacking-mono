let c;

function setup() {
  c = createCanvas(400, 400);
  noFill();
  stroke("black");
}

function draw() {
  background("white");
  let diam1 = sinus(frameCount * 0.1, 100, 200);
  let diam2 = sinus(frameCount * 0.1 + 3, 100, 200);

  drawCircle(diam1);
  drawCircle(diam2);
}
