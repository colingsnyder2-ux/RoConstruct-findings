// roc 2010-06 007c87f0  unit: MyXTPCommandBars  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c87f0
//
// 007c87f0  8bc1                 mov eax, ecx
// 007c87f2  33c9                 xor ecx, ecx
// 007c87f4  c7006c80a500         mov dword ptr [eax], 0xa5806c
// 007c87fa  894804               mov dword ptr [eax + 4], ecx
// 007c87fd  894810               mov dword ptr [eax + 0x10], ecx
// 007c8800  89480c               mov dword ptr [eax + 0xc], ecx
// 007c8803  894808               mov dword ptr [eax + 8], ecx
// 007c8806  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007c87f0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007c87f0();
};
S_func_007c87f0::S_func_007c87f0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
