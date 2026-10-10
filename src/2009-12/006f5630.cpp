// from server: 43% by atomic.potato
struct S
{
};

void __cdecl f(int, int value, int* result)
{
    if (value == 4)
    {
        *result = 0x00b45d98;
        *((char*)result + 4) = 0;
        *((char*)result + 5) = 0;
    }
    else
    {
        f(0, value, result);
    }
}
