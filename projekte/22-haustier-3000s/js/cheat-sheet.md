# cheat sheet

## structure

```js
// runs once when program starts
function setup() {
  createCanvas(800, 600); //width,height in pixels
}

// run continuously after setup
function draw() {
  // rendering loop
}
```

## synthax

### comments

### variables

```js
let newVariable;
let otherVariable = 3;

newVariable = 2;

print(newVariable + otherVariable);
```

### variable types

```js
let string = "hello";
let number = 123;
let number2 = -2.3123;

let boolean = true;
boolean = false;
```

### functions

```js
someFunction();  <- this will be executed
someFunction; <- this will not

reset() <- some functions work without any parameters
add(2, 3) <- some functions need parameters in order to work

let sum = add(2, 3); <- some functions return some kind of value
reset(); <- some don't
```

### comments

```js
// inline comment

/*
comment over multiple lines
*/
```

### semicolon at end of line

```js
print("hello world"); <-
```

## operators

### basic math operators

```
+ : add
- : substract
/ : divide
* : multiply
```

```js
a = b + c;
a = b - c;
a = b / c;
a = b * c;
```

### math helpers

```js
random(low, high); //ranged random number

map(value, in1, in2, out1, out2);
//map a value from input range to output range
```

## logic

```js
if(test){
  //statements
}

===  //equal to
!=  //not equal
>   //greater than
<   //less than
>=  //greater than or equal
<=  //less than or equal
```
