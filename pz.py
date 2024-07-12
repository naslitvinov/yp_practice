n = int(input("Введите количество чисел в последовательности: "))

summa = 0
for i in range(n):
    num = int(input(f"Введите {i+1}-е число: "))
    summa += num

average = summa / n
print(f"Среднее арифметическое: {average:.2f}")
