#include <iostream>
#include "stack.h"
using namespace std;    
int main() {
    Stack st;
    st.push(6);
    st.push(60);
    st.push(40);
    st.show(); // �� �������: 6 60 40

    // �������� ��������:
    // st.multiPop(2);
    // st.show();

    // Stack copy = st; // �������� ��������� ������������
    // copy.push(100);
    // copy.show();

    return 0;
}
