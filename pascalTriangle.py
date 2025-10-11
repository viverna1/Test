def getNextLine(line):
    extended = [0] + line + [0]
    return [extended[i] + extended[i+1] for i in range(len(extended) - 1)]



def printTriangle(lines):
    max_width = len("   ".join(map(str, lines[-1])))
    for line in lines:
        print("   ".join(map(str, line)).center(max_width))



lines = [[1]]
for _ in range(7):
    lines.append(getNextLine(lines[-1]))
printTriangle(lines)
