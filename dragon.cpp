#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    setlocale(0, "rus");

    // dragon 
    double hp_dragon = 500;
    double damage_dragon = 55;
    
    // unit
    double hp_unit = 10;
    double damage_unit = 15;
    int unit;

    // start game

    cout << "Введите количество копейщиков : ";
    cin >> unit;

    while (hp_dragon > 0 && unit > 0)
    {
        double all_damage = damage_unit * unit;
        double all_hp = hp_unit * unit;
        double update_hp_dragon = hp_dragon - all_damage;
        double update_unit = (all_hp - damage_dragon) / 10;
        
        cout << "Копейщики наносят удар... \n\t";
        Sleep(2000);
        cout << "нанесенный урон : -" << all_damage << "\n\tу дракона осталось : " << update_hp_dragon << " здоровья \n\n";
        hp_dragon = update_hp_dragon;

        Sleep(1000);
        cout << "Дракон наносит удар... \n\t";
        if (int(update_unit) == update_unit)
        {
            cout << "нанесенный урон : -" << damage_dragon << "\n\tосталось : " << update_unit << " копейщиков \n\n";
        }
        else
        {
            cout << "нанесенный урон : -" << damage_dragon << "\n\tосталось : " << int(update_unit) << " копейщиков \n\t1 копейщик ранен - 5 здоровья\n\n";

        }
        
        unit = update_unit;
    }

    if (unit <= 0)
    {
        cout << "все копейщики были убиты, вы проиграли\n";
    }

    else if (hp_dragon <= 0)
    {
        cout << "дракон был убит, вы выиграли\n";
    }
    
    else
    {
        cout << "КАК?\n";
    }
}

