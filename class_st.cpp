#include <iostream>
#include <sstream>
#include <string> 
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student{
    private: // Se declaran las variables de la clase
    int age;
    int standard;
    string first_name,last_name;
    
    public:
        //SETTERS
        void set_age(int _age){
            age = _age;
        }
        void set_standard(int _standard){
            standard=_standard;
        }
        void set_first_name(string _fn){
            first_name=_fn;
            
        }
        void set_last_name(string _ln){
            last_name = _ln;
        }
        //GETTERS
        int get_age(){
            return age;
        }
        string get_last_name(){
            return last_name;
        }
        string get_first_name(){
            return first_name;
        }
        int get_standard(){
            return standard;
        }
        //FUNCTIONS
        string to_string(){
            string str;
            str = std::to_string(age) + ","+first_name+","+last_name+","+ 
                std::to_string(standard);
            
            return str;
        }
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
