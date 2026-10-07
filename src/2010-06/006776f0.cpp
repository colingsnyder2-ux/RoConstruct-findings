// roc 2010-06 006776f0  unit: RBX::VBasicPartInstance::?$ActionStation  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006776f0
//
// 006776f0  32c0                 xor al, al
// 006776f2  c20c00               ret 0xc
// auto-matched from its assembly shape

struct S_func_006776f0 {

    bool f(int a1, int a2, int a3);
};
bool S_func_006776f0::f(int a1, int a2, int a3)
{
    return false;
}
