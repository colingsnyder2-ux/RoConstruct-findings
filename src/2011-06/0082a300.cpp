// roc 2011-06 0082a300  unit: MyXTPCommandBars  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082a300
//
// 0082a300  8bc1                 mov eax, ecx
// 0082a302  33c9                 xor ecx, ecx
// 0082a304  c700d42cac00         mov dword ptr [eax], 0xac2cd4
// 0082a30a  894804               mov dword ptr [eax + 4], ecx
// 0082a30d  894810               mov dword ptr [eax + 0x10], ecx
// 0082a310  89480c               mov dword ptr [eax + 0xc], ecx
// 0082a313  894808               mov dword ptr [eax + 8], ecx
// 0082a316  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0082a300
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0082a300();
};
S_func_0082a300::S_func_0082a300()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
