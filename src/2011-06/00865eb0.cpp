// roc 2011-06 00865eb0  unit: CXTPTabClientWnd  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00865eb0
//
// 00865eb0  8bc1                 mov eax, ecx
// 00865eb2  33c9                 xor ecx, ecx
// 00865eb4  c700a4b1ac00         mov dword ptr [eax], 0xacb1a4
// 00865eba  894804               mov dword ptr [eax + 4], ecx
// 00865ebd  894810               mov dword ptr [eax + 0x10], ecx
// 00865ec0  89480c               mov dword ptr [eax + 0xc], ecx
// 00865ec3  894808               mov dword ptr [eax + 8], ecx
// 00865ec6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00865eb0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00865eb0();
};
S_func_00865eb0::S_func_00865eb0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
