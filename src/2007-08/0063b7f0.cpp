// roc 2007-08 0063b7f0  unit: CPatchedControlComboBox  size: 23 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0063b7f0
//
// 0063b7f0  8bc1                 mov eax, ecx
// 0063b7f2  33c9                 xor ecx, ecx
// 0063b7f4  c70084627c00         mov dword ptr [eax], 0x7c6284
// 0063b7fa  894804               mov dword ptr [eax + 4], ecx
// 0063b7fd  894810               mov dword ptr [eax + 0x10], ecx
// 0063b800  89480c               mov dword ptr [eax + 0xc], ecx
// 0063b803  894808               mov dword ptr [eax + 8], ecx
// 0063b806  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0063b7f0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0063b7f0();
};
S_func_0063b7f0::S_func_0063b7f0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
