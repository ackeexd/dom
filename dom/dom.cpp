#include <iostream>
using namespace std;
// описать дом;
// типы сущностей: дом, комната, холодильник, еда, напитки, жилец
// 

class room {
public:
    double square;
    string colors;
    string razmer;
    bool mebel;
    int okna;
    void zaity()
    {
        cout << "vu zashli v komnaty. " << "\n";
    }
    void exit()
    {
        cout << "vu vushly iz komnatu: pozdravlayu!" << "\n";
    }
    void close()
    {
        cout << "vu zakrili komnaty: vse` komnata zakruta nada otkrut`" << "\n";
    }
    void otkrut()
    {
        cout << "vu otkruli komnaty: ez ( zhabka v ochkax ) " << "\n";
    }
    void osmotr()
    {
        cout << "vu osmotreli roomy  i tam: ";
        cout << "ploshad`: " << square << "\n";
        cout << "cvet komnatu: " << colors << "\n";
        cout << "razmer: " << razmer << "\n";
        cout << "okna: " << okna << "\n";
        cout << "mebel`: " << mebel << "\n";
    }
        

};
class House {
public:
    // 1) что это - какие сделать поля  (атрибуты, свойства, характеристики) - список переменных\ констант, которые описывают эту сущность 
    // размеры
    // цвет
    //вес и т.д
    int storeys; // etazhnost`
    double squadre; // площадь
    bool parking; // есть паркинг
    bool cozy; // уютностть
    int balcony_count; // количество балконов
    string address;
    int count_of_rooms;// количество комнаты
    room* rooms = new room[3];// по умолчанию в домах буит 3 комнаты

    void print() //// что можно делать  сделать с обьектами и что они могут сделать.
    {
        cout << "etazhnost`: " << storeys << "\n";
        cout << "skolko balkonov: " << balcony_count << "\n";
        cout << "address doma: " << address << "\n";

    }
    void podzhech()
    {
        cout << "vu podozhgli dom: ploxaya koncovka(" << "\n";
    }
    void prodat()
    {
        cout << "vu prodali traphouse: +cash" << "\n";
    }
    void remont()
    {
        cout << "vu sdelali euroremont v traphouse : +moral, +rep" << "\n";
    }
    void arenda()
    {
        cout << "vu sdali traphouse v arendy: +cash kazhdiy mounth" << "\n";
    }
};

class food {
public:
    bool smachno;
    int skok;
    bool svezhaya;
    bool poleznaya;
    bool shayrma;
    void pohavat()
    {
        cout << "vu vkusno poeli: sutnost`++" << "\n";
    }
    void razagret()
    {
        cout << "vu razagreli food: vkus++" << "\n";
    }
    void duhlyak()
    {
        cout << "vu vukinyli duhlyak: if (svezhaya == false)svezhaya = true" << "\n";
    }
    void razdelit()
    {
        cout << "vu razdelili ede na porchii: skok*1.5" << "\n";
    }
    void shaurma()
    {
        cout << "vu poeli shaurmy: shaurma--" << "\n";
    }
};
class drink {
public:
    double ml;
    string cvet;
    string materialbutulki;
    int skok;
    int alko;
    void osmotr()
    {
        cout << "ml: " << ml << "\n";
        cout << "cvet: " << cvet << "\n";
        cout << "materialbutulki: " << materialbutulki << "\n";
        cout << "skok: " << skok << "\n";
        cout << "alko: " << alko << "\n";
    }
    void vupit()
    {
        cout << "vu vupili napitok: zhahda--" << "\n";
    }
    void razbit()
    {
        cout << "vu razbili butiliki(((: skok--" << "\n";
    }
    void alkaw()
    {
        cout << "vu vupili alkogoly: hp--, alko--" << "\n";
    }
    void kupit()
    {
        cout << "vu kupili ewe napitkov: cash--, alko++, skok++" << "\n";
    }

};
class xolodos {
public:

    string razmer;
    string cvet;
    bool soviet;
    bool rabochiy;
    bool pust;

   void posmotret()
   {
       cout << "razmer: " << razmer << "\n";
       cout << "cvet: " << cvet << "\n";
       cout << "soviet: " << soviet << "\n";
       cout << "rabochiy: " << rabochiy << "\n";
       cout << "pust: " << pust << "\n";
   }
   void vkluchit()
   {
       cout << "vu enable xolodos: komynalka++" << "\n";
   }
   void vukluchit()
   {
       cout << "vu vuklychili xolodos: cash++" << "\n";
   }
   void repair()
   {
       cout << "vu pochinilin xolodos: moral++, ochki rabotu--, cash--" << "\n";
   }
   void prodat()
   {
       cout << "vu sale xolodos: ny i zachem?( cash++, moral--" << "\n";
   }

};

class Human {
public:
    bool alive;
    int str;
    int agl;
    int intelect;
    int stamina;
    void umeret()
    {
        cout << "vu ymerli ot smerty game over: alive = false " << "\n";
    }
    void stats()
    {
        cout << "sila: " << str << "\n";
        cout << "lvk: " << agl << "\n";
        cout << "inta: " << intelect << "\n";
        cout << "stamina: " << stamina << "\n";
    }
    void vneshcka()
    {
        cout << "vu posmotreli na sebya: hz zachem" << "\n";
    }
    void train()
    {
        cout << "vu treniryetes po metody papicha: str++, agl++, stamina++, intelect--" << "\n";
    }
    void achivments()
    {
        cout << "spisok vashux dosticheniy: 0" << "\n";
    }

};

int main()
{
    // создание обьекта класса хаус по сути  это переменная с типом хаус
    cout << "traphouse" << "\n";
    House traphouse;
    traphouse.balcony_count = 1;
    traphouse.address = "zastava 1";
    traphouse.storeys = 3;
    traphouse.print();
    traphouse.remont();
    traphouse.arenda();
    traphouse.prodat();
    traphouse.podzhech();
    cout << "xolodos" << "\n";
    xolodos holodnuy;
    holodnuy.cvet = "white";
    holodnuy.razmer = "boloshoy";
    holodnuy.soviet = false;
    holodnuy.pust = false;
    holodnuy.rabochiy = true;
    holodnuy.posmotret();
    holodnuy.vkluchit();
    holodnuy.vukluchit();
    holodnuy.repair();
    holodnuy.prodat();
    cout << "eda" << "\n";
    food xavka;
    xavka.skok = 5;
    xavka.poleznaya = false;
    xavka.smachno = true;
    xavka.svezhaya = true;
    xavka.shayrma = true;
    xavka.duhlyak();
    xavka.razdelit();
    xavka.razagret();
    xavka.pohavat();
    xavka.shaurma();
    cout << "komnaty" << "\n";
    room main;
    main.colors = "zelenaya";
    main.mebel = true;
    main.okna = true;
    main.square = 15.5;
    main.razmer = "bolshaya+-";
    main.close();
    main.otkrut();
    main.exit();
    main.zaity();
    main.osmotr();
    cout << "napitki" << "\n";
    drink prekolu;
    prekolu.cvet = "zheltiy";
    prekolu.ml = 150;
    prekolu.materialbutulki = "steklo";
    prekolu.skok = 7;
    prekolu.alko = 3;
    prekolu.osmotr();
    prekolu.vupit();
    prekolu.razbit();
    prekolu.kupit();
    prekolu.alkaw();
    cout << "human" << "\n";
    Human chel;
    chel.alive = true;
    chel.str = 12;
    chel.agl = 15;
    chel.intelect = 99;
    chel.stamina = 5;
    chel.stats();
    chel.achivments();
    chel.vneshcka();
    chel.train();
    chel.umeret();
        



























}


