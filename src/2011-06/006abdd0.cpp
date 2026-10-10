// from server: 60% by atomic.potato
struct S
{
    void f(int, int*);
};

void S::f(int value, int* result)
{
    if (value != 4)
    {
        result[0] = value;
        return;
    }

    result[0] = 0xc68170;
    result[1] = 0;
    result[2] = 0;
}
