// from server: 64% by atomic.potato
struct S
{
    int vfunc();
    int pad[6];
    int field18;
};

int S::vfunc()
{
    int n = --field18;
    if (n == 0 && this != 0)
        ((void (__thiscall *)(S *, int))(*(int *)this + 0x10))(this, 1);
    return n;
}
