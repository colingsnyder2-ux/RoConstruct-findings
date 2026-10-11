// from server: 29% by atomic.potato
extern "C" {
    void __stdcall G1_func_0098b6f0();
    void __stdcall G1_func_0098b6e4();
}

struct S {
    int f(int, int, int, int, int, int, int, int, int, int);
};

int S::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    char pad[0x30];
    *(int*)((char*)this + 0) = 0;
    *(int*)((char*)this + 4) = a1;
    *(int*)((char*)this + 8) = 0;
    G1_func_0098b6f0();
    *(int*)((char*)this + 0x28) = a9;
    *(char*)((char*)this + 0x2c) = (char)a10;
    G1_func_0098b6e4();
    return (int)this;
}
