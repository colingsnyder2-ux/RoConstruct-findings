// roc 2011-06 00424a00  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00424a00
//
// 00424a00  8b442404             mov eax, dword ptr [esp + 4]
// 00424a04  894154               mov dword ptr [ecx + 0x54], eax
// 00424a07  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00424a00 {
    char pad0[84];
    int m_x;
    void f(int a1);
};
void S_func_00424a00::f(int a1)
{
    m_x = (int)a1;
}
