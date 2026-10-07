// roc 2009-06 00729a30  unit: MyXTPCommandBars  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00729a30
//
// 00729a30  8bc1                 mov eax, ecx
// 00729a32  33c9                 xor ecx, ecx
// 00729a34  c7005c278f00         mov dword ptr [eax], 0x8f275c
// 00729a3a  894804               mov dword ptr [eax + 4], ecx
// 00729a3d  894810               mov dword ptr [eax + 0x10], ecx
// 00729a40  89480c               mov dword ptr [eax + 0xc], ecx
// 00729a43  894808               mov dword ptr [eax + 8], ecx
// 00729a46  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00729a30
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00729a30();
};
S_func_00729a30::S_func_00729a30()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
