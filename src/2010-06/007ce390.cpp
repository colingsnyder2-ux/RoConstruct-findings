// roc 2010-06 007ce390  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ce390
//
// 007ce390  8b442404             mov eax, dword ptr [esp + 4]
// 007ce394  894130               mov dword ptr [ecx + 0x30], eax
// 007ce397  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_007ce390 {
    char pad0[48];
    int m_x;
    void f(int a1);
};
void S_func_007ce390::f(int a1)
{
    m_x = (int)a1;
}
