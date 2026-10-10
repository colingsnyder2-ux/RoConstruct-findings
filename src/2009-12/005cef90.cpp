// from server: 82% by atomic.potato
extern "C" void __cdecl Function_5cc880(int);

struct S
{
};

void __cdecl f(int a, int b, int c)
{
    if (c != 4)
    {
        Function_5cc880(c);
        return;
    }

    *(int*)b = 0x00b25cf0;
    *((char*)b + 4) = 0;
    *((char*)b + 5) = 0;
}
