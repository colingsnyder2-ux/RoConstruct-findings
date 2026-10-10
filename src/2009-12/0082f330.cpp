// from server: 44% by atomic.potato
struct S
{
    int f(unsigned int index);
};

int S::f(unsigned int index)
{
    if (index - 0x1eU > 0x20U)
        return f(index);

    int value = ((int *)this)[0xd1 + index];

    if (value == -1)
        return f(index);

    return value;
}
