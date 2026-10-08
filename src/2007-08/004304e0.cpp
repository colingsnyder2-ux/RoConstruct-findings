// from server: 42% by colin
// roc 2007-08 004304e0  unit: CPatchedControlComboBox  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004304e0
//
// 004304e0  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 004304e1  7800                 js 0x4304e3
// 004304e3  8bc6                 mov eax, esi
// 004304e5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004304e9  64890d00000000       mov dword ptr fs:[0], ecx
// 004304f0  59                   pop ecx
// 004304f1  5e                   pop esi
// 004304f2  83c410               add esp, 0x10
// 004304f5  c3                   ret 

struct CPatchedControlComboBox
{
    void* f(void* a, void* b, void* c, void* d);
};

void* CPatchedControlComboBox::f(void* a, void* b, void* c, void* d)
{
    void* result = a;
    *(void**)(0x00000000) = c;
    return result;
}
