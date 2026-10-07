// roc 2007-08 00661740  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 23 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00661740
//
// 00661740  8bc1                 mov eax, ecx
// 00661742  33c9                 xor ecx, ecx
// 00661744  c700e08d7c00         mov dword ptr [eax], 0x7c8de0
// 0066174a  894804               mov dword ptr [eax + 4], ecx
// 0066174d  894810               mov dword ptr [eax + 0x10], ecx
// 00661750  89480c               mov dword ptr [eax + 0xc], ecx
// 00661753  894808               mov dword ptr [eax + 8], ecx
// 00661756  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00661740
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00661740();
};
S_func_00661740::S_func_00661740()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
