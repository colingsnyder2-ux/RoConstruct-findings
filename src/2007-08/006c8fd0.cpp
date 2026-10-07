// roc 2007-08 006c8fd0  unit: CXTPControlEditCtrl  size: 23 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006c8fd0
//
// 006c8fd0  8bc1                 mov eax, ecx
// 006c8fd2  33c9                 xor ecx, ecx
// 006c8fd4  c70064787d00         mov dword ptr [eax], 0x7d7864
// 006c8fda  894804               mov dword ptr [eax + 4], ecx
// 006c8fdd  894810               mov dword ptr [eax + 0x10], ecx
// 006c8fe0  89480c               mov dword ptr [eax + 0xc], ecx
// 006c8fe3  894808               mov dword ptr [eax + 8], ecx
// 006c8fe6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006c8fd0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006c8fd0();
};
S_func_006c8fd0::S_func_006c8fd0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
