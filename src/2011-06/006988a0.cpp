// from server: 55% by atomic.potato
struct S
{
    void __cdecl f(void* result, int value);
};

void S::f(void* result, int value)
{
    if (value == 4)
    {
        *(int*)result = 0x00c638d8;
        ((unsigned char*)result)[4] = 0;
        ((unsigned char*)result)[5] = 0;
    }
    else
    {
        f(result, value);
    }
}
