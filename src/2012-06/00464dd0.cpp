// roc 2012-06 00464dd0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00464dd0
//
// 00464dd0  8a417d               mov al, byte ptr [ecx + 0x7d]
// 00464dd3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00464dd0 {
    char pad0[125];
    char m_x;
    char f();
};
char S_func_00464dd0::f()
{
    return m_x;
}
