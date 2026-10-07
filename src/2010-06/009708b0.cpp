// roc 2010-06 009708b0  unit: RBX::WedgeBuilder  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009708b0
//
// 009708b0  32c0                 xor al, al
// 009708b2  c20800               ret 8
// auto-matched from its assembly shape

struct S_func_009708b0 {

    bool f(int a1, int a2);
};
bool S_func_009708b0::f(int a1, int a2)
{
    return false;
}
