// roc 2010-06 00602610  unit: RBX::VMouseCommand::?$sp_counted_impl_p  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00602610
//
// 00602610  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00602613  85c9                 test ecx, ecx
// 00602615  7409                 je 0x602620
// 00602617  8b01                 mov eax, dword ptr [ecx]
// 00602619  8b5040               mov edx, dword ptr [eax + 0x40]
// 0060261c  6a01                 push 1
// 0060261e  ffd2                 call edx
// 00602620  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX00000a@@QAEXXZ)

namespace ns_ROCX00000a {
struct S
{
    char pad[12];
    void* field;
    void f();
};

void S::f()
{
    void* p = field;
    if (p)
    {
        typedef void (__thiscall *Fn)(void*, int);
        Fn fn = *(Fn *)((char *)*(void **)p + 0x40);
        fn(p, 1);
    }
}
}
