// roc 2008-06 006a3190  unit: CRobloxControlColorSelector  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a3190
//
// 006a3190  8bc1                 mov eax, ecx
// 006a3192  33c9                 xor ecx, ecx
// 006a3194  c7001c048500         mov dword ptr [eax], 0x85041c
// 006a319a  894804               mov dword ptr [eax + 4], ecx
// 006a319d  894810               mov dword ptr [eax + 0x10], ecx
// 006a31a0  89480c               mov dword ptr [eax + 0xc], ecx
// 006a31a3  894808               mov dword ptr [eax + 8], ecx
// 006a31a6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006a3190
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006a3190();
};
S_func_006a3190::S_func_006a3190()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
