// roc 2007-08 00720a50  unit: CXTCaptionButtonTheme  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00720a50
//
// 00720a50  8b442404             mov eax, dword ptr [esp + 4]
// 00720a54  894158               mov dword ptr [ecx + 0x58], eax
// 00720a57  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00720a50 {
    char pad0[88];
    int m_x;
    void f(int a1);
};
void S_func_00720a50::f(int a1)
{
    m_x = (int)a1;
}
