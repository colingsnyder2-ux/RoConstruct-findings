// roc 2009-06 007ecd90  unit: VCEdit::?$CXTMaskEditT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ecd90
//
// 007ecd90  8bc1                 mov eax, ecx
// 007ecd92  33c9                 xor ecx, ecx
// 007ecd94  c700289a9000         mov dword ptr [eax], 0x909a28
// 007ecd9a  894804               mov dword ptr [eax + 4], ecx
// 007ecd9d  894810               mov dword ptr [eax + 0x10], ecx
// 007ecda0  89480c               mov dword ptr [eax + 0xc], ecx
// 007ecda3  894808               mov dword ptr [eax + 8], ecx
// 007ecda6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007ecd90
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007ecd90();
};
S_func_007ecd90::S_func_007ecd90()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
