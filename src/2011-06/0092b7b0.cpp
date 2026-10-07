// roc 2011-06 0092b7b0  unit: Ogre::RbxSceneManagerFactory  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0092b7b0
//
// 0092b7b0  8b442404             mov eax, dword ptr [esp + 4]
// 0092b7b4  898188080000         mov dword ptr [ecx + 0x888], eax
// 0092b7ba  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0092b7b0 {
    char pad0[2184];
    int m_x;
    void f(int a1);
};
void S_func_0092b7b0::f(int a1)
{
    m_x = (int)a1;
}
