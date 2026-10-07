// roc 2011-06 009467f0  unit: Ogre::RbxSceneNode  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009467f0
//
// 009467f0  8b442404             mov eax, dword ptr [esp + 4]
// 009467f4  894160               mov dword ptr [ecx + 0x60], eax
// 009467f7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_009467f0 {
    char pad0[96];
    int m_x;
    void f(int a1);
};
void S_func_009467f0::f(int a1)
{
    m_x = (int)a1;
}
