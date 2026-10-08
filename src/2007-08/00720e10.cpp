// roc 2007-08 00720e10  unit: CXTCaptionButtonThemeOfficeXP  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00720e10
//
// 00720e10  8b442404             mov eax, dword ptr [esp + 4]
// 00720e14  8981b4000000         mov dword ptr [ecx + 0xb4], eax
// 00720e1a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00720e10 {
    char pad0[180];
    int m_x;
    void f(int a1);
};
void S_func_00720e10::f(int a1)
{
    m_x = (int)a1;
}
