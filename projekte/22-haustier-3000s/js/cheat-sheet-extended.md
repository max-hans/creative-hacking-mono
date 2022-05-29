# cheat sheet extended

check online reference for more info -> https://p5js.org/reference/

## environment

### print()

log to console

```js
print("hello");
```

### frameCount

number of frames passed

### frameRate()

set framerate of sketch e.g. at which speed the loop is run

### width

width of frame

### height

height of frame

### fullscreen()

run in fullscreen

## display

### background()

draw background with certain color

```js
background(255, 0, 0); -> red
```

### clear()

clear canvas

### fill()

change fill mode of shapes

```js
fill(0, 255, 0);
ellipse(10, 10, 20); -> green ellipse

fill(255, 0, 0);
ellipse(40, 10, 20);  -> red ellipse
```

### noFill()

disable filling shapes

### noStroke()

disable outline on shapes

### stroke()

set ouline color of shapes

## drawing and shapes

### arc()

```js
arc(50, 55, 50, 50, 0, HALF_PI);
```

### ellipse()

```js
ellipse(20, 40, 20, 20);
```

### circle()

```js
circle(20, 40, 20);
```

### line()

```js
line(20, 40, 20, 20);
```

### point()

```js
point(20, 40);
```

### rect()

```js
rect(20, 40, 20, 20);
```
