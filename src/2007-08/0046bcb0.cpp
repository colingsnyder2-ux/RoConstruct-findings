// from server: 93% by colin
struct S_func_0046bcb0
{
    void* vftable;
    char buf[4];
    S_func_0046bcb0* dtor(char);
};

extern "C" void __fastcall sub_0077e6ac(void*);
extern "C" void __cdecl sub_0062fc62(void*);

S_func_0046bcb0* S_func_0046bcb0::dtor(char flags)
{
    vftable = (void*)0x796310;
    sub_0077e6ac(&buf[0]);
    if (flags & 1)
        sub_0062fc62(this);
    return this;
}
