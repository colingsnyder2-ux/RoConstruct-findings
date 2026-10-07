// roc 2012-06 00464d90  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00464d90
//
// 00464d90  8a4160               mov al, byte ptr [ecx + 0x60]
// 00464d93  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00464d90 {
    char pad0[96];
    char m_x;
    char f();
};
char S_func_00464d90::f()
{
    return m_x;
}
