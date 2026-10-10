// from server: 86% by colin
struct S
{
    char pad[0xc];
    void* field_c;
    void destroy();
};

extern "C" void __stdcall sub_0077E6AC();
extern "C" void __cdecl sub_0062FC62(void*);

void S::destroy()
{
    void* p = field_c;
    if (p != 0)
    {
        sub_0077E6AC();
        sub_0062FC62(p);
    }
}
