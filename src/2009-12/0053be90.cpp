// from server: 60% by atomic.potato
struct S
{
    void __cdecl f(void*, unsigned long);
};

void S::f(void* result, unsigned long value)
{
    if (value != 4)
    {
        return;
    }

    *(unsigned long*)result = 0xb1db50;
    ((unsigned char*)result)[4] = 0;
    ((unsigned char*)result)[5] = 0;
}
