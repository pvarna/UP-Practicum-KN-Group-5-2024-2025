# Рекурсия

### Задача :one:
Да се напише рекурсивна функция, която представя число от десетична в двоична бройна система.

```
Вход:
2
Изход:
10


Вход:
7
Изход:
111
```

### Задача :two:
Дадени са естествените числа `n` и `k`, където `1 ≤ k ≤ n`. Да се дефинира рекурсивна функция, която намира сумата на естествените числа от `1` до `n` със стъпка `k`.

```
Вход:
15 3

Изход:
35

Обяснение:
1 + 4 + 7 + 10 + 13 = 35
```

### Задача :three:
Напишете рекурсивна функцията `isPrime`, която приема цялото число `n` и проверява дали то е просто.

### Задача :four:
Да се реализира рекурсивна версия на функцията `strlen`.

### Задача :five:
Да се реализира рекурсивна функция `const int* min(const int* array, std::size_t size)`, която връща указател към най-малкия елемент в масив.

### Задача :six:
Да се реализира рекурсивна функция `bool isPalindrome(const char* str)`, която проверява дали даден символен низ е палиндром.

### Задача :seven:
Да се реализира рекурсивна функция `void printNumericTriangle(unsigned int n)`, която отпечатва следната фигура (`n = 5`):

```
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
```

### Задача :eight:
Да се състави програма, която прочита от клавиатурата число `n` и отпечатва всички възможни последователности от `0` и `1` с дължина `n`, които не съдържат съседни `1`-ци. Решението да се реализира чрез рекурсия.

```
Вход:
3

Изход:
000
001
010
100
101

Пояснение:
011, 110, 111 са изпуснати


Вход:
4

Изход:
0000
0001
0010
0100
0101
1000
1001
1010

Пояснение:
0011, 0110, 0111, 1011, 1100, 1101, 1110, 1111 са изпуснати
```

### Задача :nine: (от Контролно 2 от курса по УП на спец. КН, 2020/2021)
Напишете програма, която:

1. дефинира рекурсивна функция `print` с подходящи параметри и тип на връщаната стойност, която да извежда на екрана масив от цели числа в реда, в който са подредени в паметта;

2. дефинира рекурсивна функция `isSorted`, с подходящи параметри и тип на връщаната стойност, която да проверява дали подадения ѝ масив от цели числа е сортиран в нарастващ ред;

3. дефинира рекурсивна функция `insertInSorted`, с подходящи параметри и тип на връщаната стойност, която да вмъква подадено цяло число в сортиран във възходящ ред масив, като запазва наредбата на масива;

4. прочита от клавиатурата положително число `N < 1000` и след това последователност от `N` цели числа, които едно по едно вмъква в масив, посредством функцията `insertInSorted` (в началото се вмъква в празен масив);

5. накрая проверява дали резултатният масив е сортиран (чрез `isSorted`) и го извежда на екрана (чрез `print`).

В тази задача можете да използвате цикъл само в `main` за въвеждане на данните, но не и в трите поискани рекурсивни функции. Можете да дефинирате произволни помощни функции, но те също не могат да използват цикли.

```
Вход:
5 23 4 28 30 2

Изход:
1
2 4 23 28 30
```