// roc 2009-12 00455590  unit: ExitCommand  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00455590
//
// 00455590  8b4978               mov ecx, dword ptr [ecx + 0x78]
// 00455593  85c9                 test ecx, ecx
// 00455595  7406                 je 0x45559d
// 00455597  8b01                 mov eax, dword ptr [ecx]
// 00455599  8b10                 mov edx, dword ptr [eax]
// 0045559b  ffe2                 jmp edx
// 0045559d  c3                   ret 
// copied from an identical function in another client (function ?f@ExitCommand@ns_ROCX00000a@@UAEXXZ)

namespace ns_ROCX00000a {
struct ExitCommand
{
    virtual void f();
    char padding[116];
    void *field_7c;
};

void ExitCommand::f()
{
    void *p = field_7c;
    if (p)
    {
        void **vtable = *(void ***)p;
        ((void (__thiscall *)(void *))vtable[0])(p);
    }
}
}
