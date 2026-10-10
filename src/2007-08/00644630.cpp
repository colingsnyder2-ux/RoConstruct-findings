// from server: 44% by colin
struct CXTPCommandBar {
    int f(int a, int b, int c);
};

extern "C" int IsMenu(int a);

int CXTPCommandBar::f(int a, int b, int c) {
    if (this != 0) return 0;
    int result = IsMenu(a);
    if (result == 0) return 0;
    if (b != 0) {
        int* ptr = (int*)((char*)this + 0xf8);
        int (*func1)(int) = (int (*)(int))0x67a660;
        func1(*ptr);
        int (*func2)(CXTPCommandBar*, int) = (int (*)(CXTPCommandBar*, int))0x6444e0;
        func2(this, 0);
        int (*func3)(CXTPCommandBar*) = (int (*)(CXTPCommandBar*))0x62ff50;
        result = func3(this);
        if (result != 0) {
            *ptr |= 0xc;
        }
    }
    return 1;
}
