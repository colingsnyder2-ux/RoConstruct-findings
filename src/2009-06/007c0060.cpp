// roc 2009-06 007c0060  unit: CXTPReportPaintManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c0060
//
// 007c0060  8b8164020000         mov eax, dword ptr [ecx + 0x264]
// 007c0066  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007c0060 {
    char pad0[612];
    int m_x;
    int f();
};
int S_func_007c0060::f()
{
    return m_x;
}
