// roc 2009-06 00819390  unit: CXTCaptionButtonTheme  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00819390
//
// 00819390  8b442404             mov eax, dword ptr [esp + 4]
// 00819394  89414c               mov dword ptr [ecx + 0x4c], eax
// 00819397  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00819390 {
    char pad0[76];
    int m_x;
    void f(int a1);
};
void S_func_00819390::f(int a1)
{
    m_x = (int)a1;
}
