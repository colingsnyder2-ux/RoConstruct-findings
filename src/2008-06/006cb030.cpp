// roc 2008-06 006cb030  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cb030
//
// 006cb030  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 006cb033  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006cb030 {
    char pad0[76];
    int m_x;
    int f();
};
int S_func_006cb030::f()
{
    return m_x;
}
