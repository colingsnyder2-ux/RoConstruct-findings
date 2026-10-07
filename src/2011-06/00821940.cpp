// roc 2011-06 00821940  unit: CXTPImageManagerResource::CBitmapDC  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00821940
//
// 00821940  8bc1                 mov eax, ecx
// 00821942  33c9                 xor ecx, ecx
// 00821944  c7006830ac00         mov dword ptr [eax], 0xac3068
// 0082194a  894804               mov dword ptr [eax + 4], ecx
// 0082194d  894810               mov dword ptr [eax + 0x10], ecx
// 00821950  89480c               mov dword ptr [eax + 0xc], ecx
// 00821953  894808               mov dword ptr [eax + 8], ecx
// 00821956  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00821940
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00821940();
};
S_func_00821940::S_func_00821940()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
