// from server: 35% by atomic.potato
struct S
{
    S* __cdecl f(int);
};

S* S::f(int value)
{
    S* result = 0;
    char flag = 0;
    this->f((int)flag);
    return this;
}
