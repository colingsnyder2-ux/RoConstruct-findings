// from server: 87% by colin
struct S
{
};

extern "C" void __stdcall sub_77E6AC(void*);
extern "C" void __cdecl sub_62FC62(void*);

void __cdecl f(void* p)
{
    if (p)
    {
        ((void (__thiscall*)(void*))sub_77E6AC)(p);
        sub_62FC62(p);
    }
}
