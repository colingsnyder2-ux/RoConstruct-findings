// from server: 95% by king_originala
struct S_func_006159f0 {
    int f(int a1);
};

struct S {
    S* f(int a1);
};

S* S::f(int a1)
{
    ((S_func_006159f0*)this)->f(a1);
    *(volatile int*)((char*)this + 0) = 0x83584c;
    *(volatile int*)((char*)this + 4) = 0x835834;
    *(volatile int*)((char*)this + 28) = 0;
    *(volatile int*)((char*)this + 32) = 0;
    return this;
}
