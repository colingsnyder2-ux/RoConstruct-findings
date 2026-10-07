// roc 2010-06 0041ad70  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041ad70
//
// 0041ad70  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0041ad73  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0041ad70 {
    char pad0[88];
    int m_x;
    int f();
};
int S_func_0041ad70::f()
{
    return m_x;
}
