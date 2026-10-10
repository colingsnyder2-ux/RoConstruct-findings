// from server: 62% by atomic.potato
struct S
{
    int f(int);
};

int S::f(int index)
{
    if (index >= 30 && index <= 62)
    {
        int value = *(((int *)this) + 0x364 / 4 + index);
        if (value != -1)
            return value;
    }
    return -1;
}
