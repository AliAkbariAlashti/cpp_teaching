directions = [
    (1, 0), (-1, 0), (0, 1), (0, -1),
    (1, 1), (1, -1), (-1, 1), (-1, -1)
]

tir_bars = []
for _ in range(3):
    x, y = map(int, input().split(','))
    tir_bars.append( (x, y) )

tanks = []
for _ in range(5):
    x, y = map(int, input().split(','))
    tanks.append( (x, y) )

destroyed = set()

for tank in tanks:
    tx, ty = tank
    for dx, dy in directions:
        x, y = tx + dx, ty + dy
        while 0 <= x <8 and 0 <= y <8:
            if (x, y) in tir_bars:
                idx = tir_bars.index( (x, y) )
                destroyed.add(idx)
            x += dx
            y += dy

remaining = 3 - len(destroyed)
print(remaining)
