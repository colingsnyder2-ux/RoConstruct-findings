// roc 2009-06 007744c0  unit: CXTPPropertyGrid  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007744c0
//
// 007744c0  8bc1                 mov eax, ecx
// 007744c2  33c9                 xor ecx, ecx
// 007744c4  c70008bb8f00         mov dword ptr [eax], 0x8fbb08
// 007744ca  894804               mov dword ptr [eax + 4], ecx
// 007744cd  894810               mov dword ptr [eax + 0x10], ecx
// 007744d0  89480c               mov dword ptr [eax + 0xc], ecx
// 007744d3  894808               mov dword ptr [eax + 8], ecx
// 007744d6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007744c0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007744c0();
};
S_func_007744c0::S_func_007744c0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
