// from server: 45% by colin
struct S_func_006ab360 {
    char pad0[212];
    int m_x;
    void f(int a1);
};

struct S_func_006ab8d0 {
    void f(int a1);
};

struct S_func_006b50b0 {
    void f(int a1);
};

struct S_func_006f48d0 {
    void* f(int a1, int a2, int a3, int a4, int a5);
};

void func_006a1c20();
int func_006a17f0();

struct CXTPCustomizeSheet {
    void f(int a1);
};

void CXTPCustomizeSheet::f(int a1) {
    int i;
    void* p;
    int count;
    int total;

    count = 0;
    for (i = 0; i < a1; i++) {
        p = ((S_func_006f48d0*)this)->f(0x23aa, 0, -1, 0, 0);
        if (*(int*)((char*)p + 0x88) != 0) {
            *(int*)((char*)p + 0x88) = 0;
            ((S_func_006ab8d0*)p)->f(1);
        }
        ((S_func_006ab360*)p)->f(8);
        count++;
    }

    func_006a1c20();
    total = func_006a17f0();
    ((S_func_006b50b0*)this)->f(total * 0x17 + 6);
}
