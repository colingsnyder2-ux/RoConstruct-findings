// from server: 95% by king_originala
extern char table_0084a2e4[];
extern char table_0084a2c8[];

struct S_func_006159f0 {
    int f(int a1);
};

struct S {
    S* f(int a1);
};

S* S::f(int a1)
{
    ((S_func_006159f0*)this)->f(a1);
    *(volatile int*)((char*)this + 0) = (int)table_0084a2e4;
    *(volatile int*)((char*)this + 4) = (int)table_0084a2c8;
    *(volatile int*)((char*)this + 0x1c) = 0;
    *(volatile int*)((char*)this + 0x20) = 0;
    return this;
}
