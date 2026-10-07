// roc 2011-06 0052e010  unit: RBX::Network::ProfiledRakPeer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052e010
//
// 0052e010  8b442404             mov eax, dword ptr [esp + 4]
// 0052e014  89411c               mov dword ptr [ecx + 0x1c], eax
// 0052e017  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0052e010 {
    char pad0[28];
    int m_x;
    void f(int a1);
};
void S_func_0052e010::f(int a1)
{
    m_x = (int)a1;
}
