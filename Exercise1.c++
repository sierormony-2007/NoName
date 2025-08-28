#include <iostream>
#include <string>
using namespace std;
class Book
{
public:
    std::string title;
    std::string author;
    int pages;
    void display()
    {
        cout << "Title: " << title << '\n';
        cout << "Author: " << author << '\n';
        cout << "Pages: " << pages << '\n';
    }
};
int main()
{
    Book object1 = {"The 48 laws of power", "James charles", 123};
    Book object2 = {"The art of seduction", "Dark field", 200};
    object1.display();
    object2.display();
    return 0;
}//អ៊ីស៊ានអ្នកធ្វើ