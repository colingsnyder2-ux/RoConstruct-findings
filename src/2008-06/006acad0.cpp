// roc 2008-06 006acad0  unit: CPatchedControlComboBox  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006acad0
//
// 006acad0  8bc1                 mov eax, ecx
// 006acad2  33c9                 xor ecx, ecx
// 006acad4  c700cc168500         mov dword ptr [eax], 0x8516cc
// 006acada  894804               mov dword ptr [eax + 4], ecx
// 006acadd  894810               mov dword ptr [eax + 0x10], ecx
// 006acae0  89480c               mov dword ptr [eax + 0xc], ecx
// 006acae3  894808               mov dword ptr [eax + 8], ecx
// 006acae6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006acad0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006acad0();
};
S_func_006acad0::S_func_006acad0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
