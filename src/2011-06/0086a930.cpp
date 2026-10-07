// roc 2011-06 0086a930  unit: CXTPPropertyGrid  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086a930
//
// 0086a930  8bc1                 mov eax, ecx
// 0086a932  33c9                 xor ecx, ecx
// 0086a934  c70010baac00         mov dword ptr [eax], 0xacba10
// 0086a93a  894804               mov dword ptr [eax + 4], ecx
// 0086a93d  894810               mov dword ptr [eax + 0x10], ecx
// 0086a940  89480c               mov dword ptr [eax + 0xc], ecx
// 0086a943  894808               mov dword ptr [eax + 8], ecx
// 0086a946  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0086a930
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0086a930();
};
S_func_0086a930::S_func_0086a930()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
