akord
=====

Створюємо клас нота, клас інтервал та клас акорд. 
Клас нота вклюсає в себе чотири поля : назва ноти, символ ноти, задання ноти та октава до якої належить нота.До кожного 
числа присвоюємо певний символ, яким буде позначатися наша нота.
Клас інтервал вкдючає в себе два поля( нота 1, нота 2),також створюємо інтервали в залежності чи висхідний рух нот  чи 
низхідний(якщо в гору - додатні інтервали, якщо в низ - відємні інтервали)

20130422
Зауваження:
- Реалізація методу show (просто вивести значення nota_name як символьне представлення ноти, а також номер октави. Наприклад, c# (2 octave)
- Реалізація методу SetSimvol (напишіть за мене, що він робить ;)
- метод GetNota_name() повинен повертати char *, а не char
- Реалізація SetNota_name (до речі, вхідний параметр - теж char *, тобто вказівник на рядок символів, а не просто буква char)
- Реалізація методу SetOctave
- Реалізація методу SetNote 
- А також реалізація операції ~ (визначення інтервалу)
Обовязково відлагодіть все в main, щоб воно компілювалось і працювало, потім переходьте до інтервалів. 
