let c;

function setup() {
  c = createCanvas(400, 400);

  noFill();
  stroke("black");

  slider = createSlider(0, 200);
}

function draw() {
  background("white");
  drawCircle(random(slider.value()));
}
