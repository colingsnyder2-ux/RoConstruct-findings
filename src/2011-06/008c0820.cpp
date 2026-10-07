// roc 2011-06 008c0820  unit: CXTPDockingPaneMiniWnd  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c0820
//
// 008c0820  8bc1                 mov eax, ecx
// 008c0822  33c9                 xor ecx, ecx
// 008c0824  c700905dad00         mov dword ptr [eax], 0xad5d90
// 008c082a  894804               mov dword ptr [eax + 4], ecx
// 008c082d  894810               mov dword ptr [eax + 0x10], ecx
// 008c0830  89480c               mov dword ptr [eax + 0xc], ecx
// 008c0833  894808               mov dword ptr [eax + 8], ecx
// 008c0836  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_008c0820
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_008c0820();
};
S_func_008c0820::S_func_008c0820()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
