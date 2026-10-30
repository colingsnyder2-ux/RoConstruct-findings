// roc 2009-12 00455580  unit: ExitCommand  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00455580
//
// 00455580  8b497c               mov ecx, dword ptr [ecx + 0x7c]
// 00455583  85c9                 test ecx, ecx
// 00455585  7406                 je 0x45558d
// 00455587  8b01                 mov eax, dword ptr [ecx]
// 00455589  8b10                 mov edx, dword ptr [eax]
// 0045558b  ffe2                 jmp edx
// 0045558d  c3                   ret 
// copied from an identical function in another client (function ?f@ExitCommand@ns_ROCX000009@@UAEXXZ)

namespace ns_ROCX000009 {
struct ExitCommand
{
    virtual void f();
    char padding[0x78];
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
