// roc 2009-12 0041ace0  unit: CXTCaptionButtonTheme  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041ace0
//
// 0041ace0  8b442404             mov eax, dword ptr [esp + 4]
// 0041ace4  894158               mov dword ptr [ecx + 0x58], eax
// 0041ace7  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_0041a8a0@ns_ROCX000038@@QAEXH@Z)

namespace ns_ROCX000038 {
struct S_func_0041a8a0 {
    char pad0[88];
    int m_x;
    void f(int a1);
};
void S_func_0041a8a0::f(int a1)
{
    m_x = (int)a1;
}
}
