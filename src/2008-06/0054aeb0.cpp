// from server: 35% by atomic.potato
struct S
{
    int f(int index);
};

int S::f(int index)
{
    return ((int*)this)[0] + index * 4;
}
