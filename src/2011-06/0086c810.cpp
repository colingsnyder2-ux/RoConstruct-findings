// roc 2011-06 0086c810  unit: CXTPStatusBar  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086c810
//
// 0086c810  8bc1                 mov eax, ecx
// 0086c812  33c9                 xor ecx, ecx
// 0086c814  c70084beac00         mov dword ptr [eax], 0xacbe84
// 0086c81a  894804               mov dword ptr [eax + 4], ecx
// 0086c81d  894810               mov dword ptr [eax + 0x10], ecx
// 0086c820  89480c               mov dword ptr [eax + 0xc], ecx
// 0086c823  894808               mov dword ptr [eax + 8], ecx
// 0086c826  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0086c810
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0086c810();
};
S_func_0086c810::S_func_0086c810()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
