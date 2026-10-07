// roc 2008-06 006cb080  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cb080
//
// 006cb080  8b4158               mov eax, dword ptr [ecx + 0x58]
// 006cb083  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006cb080 {
    char pad0[88];
    int m_x;
    int f();
};
int S_func_006cb080::f()
{
    return m_x;
}
