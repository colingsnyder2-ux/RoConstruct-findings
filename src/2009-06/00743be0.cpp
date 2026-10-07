// roc 2009-06 00743be0  unit: CXTPReportControl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00743be0
//
// 00743be0  8bc1                 mov eax, ecx
// 00743be2  33c9                 xor ecx, ecx
// 00743be4  c700444a8f00         mov dword ptr [eax], 0x8f4a44
// 00743bea  894804               mov dword ptr [eax + 4], ecx
// 00743bed  894810               mov dword ptr [eax + 0x10], ecx
// 00743bf0  89480c               mov dword ptr [eax + 0xc], ecx
// 00743bf3  894808               mov dword ptr [eax + 8], ecx
// 00743bf6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00743be0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00743be0();
};
S_func_00743be0::S_func_00743be0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
