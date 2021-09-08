print ("Простой калькулятор")
print ("Введите первое число:")
x = int(input())
print ("Что нужно сделать?")
print ("Умножить (⨯) - 1")
print ("Разделить (:) - 2")
print ("Сложить (+) - 3")
print ("Вычесть (-) - 4")
print ("Возвести в степень (²) - 5")
print ("Узнать корень (√) - 6")
operation = int(input())
print ("Введите второе число:")
y = int(input())
if operation == 1:
	result = x*y
if operation == 2:
	result = x/y
if operation == 3:
	result = x+y
if operation == 4:
	result = x-y
if operation == 5:
	result = x**y
if operation == 6:
	result = x**(1/y)
print ("Результат: ", result)