let slider;

let c;

function setup() {
  c = createCanvas(400, 400);
  noFill();
  strokeWeight(0.1);
  slider = createSlider(0, 400);
}

function draw() {
  background("white");

  if (slider.value() > 200) {
    drawCircle(200);
  }
}
