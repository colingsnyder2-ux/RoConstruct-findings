// roc 2008-06 006cb5f0  unit: CXTPReportControl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cb5f0
//
// 006cb5f0  8bc1                 mov eax, ecx
// 006cb5f2  33c9                 xor ecx, ecx
// 006cb5f4  c700f4398500         mov dword ptr [eax], 0x8539f4
// 006cb5fa  894804               mov dword ptr [eax + 4], ecx
// 006cb5fd  894810               mov dword ptr [eax + 0x10], ecx
// 006cb600  89480c               mov dword ptr [eax + 0xc], ecx
// 006cb603  894808               mov dword ptr [eax + 8], ecx
// 006cb606  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006cb5f0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006cb5f0();
};
S_func_006cb5f0::S_func_006cb5f0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
