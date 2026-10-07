// roc 2008-06 0068b7a0  unit: Ogre::RbxSceneManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068b7a0
//
// 0068b7a0  8b442404             mov eax, dword ptr [esp + 4]
// 0068b7a4  8981cc010000         mov dword ptr [ecx + 0x1cc], eax
// 0068b7aa  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0068b7a0 {
    char pad0[460];
    int m_x;
    void f(int a1);
};
void S_func_0068b7a0::f(int a1)
{
    m_x = (int)a1;
}
