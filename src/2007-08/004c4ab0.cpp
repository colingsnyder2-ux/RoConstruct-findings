// roc 2007-08 004c4ab0  unit: RakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c4ab0
//
// 004c4ab0  8b442404             mov eax, dword ptr [esp + 4]
// 004c4ab4  8981e0030000         mov dword ptr [ecx + 0x3e0], eax
// 004c4aba  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004c4ab0 {
    char pad0[992];
    int m_x;
    void f(int a1);
};
void S_func_004c4ab0::f(int a1)
{
    m_x = (int)a1;
}
