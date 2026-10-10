// from server: 77% by atomic.potato
struct S
{
    int pad0[94];
    int *p178;
    int f(int);
};

int S::f(int value)
{
    p178[5] = value;
    return ((int (__thiscall *)(S *, int, int))(*(int **)this + 0x1ac))(this, 0, 1);
}
