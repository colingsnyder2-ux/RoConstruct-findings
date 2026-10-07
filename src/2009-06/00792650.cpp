// roc 2009-06 00792650  unit: CXTCaption  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00792650
//
// 00792650  8bc1                 mov eax, ecx
// 00792652  33c9                 xor ecx, ecx
// 00792654  c700ecff8f00         mov dword ptr [eax], 0x8fffec
// 0079265a  894804               mov dword ptr [eax + 4], ecx
// 0079265d  894810               mov dword ptr [eax + 0x10], ecx
// 00792660  89480c               mov dword ptr [eax + 0xc], ecx
// 00792663  894808               mov dword ptr [eax + 8], ecx
// 00792666  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00792650
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00792650();
};
S_func_00792650::S_func_00792650()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
