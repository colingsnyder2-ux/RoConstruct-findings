// roc 2008-06 0067c510  unit: Ogre::VisualEngine  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0067c510
//
// 0067c510  8b442404             mov eax, dword ptr [esp + 4]
// 0067c514  898174020000         mov dword ptr [ecx + 0x274], eax
// 0067c51a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0067c510 {
    char pad0[628];
    int m_x;
    void f(int a1);
};
void S_func_0067c510::f(int a1)
{
    m_x = (int)a1;
}
