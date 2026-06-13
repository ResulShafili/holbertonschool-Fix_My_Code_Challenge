#!/usr/bin/node
/*
    Print a square with the character #
*/
if (process.argv.length <= 2) {
    process.stderr.write("Missing argument\n");
    process.exit(1)
}
size = parseInt(process.argv[2], 10)
for (let i = 0 ; i < size ; i ++) {
    for (let j = 0 ; j < size ; j ++) {
        process.stdout.write("#");
    }
    process.stdout.write("\n");
}
