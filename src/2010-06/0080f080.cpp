// roc 2010-06 0080f080  unit: CXTPStatusBar  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080f080
//
// 0080f080  8bc1                 mov eax, ecx
// 0080f082  33c9                 xor ecx, ecx
// 0080f084  c700a415a600         mov dword ptr [eax], 0xa615a4
// 0080f08a  894804               mov dword ptr [eax + 4], ecx
// 0080f08d  894810               mov dword ptr [eax + 0x10], ecx
// 0080f090  89480c               mov dword ptr [eax + 0xc], ecx
// 0080f093  894808               mov dword ptr [eax + 8], ecx
// 0080f096  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0080f080
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0080f080();
};
S_func_0080f080::S_func_0080f080()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
