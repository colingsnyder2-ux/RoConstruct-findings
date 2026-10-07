// roc 2008-06 006c7d30  unit: CInstanceRecord::CNameItem  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c7d30
//
// 006c7d30  8bc1                 mov eax, ecx
// 006c7d32  33c9                 xor ecx, ecx
// 006c7d34  c700ac348500         mov dword ptr [eax], 0x8534ac
// 006c7d3a  894804               mov dword ptr [eax + 4], ecx
// 006c7d3d  894810               mov dword ptr [eax + 0x10], ecx
// 006c7d40  89480c               mov dword ptr [eax + 0xc], ecx
// 006c7d43  894808               mov dword ptr [eax + 8], ecx
// 006c7d46  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006c7d30
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006c7d30();
};
S_func_006c7d30::S_func_006c7d30()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
