// roc 2011-06 00865ef0  unit: CXTPTabClientWnd  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00865ef0
//
// 00865ef0  8bc1                 mov eax, ecx
// 00865ef2  33c9                 xor ecx, ecx
// 00865ef4  c700bcb1ac00         mov dword ptr [eax], 0xacb1bc
// 00865efa  894804               mov dword ptr [eax + 4], ecx
// 00865efd  894810               mov dword ptr [eax + 0x10], ecx
// 00865f00  89480c               mov dword ptr [eax + 0xc], ecx
// 00865f03  894808               mov dword ptr [eax + 8], ecx
// 00865f06  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00865ef0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00865ef0();
};
S_func_00865ef0::S_func_00865ef0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
