// from server: 32% by atomic.potato
struct S
{
    int f(int);
};

extern "C" S* func_00804590(S*);

int S::f(int value)
{
    S* object = func_00804590(this);
    return object->f(value);
}
