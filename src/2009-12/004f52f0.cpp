// from server: 96% by atomic.potato
struct S
{
    int f(int);
};

int S::f(int index)
{
    return ((*(unsigned int *)((char *)this + 0x138) & (1u << index)) != 0) ? -1 : 0;
}
