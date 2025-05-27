function boxPow(resultBox, xBox, nBox) {
    resultBox.value = 1;
    for (let i = 0; i < nBox.value; i++) {
        resultBox.value *= xBox.value;
    }
}

function runBoxPow() {
    const result = { value: 0 };
    const base   = { value: 2 };
    const count  = { value: 5 };

    for (let i = 0; i < 1000000000; i++) {
        boxPow(result, base, count);
    }

    console.log(result.value); // prevent dead code elimination
}

runBoxPow();
