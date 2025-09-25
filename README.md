# ООП Лабораторная работа №1

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
cd build     # переход в папку с программой и тестами
./gtest_exe  # запуск программы
./tests      # запуск тестов
```