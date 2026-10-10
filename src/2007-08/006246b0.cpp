// from server: 42% by colin
struct Button {
    int f0;
    int f4;
    int f8;
    int fc;
    char pad[0x10];
    Button(int, int, int, int, int, int, int);
};

extern "C" void __stdcall sub_77e6a4(void*);
extern "C" void __stdcall sub_77e690(void*, void*);
extern "C" void __stdcall sub_77e6ac(void*);

Button::Button(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    f4 = 0;
    f8 = 0;
    fc = 0;
    sub_77e6a4(&pad[0]);
    sub_77e690(&pad[0], &a1);
    sub_77e6ac(&a1);
}
