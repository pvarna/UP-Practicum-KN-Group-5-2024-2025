# Символни низове

Приемайте максималния капацитет на символните низове, с които работите, за **2KB**. Ако искате да упражните допълнително работата си с динамичната памет, нека всички масиви и низове, които използвате, да бъдат заделени с точна големина. 

### Задача :one:
Да се напише програма, която намира броя думи в символен низ.
```
Вход: Let's go to the beach. It is very sunny.
Изход: 9
```

### Задача :two:
Да се напише програма, която премахва повтарящи се интервали от символен низ.
```
Вход: alo      da     kp     ks nn
Изход: alo da kp ks nn
```

### Задача :three:
Да се напише функция със сигнатура `int hammingDistance(const char* firstString, const char* secondString)`, която по дадени два символни низа намира *разстоянието на Хеминг* между тях, т.е. в колко позиции се различават.
```
Пример 1: 
Параметри: asdfgzz и jojfgddd
Изход: 6
Обяснение: Първите три букви се различават, следващите две (fg) съвпадат. 3-те букви d в края на втория низ също се считат за разлика

Пример 2: 
Параметри: bobo и jojо
Изход: 2
```

### Задача :four:
Да се състави програма, която прочита две думи и извежда първия низ хоризонтално, а втория вертикално, ако имат обща буква.
```
Вход:
klaviatura
monitor

Изход:
    m
    o
    n
klaviatura
    t
    o
    r
```

### Задача :five:
Напишете програма, която по зададени две редици от десетични цифри (не по-дълги от 20 знака), намира и извежда най-голямото число, цифрите на което се съдържат както в едната, така и в другата редица. Редиците имат поне една обща цифра. Двете редици ще бъдат зададени в два отделни реда на входа, а на единствения ред на изхода да се изведе исканото число.
```
Вход:
9772385791
6462909

Изход:
992
```

### Задача :six:
На първия ред се въвежда символен низ `s`, а на втория - една единствена дума `w`. Премахнете всички срещания на думата `w` в низа `s`. 
```
Вход: 
My name is Gosho. Gosho is from Varna. Gosho is 14-year-old boy.
Gosho

Изход: 
My name is .  is from Varna.  is 14-year-old boy.
```

### Задача :seven:
Да се напише програма, която прочита изречение и извежда думите от изречението в обратен ред.
```
Вход: AZ SYM YODA
Изход: YODA SYM AZ
```

### Задача :eight:
Реализирайте функция със сигнатура `void rleEncode(char* text)`, която компресира текст, съставен от малки латински букви посредством *RLE алгоритъма* - компресия, при която еднаквите символи се заменят с число и съответния символ в скоби. За да има смисъл, се заменят поне четири последователни еднакви символа.
```
Преди изпълнение на функцията: cbabbbbbccccccccbaacbbbb
След изпълнение на функцията: cba(5b)(8c)baac(4b)
```

### Задача :nine:
На първия ред се въвежда изречение `s`. На втория ред се въвеждат две думи - `w1` и `w2`. Да се напише програма, която заменя всяко срещане на `w1` в `s` с `w2`.
```
Вход: 
Grigor Dimitrov is great, but Roger Federer is greater
great strong

Изход:
Grigor Dimitrov is strong, but Roger Federer is stronger
```

### --- Advent of code 2024, Day 4: Ceres Search ---

"Looks like the Chief's not here. Next!" One of The Historians pulls out a device and pushes the only button on it. After a brief flash, you recognize the interior of the Ceres monitoring station!

As the search for the Chief continues, a small Elf who lives on the station tugs on your shirt; she'd like to know if you could help her with her word search (your puzzle input). She only has to find one word: `XMAS`.

This word search allows words to be horizontal, vertical, diagonal, written backwards, or even overlapping other words. It's a little unusual, though, as you don't merely need to find one instance of `XMAS` - you need to find all of them. Here are a few ways `XMAS` might appear, where irrelevant characters have been replaced with `.`:
```
..X...
.SAMX.
.A..A.
XMAS.S
.X....
```

The actual word search will be full of letters instead. For example:
```
MMMSXXMASM
MSAMXMSMSA
AMXSXMAAMM
MSAMASMSMX
XMASAMXAMM
XXAMMXXAMA
SMSMSASXSS
SAXAMASAAA
MAMMMXMMMM
MXMXAXMASX
```

In this word search, `XMAS` occurs a total of 18 times; here's the same word search again, but where letters not involved in any `XMAS` have been replaced with `.`:
```
....XXMAS.
.SAMXMS...
...S..A...
..A.A.MS.X
XMASAMX.MM
X.....XA.A
S.S.S.S.SS
.A.A.A.A.A
..M.M.M.MM
.X.X.XMASX
```

Take a look at the little Elf's word search. How many times does XMAS appear?

### :warning: Забележки

- Давайте смислени имена на променливите си
- Целете се към максимално спазване на чист код 
- Винаги правете валидация на входните си данни
- Опитвайте се да отделяте логиката си в различни функции
- Винаги проверявайте дали успешно сте заделили памет и не допускайте **memory leaks**