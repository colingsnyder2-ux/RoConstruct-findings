// roc 2009-06 007f6a70  unit: CXTPTabPaintManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f6a70
//
// 007f6a70  8bc1                 mov eax, ecx
// 007f6a72  33c9                 xor ecx, ecx
// 007f6a74  c700c4a69000         mov dword ptr [eax], 0x90a6c4
// 007f6a7a  894804               mov dword ptr [eax + 4], ecx
// 007f6a7d  894810               mov dword ptr [eax + 0x10], ecx
// 007f6a80  89480c               mov dword ptr [eax + 0xc], ecx
// 007f6a83  894808               mov dword ptr [eax + 8], ecx
// 007f6a86  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007f6a70
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007f6a70();
};
S_func_007f6a70::S_func_007f6a70()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
