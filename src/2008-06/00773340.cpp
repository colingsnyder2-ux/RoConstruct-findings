// roc 2008-06 00773340  unit: CXTPPropertyGridInplaceButton  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00773340
//
// 00773340  8bc1                 mov eax, ecx
// 00773342  33c9                 xor ecx, ecx
// 00773344  c70070868600         mov dword ptr [eax], 0x868670
// 0077334a  894804               mov dword ptr [eax + 4], ecx
// 0077334d  894810               mov dword ptr [eax + 0x10], ecx
// 00773350  89480c               mov dword ptr [eax + 0xc], ecx
// 00773353  894808               mov dword ptr [eax + 8], ecx
// 00773356  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00773340
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00773340();
};
S_func_00773340::S_func_00773340()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
