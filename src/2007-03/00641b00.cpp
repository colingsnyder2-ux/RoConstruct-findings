// roc 2007-03 00641b00  unit: seg_00640000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00641b00
//
// 00641b00  8b442404             mov eax, dword ptr [esp + 4]
// 00641b04  89413c               mov dword ptr [ecx + 0x3c], eax
// 00641b07  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00641b00 {
    char pad0[60];
    int m_x;
    void f(int a1);
};
void S_func_00641b00::f(int a1)
{
    m_x = (int)a1;
}
