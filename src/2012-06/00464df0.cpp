// roc 2012-06 00464df0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00464df0
//
// 00464df0  8a8188000000         mov al, byte ptr [ecx + 0x88]
// 00464df6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00464df0 {
    char pad0[136];
    char m_x;
    char f();
};
char S_func_00464df0::f()
{
    return m_x;
}
