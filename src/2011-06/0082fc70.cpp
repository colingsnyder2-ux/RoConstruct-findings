// roc 2011-06 0082fc70  unit: CXTPReportView  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082fc70
//
// 0082fc70  8b4160               mov eax, dword ptr [ecx + 0x60]
// 0082fc73  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0082fc70 {
    char pad0[96];
    int m_x;
    int f();
};
int S_func_0082fc70::f()
{
    return m_x;
}
