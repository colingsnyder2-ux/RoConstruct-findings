// roc 2011-06 008b2550  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b2550
//
// 008b2550  8b4154               mov eax, dword ptr [ecx + 0x54]
// 008b2553  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008b2550 {
    char pad0[84];
    int m_x;
    int f();
};
int S_func_008b2550::f()
{
    return m_x;
}
