# aoc

Advent of Code: https://adventofcode.com/

# Commands

Globally install [`esy`](https://www.npmjs.com/package/esy) so that the `esy`
command is available in the terminal.

- `npm install -g esy`, and perhaps [global npm without sudo](https://github.com/sindresorhus/guides/blob/master/npm-global-without-sudo.md)

Then to run things within this repo:

```bash
# Install things once, or when dependencies change.
esy && esy @exe && esy @test

# Run `Exe.re` (for solving each day)
esy exe

# Run test cases (for ensuring integrity of past days and utils)
esy test
```
