// roc 2008-06 0074fbb0  unit: CXTPReportHyperlinks  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074fbb0
//
// 0074fbb0  8bc1                 mov eax, ecx
// 0074fbb2  33c9                 xor ecx, ecx
// 0074fbb4  c70040458600         mov dword ptr [eax], 0x864540
// 0074fbba  894804               mov dword ptr [eax + 4], ecx
// 0074fbbd  894810               mov dword ptr [eax + 0x10], ecx
// 0074fbc0  89480c               mov dword ptr [eax + 0xc], ecx
// 0074fbc3  894808               mov dword ptr [eax + 8], ecx
// 0074fbc6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0074fbb0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0074fbb0();
};
S_func_0074fbb0::S_func_0074fbb0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
