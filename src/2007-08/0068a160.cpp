// roc 2007-08 0068a160  unit: CXTPTabClientWnd  size: 23 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0068a160
//
// 0068a160  8bc1                 mov eax, ecx
// 0068a162  33c9                 xor ecx, ecx
// 0068a164  c700fcfc7c00         mov dword ptr [eax], 0x7cfcfc
// 0068a16a  894804               mov dword ptr [eax + 4], ecx
// 0068a16d  894810               mov dword ptr [eax + 0x10], ecx
// 0068a170  89480c               mov dword ptr [eax + 0xc], ecx
// 0068a173  894808               mov dword ptr [eax + 8], ecx
// 0068a176  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0068a160
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0068a160();
};
S_func_0068a160::S_func_0068a160()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
