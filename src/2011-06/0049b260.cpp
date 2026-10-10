// from server: 80% by atomic.potato
typedef unsigned int DWORD;

extern "C" void __cdecl sub_49af50(DWORD);

struct S
{
};

void __cdecl f(int a, DWORD b)
{
    if (a != 4)
    {
        sub_49af50(a);
        return;
    }

    *(DWORD *)b = 0x00c19ad0;
    *((unsigned char *)b + 4) = 0;
    *((unsigned char *)b + 5) = 0;
}
