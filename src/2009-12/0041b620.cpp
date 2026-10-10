// from server: 51% by atomic.potato
extern "C" void __cdecl Function0041ae00(int, int, int, int);

struct CInstanceRecord
{
};

void __cdecl f(int a, int b, int c)
{
    if (c == 4)
    {
        *(int*)b = 0x00b03bd0;
        *((char*)b + 4) = 0;
        *((char*)b + 5) = 0;
    }
    else
    {
        c = c;
        Function0041ae00(a, a, b, c);
    }
}
