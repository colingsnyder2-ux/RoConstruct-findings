// roc 2010-06 00820400  unit: CXTPWinThemeWrapper  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00820400
//
// 00820400  8bc1                 mov eax, ecx
// 00820402  33c9                 xor ecx, ecx
// 00820404  c700f842a600         mov dword ptr [eax], 0xa642f8
// 0082040a  894804               mov dword ptr [eax + 4], ecx
// 0082040d  894810               mov dword ptr [eax + 0x10], ecx
// 00820410  89480c               mov dword ptr [eax + 0xc], ecx
// 00820413  894808               mov dword ptr [eax + 8], ecx
// 00820416  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00820400
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00820400();
};
S_func_00820400::S_func_00820400()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
