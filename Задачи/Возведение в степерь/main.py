def multiply(a, b):
    res = 0
    for _ in range(b):
        res += a
    return res


def exponentiation(a, b):
    res = 1
    for _ in range(b):
        res = multiply(res, a)
    return res
    

print(exponentiation(3, 2)) # 9
    