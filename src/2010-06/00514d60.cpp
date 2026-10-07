// roc 2010-06 00514d60  unit: RakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00514d60
//
// 00514d60  8b442404             mov eax, dword ptr [esp + 4]
// 00514d64  89817c0a0000         mov dword ptr [ecx + 0xa7c], eax
// 00514d6a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00514d60 {
    char pad0[2684];
    int m_x;
    void f(int a1);
};
void S_func_00514d60::f(int a1)
{
    m_x = (int)a1;
}
