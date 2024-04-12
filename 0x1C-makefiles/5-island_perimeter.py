#!/usr/bin/python3
""" returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""

    w = len(grid[0])
    h = len(grid)
    e = 0
    size = 0
    k = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                size = size + 1
                if (j > 0 and grid[i][j - 1] == 1):
                    e += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    e += 1
    k = size * 4 - e * 2
    return k
