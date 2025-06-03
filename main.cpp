#include <iostream>
#include "stack.h"
using namespace std;    
int main() {
    Stack st;
    st.push(6);
    st.push(60);
    st.push(40);
    st.show(); // має вивести: 6 60 40

    // Додаткові перевірки:
    // st.multiPop(2);
    // st.show();

    // Stack copy = st; // Перевірка копіюючого конструктора
    // copy.push(100);
    // copy.show();

    return 0;
}
