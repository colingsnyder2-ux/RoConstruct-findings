// roc 2009-06 00819740  unit: CXTCaptionButtonThemeOfficeXP  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00819740
//
// 00819740  8b442404             mov eax, dword ptr [esp + 4]
// 00819744  8981ac000000         mov dword ptr [ecx + 0xac], eax
// 0081974a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00819740 {
    char pad0[172];
    int m_x;
    void f(int a1);
};
void S_func_00819740::f(int a1)
{
    m_x = (int)a1;
}
