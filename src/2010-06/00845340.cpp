// roc 2010-06 00845340  unit: CXTPDockBar  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00845340
//
// 00845340  8bc1                 mov eax, ecx
// 00845342  33c9                 xor ecx, ecx
// 00845344  c700607da600         mov dword ptr [eax], 0xa67d60
// 0084534a  894804               mov dword ptr [eax + 4], ecx
// 0084534d  894810               mov dword ptr [eax + 0x10], ecx
// 00845350  89480c               mov dword ptr [eax + 0xc], ecx
// 00845353  894808               mov dword ptr [eax + 8], ecx
// 00845356  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00845340
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00845340();
};
S_func_00845340::S_func_00845340()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
