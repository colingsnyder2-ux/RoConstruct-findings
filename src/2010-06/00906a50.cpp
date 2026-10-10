// from server: 35% by atomic.potato
struct S
{
    S* __cdecl f(int);
};

S* S::f(int value)
{
    int state = 0;
    char flag = 0;
    f(state);
    return this;
}
