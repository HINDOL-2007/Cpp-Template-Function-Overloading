#include <iostream>
#include <string>
using namespace std;

template <class T>
class Ability
{
    string name;
    T powerLevel;

public:
    Ability(string n, T PL) : name(n), powerLevel(PL) {}
    void useAbility();
};
template <class T>
void Ability<T>::useAbility()
{
    cout << "Ability Name :- " << name
         << "\nAbility's Power Level :- " << powerLevel << endl;
}

template <class T>
void evaluatePower(T power)
{
    cout << "Generic Template Triggered: " << power << endl;
}
void evaluatePower(int power)
{
    cout << "EXACT MATCH Integer Triggered: " << power << endl;
}

int main()
{
    Ability<float> magic("Fireball", 45.5);
    magic.useAbility();
    evaluatePower(99.9);
    evaluatePower(100);
    return 0;
}