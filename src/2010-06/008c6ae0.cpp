// from server: 81% by atomic.potato
struct S
{
    int f(int value);
};

int S::f(int value)
{
    int *object = *(int **)((char *)this + 4);
    int offset = *(int *)((char *)this + 8) + value;
    int (**table)(int *, int) = *(int (***)(int *, int))object;
    table[59](object, offset);
    return *(int *)((char *)this + 8);
}
