// from server: 30% by atomic.potato
extern "C" void* __stdcall sub_5EACD0(int, int);

extern "C" void __stdcall sub_63C400();
extern "C" void __stdcall sub_6773A0();

struct S {
    char pad0[0x38];
    int field38;
    int field3c;
    char pad40[8];
    char field48[8];
    void* vtable;
    void ctor(int, int, int, int, int, int);
    void sub_5FBF50();
};

void S::ctor(int a, int b, int c, int d, int e, int f)
{
    void* p = sub_5EACD0(c, d);
    sub_6773A0();
    field38 = e;
    field3c = f;
    vtable = (void*)0x8d7614;
    sub_63C400();
    sub_63C400();
    sub_5FBF50();
}
