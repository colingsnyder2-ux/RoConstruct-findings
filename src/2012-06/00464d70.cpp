// roc 2012-06 00464d70  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00464d70
//
// 00464d70  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00464d73  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00464d70 {
    char pad0[84];
    int m_x;
    int f();
};
int S_func_00464d70::f()
{
    return m_x;
}
