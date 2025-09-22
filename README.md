# ООП Лабораторная работа №1

М8О-211БВ-24: Губеев Давид Илембаевич
Вариант 5
<img width="1071" height="350" alt="image" src="https://github.com/user-attachments/assets/bef8ab3e-bd58-47b4-965e-a0dca098d340" />


## Клонирование репозитория

```bash
git clone https://github.com/Dearale/OOP_Lab_1.git
cd lab1
```
## Создание контейнера
```bash
docker build -t lab1 .
```
## Запуск в интерактивном режиме
```bash
docker run -it --rm lab1 bash
```
## Выполнение программ внутри контейнера
```bash
./gtest_exe  # запуск программы
./tests      # запуск тестов
```
