// roc 2007-08 00720e00  unit: CXTCaptionButtonThemeOfficeXP  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00720e00
//
// 00720e00  8b442404             mov eax, dword ptr [esp + 4]
// 00720e04  8981a8000000         mov dword ptr [ecx + 0xa8], eax
// 00720e0a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00720e00 {
    char pad0[168];
    int m_x;
    void f(int a1);
};
void S_func_00720e00::f(int a1)
{
    m_x = (int)a1;
}
