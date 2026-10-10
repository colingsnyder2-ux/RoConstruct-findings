// from server: 70% by atomic.potato
struct S
{
    int f();
};

extern "C" void sub_7f3e30(S *);

extern "C" void sub_81f480(S *);

int S::f()
{
    sub_7f3e30(this);
    (*(void (__thiscall **)(S *))(*(int *)this + 0x214))(this);
    sub_81f480(this);
    return 0;
}
