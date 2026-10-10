// from server: 61% by colin
struct CXTPCommandBar {
    char pad[0x20];
    void* hwnd;
    char pad2[0xf8 - 0x24];
    void* field_f8;
    int method_643980();
    int method_6439b0();
    int method_6468a0(int, int, int);
    int method_67a9a0(int, int);
    int func(int, int, int);
};

extern "C" int __stdcall ClientToScreen(void*, void*);

int CXTPCommandBar::func(int a, int b, int c)
{
    int result = method_67a9a0(a, b);
    if (result != 0) {
        int (*fn)(void*, int, int) = *(int (**)(void*, int, int))(*(int*)result + 0xf0);
        if (fn((void*)result, a, b) != 0)
            return 0;
    }
    int edi = method_643980();
    if (edi == 0)
        return 0;
    if (method_6439b0() != 0) {
        return method_6468a0(a, b, c);
    }
    int (*fn1)(void*, int, int, int) = *(int (**)(void*, int, int, int))(*(int*)this + 0x140);
    fn1(this, 0, 1, 0);
    int (*fn2)(void*, int, int) = *(int (**)(void*, int, int))(*(int*)this + 0x148);
    fn2(this, -1, 0);
    int (*fn3)(void*, int, int) = *(int (**)(void*, int, int))(*(int*)this + 0x19c);
    fn3(this, 0, 1);
    int pt[2];
    ClientToScreen(hwnd, pt);
    int (*fn4)(void*, void*, int, int) = *(int (**)(void*, void*, int, int))(*(int*)edi + 0x68);
    fn4((void*)edi, this, pt[0], pt[1]);
    return 0;
}
