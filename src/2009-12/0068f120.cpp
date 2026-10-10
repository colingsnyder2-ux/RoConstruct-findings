// from server: 44% by atomic.potato
struct S
{
};

void __cdecl f(int value, int* result)
{
    if (value != 4)
        return;
    *result = 0xb371c8;
    result[1] = 0;
    result[2] = 0;
}
