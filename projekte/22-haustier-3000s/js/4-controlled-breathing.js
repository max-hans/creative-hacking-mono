let c;

function setup() {
  c = createCanvas(400, 400);
  noFill();
  stroke("black");

  ampSlider = createSlider(0, 200);
  timeSlider = createSlider(0, 2, 1, 0);
}

function draw() {
  background("white");
  let diam1 = sinus(
    frameCount * 0.1 * timeSlider.value(),
    100,
    ampSlider.value()
  );

  drawCircle(diam1);
}
