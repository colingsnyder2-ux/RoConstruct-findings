// roc 2008-06 007a18f0  unit: CXTCaptionButtonTheme  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a18f0
//
// 007a18f0  8b442404             mov eax, dword ptr [esp + 4]
// 007a18f4  89414c               mov dword ptr [ecx + 0x4c], eax
// 007a18f7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_007a18f0 {
    char pad0[76];
    int m_x;
    void f(int a1);
};
void S_func_007a18f0::f(int a1)
{
    m_x = (int)a1;
}
