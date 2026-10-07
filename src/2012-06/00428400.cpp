// roc 2012-06 00428400  unit: CXTCaptionButtonTheme  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00428400
//
// 00428400  8b442404             mov eax, dword ptr [esp + 4]
// 00428404  894158               mov dword ptr [ecx + 0x58], eax
// 00428407  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00428400 {
    char pad0[88];
    int m_x;
    void f(int a1);
};
void S_func_00428400::f(int a1)
{
    m_x = (int)a1;
}
