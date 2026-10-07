// roc 2010-06 007dede0  unit: CInstanceRecord  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dede0
//
// 007dede0  8bc1                 mov eax, ecx
// 007dede2  33c9                 xor ecx, ecx
// 007dede4  c7005c9ca500         mov dword ptr [eax], 0xa59c5c
// 007dedea  894804               mov dword ptr [eax + 4], ecx
// 007deded  894810               mov dword ptr [eax + 0x10], ecx
// 007dedf0  89480c               mov dword ptr [eax + 0xc], ecx
// 007dedf3  894808               mov dword ptr [eax + 8], ecx
// 007dedf6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007dede0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007dede0();
};
S_func_007dede0::S_func_007dede0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
