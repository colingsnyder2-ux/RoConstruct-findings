// from server: 56% by atomic.potato
struct S {
    int f();
};

extern "C" void sub_8933e0();

int S::f()
{
    sub_8933e0();
    if ((*(int (**)(S *))(*(int **)this + 0x168))(this))
        return (*(int (**)(S *))(*(int **)this + 0x220))(this);
    return 0;
}
