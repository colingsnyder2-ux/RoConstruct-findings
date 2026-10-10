// from server: 61% by atomic.potato
typedef unsigned char BYTE;

extern "C" void __cdecl Function740ff0();

void Function7411e0(int a, int b, int c)
{
    if (c != 4)
    {
        Function740ff0();
        return;
    }

    *(int*)b = 0x00b54b40;
    *((BYTE*)b + 4) = 0;
    *((BYTE*)b + 5) = 0;
}
