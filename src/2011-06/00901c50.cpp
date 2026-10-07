// roc 2011-06 00901c50  unit: CXTCaptionButtonThemeOfficeXP  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00901c50
//
// 00901c50  8b442404             mov eax, dword ptr [esp + 4]
// 00901c54  8981b8000000         mov dword ptr [ecx + 0xb8], eax
// 00901c5a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00901c50 {
    char pad0[184];
    int m_x;
    void f(int a1);
};
void S_func_00901c50::f(int a1)
{
    m_x = (int)a1;
}
