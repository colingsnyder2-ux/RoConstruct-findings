// roc 2007-08 0063b830  unit: CPatchedControlComboBox  size: 23 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0063b830
//
// 0063b830  8bc1                 mov eax, ecx
// 0063b832  33c9                 xor ecx, ecx
// 0063b834  c7009c627c00         mov dword ptr [eax], 0x7c629c
// 0063b83a  894804               mov dword ptr [eax + 4], ecx
// 0063b83d  894810               mov dword ptr [eax + 0x10], ecx
// 0063b840  89480c               mov dword ptr [eax + 0xc], ecx
// 0063b843  894808               mov dword ptr [eax + 8], ecx
// 0063b846  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0063b830
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0063b830();
};
S_func_0063b830::S_func_0063b830()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
