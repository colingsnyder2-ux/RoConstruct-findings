// roc 2009-06 0073f3a0  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073f3a0
//
// 0073f3a0  8b442404             mov eax, dword ptr [esp + 4]
// 0073f3a4  894130               mov dword ptr [ecx + 0x30], eax
// 0073f3a7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0073f3a0 {
    char pad0[48];
    int m_x;
    void f(int a1);
};
void S_func_0073f3a0::f(int a1)
{
    m_x = (int)a1;
}
