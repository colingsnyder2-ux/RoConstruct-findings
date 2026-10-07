// roc 2009-06 007402d0  unit: CInstanceRecord::CNameItem  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007402d0
//
// 007402d0  8bc1                 mov eax, ecx
// 007402d2  33c9                 xor ecx, ecx
// 007402d4  c700fc448f00         mov dword ptr [eax], 0x8f44fc
// 007402da  894804               mov dword ptr [eax + 4], ecx
// 007402dd  894810               mov dword ptr [eax + 0x10], ecx
// 007402e0  89480c               mov dword ptr [eax + 0xc], ecx
// 007402e3  894808               mov dword ptr [eax + 8], ecx
// 007402e6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007402d0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007402d0();
};
S_func_007402d0::S_func_007402d0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
