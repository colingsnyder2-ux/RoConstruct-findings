// roc 2007-03 00672590  unit: seg_00670000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00672590
//
// 00672590  8b442404             mov eax, dword ptr [esp + 4]
// 00672594  894138               mov dword ptr [ecx + 0x38], eax
// 00672597  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00672590 {
    char pad0[56];
    int m_x;
    void f(int a1);
};
void S_func_00672590::f(int a1)
{
    m_x = (int)a1;
}
