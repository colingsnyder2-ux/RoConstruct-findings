// from server: 46% by atomic.potato
struct S
{
};

void __cdecl f(int, int *result, int value)
{
    if (value != 4)
    {
        f(0, result, value);
        return;
    }

    result[0] = 0xb57968;
    result[1] = 0;
}
