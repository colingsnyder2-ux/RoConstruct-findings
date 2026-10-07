// roc 2009-06 004fe550  unit: RakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004fe550
//
// 004fe550  8b442404             mov eax, dword ptr [esp + 4]
// 004fe554  8981800b0000         mov dword ptr [ecx + 0xb80], eax
// 004fe55a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004fe550 {
    char pad0[2944];
    int m_x;
    void f(int a1);
};
void S_func_004fe550::f(int a1)
{
    m_x = (int)a1;
}
