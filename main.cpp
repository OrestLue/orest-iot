#include "Tree.h"

Tree::Tree(string Name, string Material, double Price, double Height, string Color, double Age, string Country, double Width)
{
    name = Name;
    material = Material;
    this->price = Price;
    height = Height;
    color = Color;
    age = Age;
    country = Country;
    width = Width;
}

void Tree::get_name()
{
    cout << "Name: " << name << endl;
}
void Tree::get_material()
{
    cout << "Material: " << material << endl;
}
void Tree::get_price()
{
    cout << "Price: " << price << endl;
}
void Tree::get_height()
{
    cout << "Height: " << height << endl;
}
void Tree::get_color()
{
    cout << "Color: " << color << endl;
}
void Tree::get_age()
{
    cout << "Age: " << age << endl;
}
void Tree::get_country()
{
    cout << "Country: " << country << endl;
}
void Tree::get_width()
{
    cout << "width: " << width << endl;
}