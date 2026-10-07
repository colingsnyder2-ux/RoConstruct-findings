// roc 2011-06 005d7410  unit: RBX::VBasicPartInstance::?$ActionStation  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d7410
//
// 005d7410  32c0                 xor al, al
// 005d7412  c20c00               ret 0xc
// auto-matched from its assembly shape

struct S_func_005d7410 {

    bool f(int a1, int a2, int a3);
};
bool S_func_005d7410::f(int a1, int a2, int a3)
{
    return false;
}
