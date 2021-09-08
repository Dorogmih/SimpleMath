print ("Вычислительная машина")
print ("Для простых действий")
operation = input("Какая будет выполняться операция? Пример: УМНОЖЕНИЕ, ДЕЛЕНИЕ, СЛОЖЕНИЕ, ВЫЧИТАНИЕ:ㅤ")
x = int(input("Введите первое число:ㅤ"))
y = int(input("Введите второе число:ㅤ"))
if operation =="УМНОЖЕНИЕ":
    result = x*y
elif operation =="ДЕЛЕНИЕ":
    result = x/y
elif operation =="СЛОЖЕНИЕ":
    result = x+y
elif operation =="ВЫЧИТАНИЕ":
    result = x-y
print ("Результат:ㅤ", result)