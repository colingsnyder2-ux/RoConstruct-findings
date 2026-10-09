// roc 2009-12 00524fc0  unit: XVCrashReporter::XV?$mf0::V?$bind_t::?$thread_data  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00524fc0
//
// 00524fc0  c6417500             mov byte ptr [ecx + 0x75], 0
// 00524fc4  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_004d2b70@ns_ROCX0000da@@QAEXXZ)

namespace ns_ROCX0000da {
struct S_func_004d2b70 {
    char pad0[117];
    char m_x;
    void f();
};
void S_func_004d2b70::f()
{
    m_x = (char)0;
}
}
