// roc 2011-06 00842a30  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00842a30
//
// 00842a30  8bc1                 mov eax, ecx
// 00842a32  33c9                 xor ecx, ecx
// 00842a34  c700e060ac00         mov dword ptr [eax], 0xac60e0
// 00842a3a  894804               mov dword ptr [eax + 4], ecx
// 00842a3d  894810               mov dword ptr [eax + 0x10], ecx
// 00842a40  89480c               mov dword ptr [eax + 0xc], ecx
// 00842a43  894808               mov dword ptr [eax + 8], ecx
// 00842a46  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00842a30
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00842a30();
};
S_func_00842a30::S_func_00842a30()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
