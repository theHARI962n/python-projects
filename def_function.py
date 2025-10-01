"""
*args  → packs positional arguments into a tuple.
**kwargs → packs keyword arguments into a dictionary.
"""
def multiplr(a,b):
    return a*b

result = multiplr(5,4)
print(result)


def add_all(*args):
    return sum(args)

print(add_all(1, 2, 3, 4))   # Output: 10
print(add_all(5, 10))        # Output: 15


def print_info(**kwargs):
    for key, value in kwargs.items():
        print(key, ":", value)

print_info(name="Hari", age=22, city="Chennai")
