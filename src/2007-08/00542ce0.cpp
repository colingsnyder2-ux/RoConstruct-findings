// from server: 45% by colin
// roc 2007-08 00542ce0  unit: RBX::VInstance::?$SignalDesc  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00542ce0
//
// 00542ce0  677a00               jp 0x542ce3
// 00542ce3  894810               mov dword ptr [eax + 0x10], ecx
// 00542ce6  895014               mov dword ptr [eax + 0x14], edx
// 00542ce9  eb02                 jmp 0x542ced
// 00542ceb  33c0                 xor eax, eax
// 00542ced  56                   push esi
// 00542cee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00542cf2  6a00                 push 0
// 00542cf4  c744240800000000     mov dword ptr [esp + 8], 0
// 00542cfc  8906                 mov dword ptr [esi], eax
// 00542cfe  e85fcf0e00           call 0x62fc62
// 00542d03  83c404               add esp, 4
// 00542d06  8bc6                 mov eax, esi
// 00542d08  5e                   pop esi
// 00542d09  59                   pop ecx
// 00542d0a  c3                   ret 

struct SignalDesc
{
    char pad0[0x10];
    int field10;
    int field14;
};

struct Holder
{
    SignalDesc* ptr;
};

extern "C" void __cdecl sub_0062FC62(int);

Holder* __stdcall sub_00542CE0(SignalDesc* a, int b, int c, Holder* out)
{
    SignalDesc* p;
    if (a != 0)
    {
        a->field10 = b;
        a->field14 = c;
        p = a;
    }
    else
    {
        p = 0;
    }
    out->ptr = p;
    sub_0062FC62(0);
    return out;
}
