// roc 2011-06 008df790  unit: VCEdit::?$CXTMaskEditT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008df790
//
// 008df790  8bc1                 mov eax, ecx
// 008df792  33c9                 xor ecx, ecx
// 008df794  c7006082ad00         mov dword ptr [eax], 0xad8260
// 008df79a  894804               mov dword ptr [eax + 4], ecx
// 008df79d  894810               mov dword ptr [eax + 0x10], ecx
// 008df7a0  89480c               mov dword ptr [eax + 0xc], ecx
// 008df7a3  894808               mov dword ptr [eax + 8], ecx
// 008df7a6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_008df790
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_008df790();
};
S_func_008df790::S_func_008df790()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
