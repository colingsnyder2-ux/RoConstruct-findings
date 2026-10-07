// roc 2010-06 00804950  unit: CXTCaptionButtonTheme  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00804950
//
// 00804950  8b442404             mov eax, dword ptr [esp + 4]
// 00804954  894158               mov dword ptr [ecx + 0x58], eax
// 00804957  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00804950 {
    char pad0[88];
    int m_x;
    void f(int a1);
};
void S_func_00804950::f(int a1)
{
    m_x = (int)a1;
}
