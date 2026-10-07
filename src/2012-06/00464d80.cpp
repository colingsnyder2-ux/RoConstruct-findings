// roc 2012-06 00464d80  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00464d80
//
// 00464d80  8a415c               mov al, byte ptr [ecx + 0x5c]
// 00464d83  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00464d80 {
    char pad0[92];
    char m_x;
    char f();
};
char S_func_00464d80::f()
{
    return m_x;
}
