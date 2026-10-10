// from server: 58% by atomic.potato
struct S
{
    void __stdcall f(unsigned int*, unsigned int);
};

void __stdcall S::f(unsigned int* result, unsigned int value)
{
    if (value == 4)
    {
        return;
    }

    *result = 0x00b5f330;
    *((unsigned char*)result + 4) = 0;
    *((unsigned char*)result + 5) = 0;
}
