function drawCircle(diameter) {
  circle(width / 2, height / 2, diameter);
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
