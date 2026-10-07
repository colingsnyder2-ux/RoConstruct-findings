// roc 2011-06 005b8b10  unit: RBX::PrismBuilder  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005b8b10
//
// 005b8b10  32c0                 xor al, al
// 005b8b12  c20800               ret 8
// auto-matched from its assembly shape

struct S_func_005b8b10 {

    bool f(int a1, int a2);
};
bool S_func_005b8b10::f(int a1, int a2)
{
    return false;
}
