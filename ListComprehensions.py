#list comprehensions
nums = [1, 2, 3, 4, 5]

squares = [x**2 for x in nums]
print(squares)

#even numbers
evens = [x for x in nums if x % 2 == 0]
print(evens)
