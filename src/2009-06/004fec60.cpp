// roc 2009-06 004fec60  unit: RakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004fec60
//
// 004fec60  8b442404             mov eax, dword ptr [esp + 4]
// 004fec64  89817c0a0000         mov dword ptr [ecx + 0xa7c], eax
// 004fec6a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004fec60 {
    char pad0[2684];
    int m_x;
    void f(int a1);
};
void S_func_004fec60::f(int a1)
{
    m_x = (int)a1;
}
