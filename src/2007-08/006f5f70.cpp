// roc 2007-08 006f5f70  unit: CXTPPropertyGridInplaceButton  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f5f70
//
// 006f5f70  8bc1                 mov eax, ecx
// 006f5f72  33c9                 xor ecx, ecx
// 006f5f74  c700f0c27d00         mov dword ptr [eax], 0x7dc2f0
// 006f5f7a  894804               mov dword ptr [eax + 4], ecx
// 006f5f7d  894810               mov dword ptr [eax + 0x10], ecx
// 006f5f80  89480c               mov dword ptr [eax + 0xc], ecx
// 006f5f83  894808               mov dword ptr [eax + 8], ecx
// 006f5f86  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006f5f70
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006f5f70();
};
S_func_006f5f70::S_func_006f5f70()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
