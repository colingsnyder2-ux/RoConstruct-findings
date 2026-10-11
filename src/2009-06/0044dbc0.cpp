// from server: 100% by tester
// roc 2009-06 0044dbc0  unit: ExitCommand  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044dbc0
//
// 0044dbc0  8b497c               mov ecx, dword ptr [ecx + 0x7c]
// 0044dbc3  85c9                 test ecx, ecx
// 0044dbc5  7406                 je 0x44dbcd
// 0044dbc7  8b01                 mov eax, dword ptr [ecx]
// 0044dbc9  8b10                 mov edx, dword ptr [eax]
// 0044dbcb  ffe2                 jmp edx
// 0044dbcd  c3                   ret 

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
