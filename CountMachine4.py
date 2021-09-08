ver=4
print ("Калькулятор SimpleMath, версия", ver)
print ("Примечание: ввод десятичных дробей осуществляется через точку")
print ("Введите первое число:")
x = float(input())
print ("Что нужно сделать?")
print ("Умножить (⨯) - 1")
print ("Разделить (:) - 2")
print ("Сложить (+) - 3")
print ("Вычесть (-) - 4")
print ("Возвести в степень (²) - 5")
print ("Узнать корень (√) - 6")
print ("Разделить с остатком (:) - 7")
operation = int(input())
print ("Введите второе число:")
y = float(input())
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
if operation == 7:
	result = x//y
	remains = x%y
if operation == 7:
	print ("Результат: ", result)
	print ("Остаток", remains)
else:
	print ("Результат: ", result)