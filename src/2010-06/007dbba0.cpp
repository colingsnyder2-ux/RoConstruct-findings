// roc 2010-06 007dbba0  unit: CXTPReportControl  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dbba0
//
// 007dbba0  8b4160               mov eax, dword ptr [ecx + 0x60]
// 007dbba3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007dbba0 {
    char pad0[96];
    int m_x;
    int f();
};
int S_func_007dbba0::f()
{
    return m_x;
}
