// roc 2008-06 00794080  unit: CXTPRibbonTab  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00794080
//
// 00794080  8bc1                 mov eax, ecx
// 00794082  33c9                 xor ecx, ecx
// 00794084  c700c8b78600         mov dword ptr [eax], 0x86b7c8
// 0079408a  894804               mov dword ptr [eax + 4], ecx
// 0079408d  894810               mov dword ptr [eax + 0x10], ecx
// 00794090  89480c               mov dword ptr [eax + 0xc], ecx
// 00794093  894808               mov dword ptr [eax + 8], ecx
// 00794096  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00794080
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00794080();
};
S_func_00794080::S_func_00794080()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
