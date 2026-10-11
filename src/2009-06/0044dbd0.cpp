// from server: 100% by tester
// roc 2009-06 0044dbd0  unit: ExitCommand  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044dbd0
//
// 0044dbd0  8b4978               mov ecx, dword ptr [ecx + 0x78]
// 0044dbd3  85c9                 test ecx, ecx
// 0044dbd5  7406                 je 0x44dbdd
// 0044dbd7  8b01                 mov eax, dword ptr [ecx]
// 0044dbd9  8b10                 mov edx, dword ptr [eax]
// 0044dbdb  ffe2                 jmp edx
// 0044dbdd  c3                   ret 

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
