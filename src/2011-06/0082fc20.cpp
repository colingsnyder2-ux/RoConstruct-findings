// roc 2011-06 0082fc20  unit: CXTPReportView  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082fc20
//
// 0082fc20  8b4140               mov eax, dword ptr [ecx + 0x40]
// 0082fc23  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0082fc20 {
    char pad0[64];
    int m_x;
    int f();
};
int S_func_0082fc20::f()
{
    return m_x;
}
