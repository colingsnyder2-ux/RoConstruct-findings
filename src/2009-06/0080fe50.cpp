// roc 2009-06 0080fe50  unit: CXTPRibbonTab  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080fe50
//
// 0080fe50  8bc1                 mov eax, ecx
// 0080fe52  33c9                 xor ecx, ecx
// 0080fe54  c700a8cc9000         mov dword ptr [eax], 0x90cca8
// 0080fe5a  894804               mov dword ptr [eax + 4], ecx
// 0080fe5d  894810               mov dword ptr [eax + 0x10], ecx
// 0080fe60  89480c               mov dword ptr [eax + 0xc], ecx
// 0080fe63  894808               mov dword ptr [eax + 8], ecx
// 0080fe66  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0080fe50
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0080fe50();
};
S_func_0080fe50::S_func_0080fe50()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
