// from server: 49% by atomic.potato
extern "C" void __cdecl sub_696390(int, int, int);

struct S
{
    void __cdecl f(int, int, int);
};

void __cdecl S::f(int a, int b, int value)
{
    if (value == 4)
    {
        int* p = (int*)a;
        *p = 0x00b38a08;
        ((char*)p)[4] = 0;
        ((char*)p)[5] = 0;
    }
    else
    {
        sub_696390(a, b, value);
    }
}
