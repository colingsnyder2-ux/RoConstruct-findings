// from server: 43% by atomic.potato
struct X_004315d0 {
    int f(int);
};

extern "C" int __stdcall sub_00719008();
extern "C" void __stdcall sub_00774a30();
extern "C" int __stdcall sub_007393c0();
extern "C" void __stdcall sub_00772ef0();
extern "C" int __stdcall InterlockedIncrement(int*);

int X_004315d0::f(int a)
{
    int r = sub_00719008();
    if (r == -1)
        return 0;
    sub_00774a30();
    int* p = (int*)(sub_007393c0() + 4);
    InterlockedIncrement(p);
    sub_00772ef0();
    return 0;
}
