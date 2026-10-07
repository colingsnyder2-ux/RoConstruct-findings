// roc 2009-06 0077bc90  unit: CXTPTabClientWnd  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077bc90
//
// 0077bc90  8bc1                 mov eax, ecx
// 0077bc92  33c9                 xor ecx, ecx
// 0077bc94  c700b4c78f00         mov dword ptr [eax], 0x8fc7b4
// 0077bc9a  894804               mov dword ptr [eax + 4], ecx
// 0077bc9d  894810               mov dword ptr [eax + 0x10], ecx
// 0077bca0  89480c               mov dword ptr [eax + 0xc], ecx
// 0077bca3  894808               mov dword ptr [eax + 8], ecx
// 0077bca6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0077bc90
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0077bc90();
};
S_func_0077bc90::S_func_0077bc90()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
