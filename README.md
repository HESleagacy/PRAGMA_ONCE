# Competitive Programming

Personal practice repo for competitive programming (Codeforces) and coding interviews, working through the
[Competitive Programmer's Handbook](https://cses.fi/book/book.pdf) by Antti Laaksonen (`CPH.pdf`).

## Layout

- `CPH.pdf` — the handbook.
- `PLAN.txt` — study roadmap: chapters grouped into tiers by priority.
- `<Topic>/implementation.cpp` — one folder per algorithm/topic (e.g. `MergeSort/`).

## Build & run

```sh
g++ -O2 -std=c++17 MergeSort/implementation.cpp -o MergeSort/implementation
./MergeSort/implementation
```

Compiled binaries are git-ignored.
