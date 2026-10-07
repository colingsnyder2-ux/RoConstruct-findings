// roc 2009-06 00480f20  unit: Ogre::RbxStaticCluster  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00480f20
//
// 00480f20  33c0                 xor eax, eax
// 00480f22  c20c00               ret 0xc
// auto-matched from its assembly shape

struct S_func_00480f20 {

    int f(int a1, int a2, int a3);
};
int S_func_00480f20::f(int a1, int a2, int a3)
{
    return 0;
}
