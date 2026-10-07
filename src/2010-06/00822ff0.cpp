// roc 2010-06 00822ff0  unit: CXTPResourceManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00822ff0
//
// 00822ff0  8bc1                 mov eax, ecx
// 00822ff2  33c9                 xor ecx, ecx
// 00822ff4  c700504ea600         mov dword ptr [eax], 0xa64e50
// 00822ffa  894804               mov dword ptr [eax + 4], ecx
// 00822ffd  894810               mov dword ptr [eax + 0x10], ecx
// 00823000  89480c               mov dword ptr [eax + 0xc], ecx
// 00823003  894808               mov dword ptr [eax + 8], ecx
// 00823006  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00822ff0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00822ff0();
};
S_func_00822ff0::S_func_00822ff0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
