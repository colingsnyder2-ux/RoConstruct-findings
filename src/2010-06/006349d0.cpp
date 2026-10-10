// from server: 82% by atomic.potato
extern "C" void __cdecl RBX_6344E0(int);

struct S
{
};

void __cdecl f(int a, int b, int c)
{
    if (c != 4)
    {
        RBX_6344E0(c);
    }
    else
    {
        *(int*)b = 0x00bb3c58;
        *((unsigned char*)b + 4) = 0;
        *((unsigned char*)b + 5) = 0;
    }
}
