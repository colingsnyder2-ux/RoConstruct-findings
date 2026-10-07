// roc 2011-06 008d6700  unit: CXTPTabPaintManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d6700
//
// 008d6700  8bc1                 mov eax, ecx
// 008d6702  33c9                 xor ecx, ecx
// 008d6704  c700847dad00         mov dword ptr [eax], 0xad7d84
// 008d670a  894804               mov dword ptr [eax + 4], ecx
// 008d670d  894810               mov dword ptr [eax + 0x10], ecx
// 008d6710  89480c               mov dword ptr [eax + 0xc], ecx
// 008d6713  894808               mov dword ptr [eax + 8], ecx
// 008d6716  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_008d6700
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_008d6700();
};
S_func_008d6700::S_func_008d6700()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
