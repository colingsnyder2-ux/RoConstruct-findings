// from server: 48% by atomic.potato
struct S
{
    short f();
    char padding[160];
    short value;
};

void helper();

short S::f()
{
    helper();
    return value;
}

void helper()
{
}
