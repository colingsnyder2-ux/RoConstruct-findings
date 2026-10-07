// roc 2009-06 00721170  unit: CPatchedControlComboBox  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00721170
//
// 00721170  8bc1                 mov eax, ecx
// 00721172  33c9                 xor ecx, ecx
// 00721174  c7007c218f00         mov dword ptr [eax], 0x8f217c
// 0072117a  894804               mov dword ptr [eax + 4], ecx
// 0072117d  894810               mov dword ptr [eax + 0x10], ecx
// 00721180  89480c               mov dword ptr [eax + 0xc], ecx
// 00721183  894808               mov dword ptr [eax + 8], ecx
// 00721186  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00721170
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00721170();
};
S_func_00721170::S_func_00721170()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
