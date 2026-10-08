// roc 2007-08 006c8f90  unit: CXTPControlEditCtrl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c8f90
//
// 006c8f90  8bc1                 mov eax, ecx
// 006c8f92  33c9                 xor ecx, ecx
// 006c8f94  c7004c787d00         mov dword ptr [eax], 0x7d784c
// 006c8f9a  894804               mov dword ptr [eax + 4], ecx
// 006c8f9d  894810               mov dword ptr [eax + 0x10], ecx
// 006c8fa0  89480c               mov dword ptr [eax + 0xc], ecx
// 006c8fa3  894808               mov dword ptr [eax + 8], ecx
// 006c8fa6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006c8f90
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006c8f90();
};
S_func_006c8f90::S_func_006c8f90()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
