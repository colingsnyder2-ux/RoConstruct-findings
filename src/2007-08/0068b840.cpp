// roc 2007-08 0068b840  unit: CXTPTabClientWnd  size: 23 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0068b840
//
// 0068b840  8bc1                 mov eax, ecx
// 0068b842  33c9                 xor ecx, ecx
// 0068b844  c700dcfe7c00         mov dword ptr [eax], 0x7cfedc
// 0068b84a  894804               mov dword ptr [eax + 4], ecx
// 0068b84d  894810               mov dword ptr [eax + 0x10], ecx
// 0068b850  89480c               mov dword ptr [eax + 0xc], ecx
// 0068b853  894808               mov dword ptr [eax + 8], ecx
// 0068b856  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0068b840
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0068b840();
};
S_func_0068b840::S_func_0068b840()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
