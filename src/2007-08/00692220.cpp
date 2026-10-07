// roc 2007-08 00692220  unit: CXTPReportRow_Batch  size: 4 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00692220
//
// 00692220  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 00692223  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00692220 {
    char pad0[76];
    int m_x;
    int f();
};
int S_func_00692220::f()
{
    return m_x;
}
