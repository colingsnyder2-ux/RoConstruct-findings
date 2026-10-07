// roc 2008-06 007a1c90  unit: CXTCaptionButtonThemeOfficeXP  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a1c90
//
// 007a1c90  8b442404             mov eax, dword ptr [esp + 4]
// 007a1c94  898194000000         mov dword ptr [ecx + 0x94], eax
// 007a1c9a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_007a1c90 {
    char pad0[148];
    int m_x;
    void f(int a1);
};
void S_func_007a1c90::f(int a1)
{
    m_x = (int)a1;
}
