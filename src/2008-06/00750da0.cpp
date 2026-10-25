// from server: 100% by auto
// roc 2008-06 00750da0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00750da0
//
// 00750da0  8b4164               mov eax, dword ptr [ecx + 0x64]
// 00750da3  c3                   ret 

struct S_func_00750da0 {
    char pad0[100];
    int m_x;
    int f();
};
int S_func_00750da0::f()
{
    return m_x;
}
