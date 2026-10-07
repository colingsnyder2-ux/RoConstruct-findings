// roc 2011-06 0085fe30  unit: CXTCaptionButtonTheme  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085fe30
//
// 0085fe30  8b442404             mov eax, dword ptr [esp + 4]
// 0085fe34  894158               mov dword ptr [ecx + 0x58], eax
// 0085fe37  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0085fe30 {
    char pad0[88];
    int m_x;
    void f(int a1);
};
void S_func_0085fe30::f(int a1)
{
    m_x = (int)a1;
}
