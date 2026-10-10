// from server: 61% by atomic.potato
struct S
{
    int f();
};

extern "C" int sub_894e60(S *);

int S::f()
{
    if (sub_894e60(this))
        return ((int (__thiscall *)(S *))(*(int **)this)[0x8c])(this);
    return 0;
}
