// roc 2010-06 007ab9a0  unit: CPatchedControlComboBox  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ab9a0
//
// 007ab9a0  8bc1                 mov eax, ecx
// 007ab9a2  33c9                 xor ecx, ecx
// 007ab9a4  c700d05aa500         mov dword ptr [eax], 0xa55ad0
// 007ab9aa  894804               mov dword ptr [eax + 4], ecx
// 007ab9ad  894810               mov dword ptr [eax + 0x10], ecx
// 007ab9b0  89480c               mov dword ptr [eax + 0xc], ecx
// 007ab9b3  894808               mov dword ptr [eax + 8], ecx
// 007ab9b6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007ab9a0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007ab9a0();
};
S_func_007ab9a0::S_func_007ab9a0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
