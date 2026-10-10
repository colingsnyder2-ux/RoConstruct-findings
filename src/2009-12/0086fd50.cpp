// from server: 41% by atomic.potato
struct S
{
    int f(int);
    int (*g)(int, int);
};

int S::f(int value)
{
    int result;
    result = g(value, *(int *)((char *)this + 0x28));
    return result;
}
