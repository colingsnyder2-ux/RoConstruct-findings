// from server: 60% by atomic.potato
struct S
{
    void __cdecl f(int, int);
};

void S::f(int, int value)
{
    int local;
    f(value, (int)&local);
}
