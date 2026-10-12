// from server: 66% by king_originala
#pragma optimize("y", off)

struct S
{
    char storage[12];
    S(int);
};

extern char type_8D07D8;
extern "C" void __stdcall sub_6A158C(void*, void*);
extern "C" void* __cdecl sub_6A0920(unsigned int);

void* __cdecl func_00553430(volatile unsigned int n)
{
    if (n <= 0U)
    {
        n = 0;
    }
    else if (0xFFFFFFFFU / n < 0x28U)
    {
        S error(0);
        sub_6A158C(&error, &type_8D07D8);
    }

    return sub_6A0920(n * 0x28U);
}
