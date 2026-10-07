// roc 2007-08 006548d0  unit: CInstanceRecord::CNameItem  size: 23 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006548d0
//
// 006548d0  8bc1                 mov eax, ecx
// 006548d2  33c9                 xor ecx, ecx
// 006548d4  c700987f7c00         mov dword ptr [eax], 0x7c7f98
// 006548da  894804               mov dword ptr [eax + 4], ecx
// 006548dd  894810               mov dword ptr [eax + 0x10], ecx
// 006548e0  89480c               mov dword ptr [eax + 0xc], ecx
// 006548e3  894808               mov dword ptr [eax + 8], ecx
// 006548e6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006548d0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006548d0();
};
S_func_006548d0::S_func_006548d0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
