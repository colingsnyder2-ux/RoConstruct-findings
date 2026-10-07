// roc 2008-06 005eed40  unit: RBX::$00::?$SurfaceDescriptor  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005eed40
//
// 005eed40  32c0                 xor al, al
// 005eed42  c20800               ret 8
// auto-matched from its assembly shape

struct S_func_005eed40 {

    bool f(int a1, int a2);
};
bool S_func_005eed40::f(int a1, int a2)
{
    return false;
}
