// roc 2009-06 0077bc50  unit: CXTPTabClientWnd  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077bc50
//
// 0077bc50  8bc1                 mov eax, ecx
// 0077bc52  33c9                 xor ecx, ecx
// 0077bc54  c7009cc78f00         mov dword ptr [eax], 0x8fc79c
// 0077bc5a  894804               mov dword ptr [eax + 4], ecx
// 0077bc5d  894810               mov dword ptr [eax + 0x10], ecx
// 0077bc60  89480c               mov dword ptr [eax + 0xc], ecx
// 0077bc63  894808               mov dword ptr [eax + 8], ecx
// 0077bc66  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0077bc50
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0077bc50();
};
S_func_0077bc50::S_func_0077bc50()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
