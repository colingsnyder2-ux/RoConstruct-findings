// from server: 100% by tester
// roc 2011-06 00470330  unit: UploadVideoVerb  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00470330
//
// 00470330  8b4964               mov ecx, dword ptr [ecx + 0x64]
// 00470333  85c9                 test ecx, ecx
// 00470335  7406                 je 0x47033d
// 00470337  8b01                 mov eax, dword ptr [ecx]
// 00470339  8b10                 mov edx, dword ptr [eax]
// 0047033b  ffe2                 jmp edx
// 0047033d  c3                   ret 

struct ExitCommand
{
    virtual void f();
    char padding[96];
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
