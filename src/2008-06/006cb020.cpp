// roc 2008-06 006cb020  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cb020
//
// 006cb020  8b4120               mov eax, dword ptr [ecx + 0x20]
// 006cb023  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006cb020 {
    char pad0[32];
    int m_x;
    int f();
};
int S_func_006cb020::f()
{
    return m_x;
}
