// from server: 82% by atomic.potato
typedef unsigned int DWORD;

extern "C" void __cdecl sub_006e6d60(DWORD);

void f(DWORD a, DWORD b, DWORD c)
{
    if (c != 4)
    {
        sub_006e6d60(c);
        return;
    }

    *(DWORD *)b = 0x00b43a30;
    *((unsigned char *)b + 4) = 0;
    *((unsigned char *)b + 5) = 0;
}
