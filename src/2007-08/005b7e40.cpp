// roc 2007-08 005b7e40  unit: RBX::$00::?$SurfaceDescriptor  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005b7e40
//
// 005b7e40  32c0                 xor al, al
// 005b7e42  c20800               ret 8
// auto-matched from its assembly shape

struct S_func_005b7e40 {

    bool f(int a1, int a2);
};
bool S_func_005b7e40::f(int a1, int a2)
{
    return false;
}
