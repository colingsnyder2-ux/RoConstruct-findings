// roc 2009-06 00793340  unit: CXTPHookManagerHookAble  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00793340
//
// 00793340  8bc1                 mov eax, ecx
// 00793342  33c9                 xor ecx, ecx
// 00793344  c70050019000         mov dword ptr [eax], 0x900150
// 0079334a  894804               mov dword ptr [eax + 4], ecx
// 0079334d  894810               mov dword ptr [eax + 0x10], ecx
// 00793350  89480c               mov dword ptr [eax + 0xc], ecx
// 00793353  894808               mov dword ptr [eax + 8], ecx
// 00793356  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00793340
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00793340();
};
S_func_00793340::S_func_00793340()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
