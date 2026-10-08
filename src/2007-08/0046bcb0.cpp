// from server: 90% by colin
// roc 2007-08 0046bcb0  unit: RBX::LDraw2Lua::LDrawParser  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046bcb0
//
// 0046bcb0  56                   push esi
// 0046bcb1  8bf1                 mov esi, ecx
// 0046bcb3  8d4e04               lea ecx, [esi + 4]
// 0046bcb6  c70610637900         mov dword ptr [esi], 0x796310
// 0046bcbc  ff15ace67700         call dword ptr [0x77e6ac]
// 0046bcc2  f644240801           test byte ptr [esp + 8], 1
// 0046bcc7  7409                 je 0x46bcd2
// 0046bcc9  56                   push esi
// 0046bcca  e8933f1c00           call 0x62fc62
// 0046bccf  83c404               add esp, 4
// 0046bcd2  8bc6                 mov eax, esi
// 0046bcd4  5e                   pop esi
// 0046bcd5  c20400               ret 4

struct S_func_0046bcb0
{
    void* vftable;
    char buf[4];
    S_func_0046bcb0* dtor(char);
};

extern "C" void __stdcall sub_0077e6ac(void*);
extern "C" void __cdecl sub_0062fc62(void*);

S_func_0046bcb0* S_func_0046bcb0::dtor(char flags)
{
    vftable = (void*)0x796310;
    sub_0077e6ac(&buf[0]);
    if (flags & 1)
        sub_0062fc62(this);
    return this;
}
