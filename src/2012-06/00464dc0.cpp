// roc 2012-06 00464dc0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00464dc0
//
// 00464dc0  8a417c               mov al, byte ptr [ecx + 0x7c]
// 00464dc3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00464dc0 {
    char pad0[124];
    char m_x;
    char f();
};
char S_func_00464dc0::f()
{
    return m_x;
}
