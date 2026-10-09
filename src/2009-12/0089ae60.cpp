// roc 2009-12 0089ae60  unit: CXTPReportPaintManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089ae60
//
// 0089ae60  8b8164020000         mov eax, dword ptr [ecx + 0x264]
// 0089ae66  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_007c0060@ns_ROCX0000a2@@QAEHXZ)

namespace ns_ROCX0000a2 {
struct S_func_007c0060 {
    char pad0[612];
    int m_x;
    int f();
};
int S_func_007c0060::f()
{
    return m_x;
}
}
