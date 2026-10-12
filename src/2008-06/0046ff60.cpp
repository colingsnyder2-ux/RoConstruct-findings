// from server: 19% by colin
struct S_func_0046ff60 {
    void f();
};

extern "C" int __stdcall sub_0094278C();
extern "C" void __stdcall sub_00802468();
extern "C" void __stdcall sub_008027F4(int);
extern "C" void __cdecl sub_0050A9B0();

void S_func_0046ff60::f()
{
    char bl;
    if (sub_0094278C()) {
        bl = 1;
    } else {
        bl = 0;
    }
    if (bl) {
        sub_008027F4(-1);
    }
    sub_0050A9B0();
}
