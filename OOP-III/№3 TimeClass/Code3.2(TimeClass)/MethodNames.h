///Стич Назар Иванович ИВТ-22 (КЛАССЫ)
///Заголовочный файл - файл хранящий класс ВРЕМЕНИ
#include <string>                                   //Подключение библиотеки строк
#include <iostream>                                 //Подключение библиотеки для ввода вывода через консоль
#include <string>                                   //Подключение библиотеки строк

/// Собственный класс ВРЕМЕНИ переменных и методов реализаций
class Time {                                        
private:                                            //Закрытая зона объявлений
    long years;                                     //Переменные для конструктора, с которыми пользователь взаимодейстровать не может
    short days;                                     //Данные год, дни, часы, минуты, секунды
    short hours, minutes, seconds;                  

public:                                             //Открытая зона объявлений
    ///Конструктор - набор значений времени y-год d-день h-час m-минуты s-секунды
    Time(long y = 0, short d = 0, short h = 0, short m = 0, short s = 0) : years(y), days(d), hours(h), minutes(m), seconds(s) {}

    ///Методы для работы с набором значений
    void addTime(const Time& t);                    ///Метод сложения переменных по парно (сложение например минут одного набора и минут другого набора)
    void subtractTime(const Time& t);               ///Метод вычитания переменных по парно (вычитание например дней одного набора и дней другого набора) ((если второй набор будет больше, то значение станет отрицательным))
    void addYears(int y);                           ///Метод добавления просчета по годам; y-год
    void addDays(int d);                            ///Метод добавления просчета по дням; d-день
    void addHours(int h);                           ///Метод добавления просчета по часам; h-час
    void addMinutes(int m);                         ///Метод добавления просчета по минутам; m-минуты
    void addSeconds(int s);                         ///Метод добавления просчета по секундам; s-секунды
    int toSeconds() const;                          ///Метод соединения кол-ва ВСЕХ секунд
    int toMinutes() const;                          ///Метод соединения кол-ва ВСЕХ минут
    int toHours() const;                            ///Метод соединения кол-ва ВСЕХ часов
    int toDays() const;                             ///Метод соединения кол-ва ВСЕХ дней
    int toYears() const;                            ///Метод соединения кол-ва лет
    std::string toString() const;                   ///Метод компановки строки
    void setTime(long y, short d, short h, short m, short s);                ///Метод отправки значений времени
    void getTime(long &y, short &d, short &h, short &m, short &s) const;     ///Метод получения значений времени
};
    void readTwoObjectsInFile(Time& t1, Time& t2, const std::string& filename);                ///Функция чтения с файла
    void writeTwoObjectsInFile(const Time& t1, const Time& t2, const std::string& filename);   ///Функция записи в файл