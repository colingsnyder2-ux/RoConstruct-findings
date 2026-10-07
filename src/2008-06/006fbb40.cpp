// roc 2008-06 006fbb40  unit: CXTPPropertyGrid  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fbb40
//
// 006fbb40  8bc1                 mov eax, ecx
// 006fbb42  33c9                 xor ecx, ecx
// 006fbb44  c700b0aa8500         mov dword ptr [eax], 0x85aab0
// 006fbb4a  894804               mov dword ptr [eax + 4], ecx
// 006fbb4d  894810               mov dword ptr [eax + 0x10], ecx
// 006fbb50  89480c               mov dword ptr [eax + 0xc], ecx
// 006fbb53  894808               mov dword ptr [eax + 8], ecx
// 006fbb56  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006fbb40
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006fbb40();
};
S_func_006fbb40::S_func_006fbb40()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
