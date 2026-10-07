// roc 2009-06 007bd580  unit: CXTPRibbonBar  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007bd580
//
// 007bd580  8bc1                 mov eax, ecx
// 007bd582  33c9                 xor ecx, ecx
// 007bd584  c7007c4b9000         mov dword ptr [eax], 0x904b7c
// 007bd58a  894804               mov dword ptr [eax + 4], ecx
// 007bd58d  894810               mov dword ptr [eax + 0x10], ecx
// 007bd590  89480c               mov dword ptr [eax + 0xc], ecx
// 007bd593  894808               mov dword ptr [eax + 8], ecx
// 007bd596  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007bd580
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007bd580();
};
S_func_007bd580::S_func_007bd580()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
