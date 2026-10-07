// roc 2010-06 00514650  unit: RakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00514650
//
// 00514650  8b442404             mov eax, dword ptr [esp + 4]
// 00514654  8981800b0000         mov dword ptr [ecx + 0xb80], eax
// 0051465a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00514650 {
    char pad0[2944];
    int m_x;
    void f(int a1);
};
void S_func_00514650::f(int a1)
{
    m_x = (int)a1;
}
