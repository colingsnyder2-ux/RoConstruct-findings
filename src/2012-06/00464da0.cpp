// roc 2012-06 00464da0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00464da0
//
// 00464da0  8a415d               mov al, byte ptr [ecx + 0x5d]
// 00464da3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00464da0 {
    char pad0[93];
    char m_x;
    char f();
};
char S_func_00464da0::f()
{
    return m_x;
}
