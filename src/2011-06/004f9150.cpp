// from server: 53% by atomic.potato
extern "C" void __cdecl Dispatch(int);

struct S
{
    void __cdecl f(int, int);
};

void S::f(int, int value)
{
    if (value != 4)
    {
        Dispatch(value);
        return;
    }

    int* result = 0;
    result[0] = 0xc2ab00;
    ((char*)result)[4] = 0;
    ((char*)result)[5] = 0;
}
