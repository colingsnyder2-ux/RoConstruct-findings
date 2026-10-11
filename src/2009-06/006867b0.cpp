// from server: 91% by atomic.potato
extern void func_006749e0();

struct S {
    char pad0[0x10];
    int* p10;
    char pad1[0x0C];
    int* p20;
    char pad2[0x0C];
    int* p30;
    char pad3[0x10];
    void f(int);
};

void S::f(int a)
{
    if (a == 1) {
        *p10 = 0;
        *p20 = 0;
        *p30 = 0;
        return;
    }
    if (a == 3) {
        func_006749e0();
    }
}
