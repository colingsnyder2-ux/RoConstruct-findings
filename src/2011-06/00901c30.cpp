// roc 2011-06 00901c30  unit: CXTCaptionButtonThemeOfficeXP  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00901c30
//
// 00901c30  8b442404             mov eax, dword ptr [esp + 4]
// 00901c34  898194000000         mov dword ptr [ecx + 0x94], eax
// 00901c3a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00901c30 {
    char pad0[148];
    int m_x;
    void f(int a1);
};
void S_func_00901c30::f(int a1)
{
    m_x = (int)a1;
}
