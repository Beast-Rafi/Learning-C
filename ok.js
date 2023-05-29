function doIt() {
    let x = 0;
    let y = 1;
    let numbers = [0,1];

    for(let i = 0; i < 20; i++) {
        numbers.push(numbers[x] + numbers[y]);
        x++;
        y++;
    }
    console.log(numbers)
}
doIt();