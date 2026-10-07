// roc 2010-06 00514e20  unit: RakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00514e20
//
// 00514e20  8b442404             mov eax, dword ptr [esp + 4]
// 00514e24  8981900a0000         mov dword ptr [ecx + 0xa90], eax
// 00514e2a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00514e20 {
    char pad0[2704];
    int m_x;
    void f(int a1);
};
void S_func_00514e20::f(int a1)
{
    m_x = (int)a1;
}
