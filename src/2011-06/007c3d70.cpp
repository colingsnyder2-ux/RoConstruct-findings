// roc 2011-06 007c3d70  unit: RBX::GroupRunDragger  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007c3d70
//
// 007c3d70  8b442404             mov eax, dword ptr [esp + 4]
// 007c3d74  898148020000         mov dword ptr [ecx + 0x248], eax
// 007c3d7a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_007c3d70 {
    char pad0[584];
    int m_x;
    void f(int a1);
};
void S_func_007c3d70::f(int a1)
{
    m_x = (int)a1;
}
