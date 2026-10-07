// roc 2009-06 007eba70  unit: CXTPPropertyGridInplaceButton  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007eba70
//
// 007eba70  8bc1                 mov eax, ecx
// 007eba72  33c9                 xor ecx, ecx
// 007eba74  c70098969000         mov dword ptr [eax], 0x909698
// 007eba7a  894804               mov dword ptr [eax + 4], ecx
// 007eba7d  894810               mov dword ptr [eax + 0x10], ecx
// 007eba80  89480c               mov dword ptr [eax + 0xc], ecx
// 007eba83  894808               mov dword ptr [eax + 8], ecx
// 007eba86  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007eba70
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007eba70();
};
S_func_007eba70::S_func_007eba70()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
