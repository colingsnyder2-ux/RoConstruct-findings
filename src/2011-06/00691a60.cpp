// from server: 60% by atomic.potato
typedef unsigned int DWORD;

extern "C" void __cdecl target_006916f0();

struct S
{
    void f(DWORD, DWORD*);
};

void S::f(DWORD value, DWORD* result)
{
    if (value != 4)
    {
        target_006916f0();
        return;
    }

    result[0] = 0xc60370;
    ((unsigned char*)result)[4] = 0;
    ((unsigned char*)result)[5] = 0;
}
