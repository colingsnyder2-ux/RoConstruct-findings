// roc 2009-06 00729a70  unit: MyXTPCommandBars  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00729a70
//
// 00729a70  8bc1                 mov eax, ecx
// 00729a72  33c9                 xor ecx, ecx
// 00729a74  c70074278f00         mov dword ptr [eax], 0x8f2774
// 00729a7a  894804               mov dword ptr [eax + 4], ecx
// 00729a7d  894810               mov dword ptr [eax + 0x10], ecx
// 00729a80  89480c               mov dword ptr [eax + 0xc], ecx
// 00729a83  894808               mov dword ptr [eax + 8], ecx
// 00729a86  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00729a70
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00729a70();
};
S_func_00729a70::S_func_00729a70()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
