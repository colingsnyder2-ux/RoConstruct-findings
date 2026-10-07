// roc 2011-06 0083f800  unit: CInstanceRecord::CNameItem  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083f800
//
// 0083f800  8bc1                 mov eax, ecx
// 0083f802  33c9                 xor ecx, ecx
// 0083f804  c700f456ac00         mov dword ptr [eax], 0xac56f4
// 0083f80a  894804               mov dword ptr [eax + 4], ecx
// 0083f80d  894810               mov dword ptr [eax + 0x10], ecx
// 0083f810  89480c               mov dword ptr [eax + 0xc], ecx
// 0083f813  894808               mov dword ptr [eax + 8], ecx
// 0083f816  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0083f800
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0083f800();
};
S_func_0083f800::S_func_0083f800()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
