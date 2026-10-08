// roc 2007-08 00654890  unit: CInstanceRecord::CNameItem  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00654890
//
// 00654890  8bc1                 mov eax, ecx
// 00654892  33c9                 xor ecx, ecx
// 00654894  c700807f7c00         mov dword ptr [eax], 0x7c7f80
// 0065489a  894804               mov dword ptr [eax + 4], ecx
// 0065489d  894810               mov dword ptr [eax + 0x10], ecx
// 006548a0  89480c               mov dword ptr [eax + 0xc], ecx
// 006548a3  894808               mov dword ptr [eax + 8], ecx
// 006548a6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00654890
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00654890();
};
S_func_00654890::S_func_00654890()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
