// roc 2009-12 00432780  unit: CXTCaptionButtonThemeOfficeXP  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00432780
//
// 00432780  8b442404             mov eax, dword ptr [esp + 4]
// 00432784  898194000000         mov dword ptr [ecx + 0x94], eax
// 0043278a  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_00819730@ns_ROCX0000c0@@QAEXH@Z)

namespace ns_ROCX0000c0 {
struct S_func_00819730 {
    char pad0[148];
    int m_x;
    void f(int a1);
};
void S_func_00819730::f(int a1)
{
    m_x = (int)a1;
}
}
