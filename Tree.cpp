#include "Tree.h"

int main()
{

    Tree TreeObject("NoName1", "wood", 100, 200, "green", 10, "Usa", 70);
    TreeObject.get_name();
    TreeObject.get_material();
    TreeObject.get_price();
    TreeObject.get_height();
    TreeObject.get_color();
    TreeObject.get_age();
    TreeObject.get_country();
    TreeObject.get_width();

    Tree TreeObject1("NoName2", "plastic", 150, 250, "white", 12, "Canada", 60);
    TreeObject1.get_name();
    TreeObject1.get_material();
    TreeObject1.get_price();
    TreeObject1.get_height();
    TreeObject1.get_color();
    TreeObject1.get_age();
    TreeObject1.get_country();
    TreeObject1.get_width();

    Tree TreeObject2("NoName3", "wood", 200, 300, "red", 11, "Ukraine", 50);
    TreeObject2.get_name();
    TreeObject2.get_material();
    TreeObject2.get_price();
    TreeObject2.get_height();
    TreeObject2.get_color();
    TreeObject2.get_age();
    TreeObject2.get_country();
    TreeObject2.get_width();

    return 0;
}