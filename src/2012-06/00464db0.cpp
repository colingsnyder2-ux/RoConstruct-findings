// roc 2012-06 00464db0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00464db0
//
// 00464db0  8a417b               mov al, byte ptr [ecx + 0x7b]
// 00464db3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00464db0 {
    char pad0[123];
    char m_x;
    char f();
};
char S_func_00464db0::f()
{
    return m_x;
}
