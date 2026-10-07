// roc 2008-06 007a1cc0  unit: CXTCaptionButtonThemeOfficeXP  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a1cc0
//
// 007a1cc0  8b442404             mov eax, dword ptr [esp + 4]
// 007a1cc4  8981b8000000         mov dword ptr [ecx + 0xb8], eax
// 007a1cca  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_007a1cc0 {
    char pad0[184];
    int m_x;
    void f(int a1);
};
void S_func_007a1cc0::f(int a1)
{
    m_x = (int)a1;
}
