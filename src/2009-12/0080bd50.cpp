// from server: 45% by atomic.potato
extern "C" void* __stdcall GetDC(void*);
extern "C" int __stdcall ReleaseDC(void*, void*);
extern "C" void* __stdcall CreateCompatibleDC(void*);
extern "C" void __stdcall InitializeCriticalSection(void*);

struct S_func_0080b6b0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0080b6b0();
};

struct S_func_009264ae
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_009264ae();
};

struct S_func_0092649c
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0092649c();
};

struct S
{
    int f0;
    int f4;
    char pad8[0x18];
    int f20;
    int f24;
    int f28;
    int f2c;
    char pad30[0x14];
    char f44[0x14];
    char f58[4];
    S(int, int, int);
};

S::S(int a, int b, int c)
{
    S_func_009264ae* p8 = (S_func_009264ae*)((char*)this + 8);
    p8->S_func_009264ae::S_func_009264ae();
    *(int*)((char*)this + 8) = 0x9f3004;
    *(int*)((char*)this + 0x18) = 0;
    S_func_0080b6b0* p30 = (S_func_0080b6b0*)((char*)this + 0x30);
    p30->S_func_0080b6b0::S_func_0080b6b0();
    S_func_0080b6b0* p44 = (S_func_0080b6b0*)((char*)this + 0x44);
    p44->S_func_0080b6b0::S_func_0080b6b0();
    *(int*)((char*)this + 0x20) = a;
    *(int*)((char*)this + 0x24) = b;
    *(int*)((char*)this + 0x28) = c;
    *(int*)((char*)this + 0x1c) = 0;
    *(int*)((char*)this + 0x2c) = 0;
    *(int*)((char*)this + 0) = 0;
    *(int*)((char*)this + 4) = 0;
    void* hdc = GetDC(0);
    void* memdc = CreateCompatibleDC(hdc);
    S_func_0092649c* p8b = (S_func_0092649c*)((char*)this + 8);
    p8b->S_func_0092649c::S_func_0092649c();
    ReleaseDC(0, hdc);
    InitializeCriticalSection((char*)this + 0x58);
}
