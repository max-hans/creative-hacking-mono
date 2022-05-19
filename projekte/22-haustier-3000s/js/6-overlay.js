let slider;

let c;

function setup() {
  c = createCanvas(400, 400);
  noFill();
  strokeWeight(0.1);
  slider = createSlider(0, 400);
}

function draw() {
  // background("white");

  line(
    10,
    sinus(frameCount, 0, slider.value()),
    width - 10,
    sinus(frameCount, slider.value(), 0)
  );
}
