// roc 2010-06 007ab960  unit: CPatchedControlComboBox  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ab960
//
// 007ab960  8bc1                 mov eax, ecx
// 007ab962  33c9                 xor ecx, ecx
// 007ab964  c700b85aa500         mov dword ptr [eax], 0xa55ab8
// 007ab96a  894804               mov dword ptr [eax + 4], ecx
// 007ab96d  894810               mov dword ptr [eax + 0x10], ecx
// 007ab970  89480c               mov dword ptr [eax + 0xc], ecx
// 007ab973  894808               mov dword ptr [eax + 8], ecx
// 007ab976  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007ab960
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007ab960();
};
S_func_007ab960::S_func_007ab960()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
