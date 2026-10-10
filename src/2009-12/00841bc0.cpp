// from server: 66% by atomic.potato
struct S
{
    int f();
};

int S::f()
{
    int *p = *(int **)((char *)this + 0x180);
    int **v = (int **)(*p + 0x148);
    return **v;
}
