// from server: 59% by atomic.potato
extern "C" void __cdecl Function_45ecf0(int, int, int, int);

struct S
{
};

void __cdecl f(int a, int b, int c)
{
    if (c != 4)
    {
        Function_45ecf0(a, b, c, 0);
        return;
    }

    *(int*)b = 0x00c139f8;
    *((char*)b + 4) = 0;
    *((char*)b + 5) = 0;
}
