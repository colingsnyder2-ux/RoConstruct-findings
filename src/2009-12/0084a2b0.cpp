// from server: 84% by atomic.potato
struct S
{
    int f();
};

int S::f()
{
    int (*p)() = (int (*)())(*(int**)((char*)this + 12));
    if (p)
        return p();
    return 0;
}
