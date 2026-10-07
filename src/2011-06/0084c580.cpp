// roc 2011-06 0084c580  unit: CXTPControlEdit  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084c580
//
// 0084c580  8bc1                 mov eax, ecx
// 0084c582  33c9                 xor ecx, ecx
// 0084c584  c700947cac00         mov dword ptr [eax], 0xac7c94
// 0084c58a  894804               mov dword ptr [eax + 4], ecx
// 0084c58d  894810               mov dword ptr [eax + 0x10], ecx
// 0084c590  89480c               mov dword ptr [eax + 0xc], ecx
// 0084c593  894808               mov dword ptr [eax + 8], ecx
// 0084c596  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0084c580
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0084c580();
};
S_func_0084c580::S_func_0084c580()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
