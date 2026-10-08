// roc 2007-08 00457cf0  unit: G3D::Hashable  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00457cf0
//
// 00457cf0  8bc1                 mov eax, ecx
// 00457cf2  33c9                 xor ecx, ecx
// 00457cf4  c70084317900         mov dword ptr [eax], 0x793184
// 00457cfa  894810               mov dword ptr [eax + 0x10], ecx
// 00457cfd  89480c               mov dword ptr [eax + 0xc], ecx
// 00457d00  894808               mov dword ptr [eax + 8], ecx
// 00457d03  894804               mov dword ptr [eax + 4], ecx
// 00457d06  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00457cf0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00457cf0();
};
S_func_00457cf0::S_func_00457cf0()
{
    p0 = (void*)&G;
    z0 = z1 = z2 = z3 = 0;
}
