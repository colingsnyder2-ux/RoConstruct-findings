// roc 2009-06 00838e20  unit: DxUserInput  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00838e20
//
// 00838e20  8b442404             mov eax, dword ptr [esp + 4]
// 00838e24  894154               mov dword ptr [ecx + 0x54], eax
// 00838e27  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00838e20 {
    char pad0[84];
    int m_x;
    void f(int a1);
};
void S_func_00838e20::f(int a1)
{
    m_x = (int)a1;
}
