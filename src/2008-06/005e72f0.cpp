// roc 2008-06 005e72f0  unit: RBX::ModelInstance  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e72f0
//
// 005e72f0  32c0                 xor al, al
// 005e72f2  c20c00               ret 0xc
// auto-matched from its assembly shape

struct S_func_005e72f0 {

    bool f(int a1, int a2, int a3);
};
bool S_func_005e72f0::f(int a1, int a2, int a3)
{
    return false;
}
