// roc 2010-06 007cf250  unit: CInstanceRecord::CNameItem  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007cf250
//
// 007cf250  8bc1                 mov eax, ecx
// 007cf252  33c9                 xor ecx, ecx
// 007cf254  c700908ca500         mov dword ptr [eax], 0xa58c90
// 007cf25a  894804               mov dword ptr [eax + 4], ecx
// 007cf25d  894810               mov dword ptr [eax + 0x10], ecx
// 007cf260  89480c               mov dword ptr [eax + 0xc], ecx
// 007cf263  894808               mov dword ptr [eax + 8], ecx
// 007cf266  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007cf250
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007cf250();
};
S_func_007cf250::S_func_007cf250()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
