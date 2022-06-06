function drawCircle(diameter, x = width / 2, y = height / 2) {
  circle(x, y, diameter);
}

function sinus(time, from = 0, to = 1) {
  return map(sin(time), -1, 1, from, to);
}

function keyPressed() {
  print(keyCode);
  switch (keyCode) {
    case 32: {
      if (c) {
        saveCanvas(c, "image", "jpg");
      }
      break;
    }
    case 82: {
      reset();
    }
  }
}
