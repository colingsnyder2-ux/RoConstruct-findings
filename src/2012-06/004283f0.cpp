// roc 2012-06 004283f0  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004283f0
//
// 004283f0  8b442404             mov eax, dword ptr [esp + 4]
// 004283f4  894154               mov dword ptr [ecx + 0x54], eax
// 004283f7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004283f0 {
    char pad0[84];
    int m_x;
    void f(int a1);
};
void S_func_004283f0::f(int a1)
{
    m_x = (int)a1;
}
