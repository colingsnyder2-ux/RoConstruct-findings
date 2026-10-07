// roc 2010-06 007ce3a0  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ce3a0
//
// 007ce3a0  8b442404             mov eax, dword ptr [esp + 4]
// 007ce3a4  89413c               mov dword ptr [ecx + 0x3c], eax
// 007ce3a7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_007ce3a0 {
    char pad0[60];
    int m_x;
    void f(int a1);
};
void S_func_007ce3a0::f(int a1)
{
    m_x = (int)a1;
}
