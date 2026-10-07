// roc 2009-06 006634b0  unit: RBX::$00::?$SurfaceDescriptor  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006634b0
//
// 006634b0  32c0                 xor al, al
// 006634b2  c20800               ret 8
// auto-matched from its assembly shape

struct S_func_006634b0 {

    bool f(int a1, int a2);
};
bool S_func_006634b0::f(int a1, int a2)
{
    return false;
}
