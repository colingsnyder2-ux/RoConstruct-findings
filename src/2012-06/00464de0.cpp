// roc 2012-06 00464de0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00464de0
//
// 00464de0  8a417e               mov al, byte ptr [ecx + 0x7e]
// 00464de3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00464de0 {
    char pad0[126];
    char m_x;
    char f();
};
char S_func_00464de0::f()
{
    return m_x;
}
