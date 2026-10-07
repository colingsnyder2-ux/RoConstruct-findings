// roc 2009-06 0066f630  unit: RBX::VBasicPartInstance::?$SeatImpl  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066f630
//
// 0066f630  32c0                 xor al, al
// 0066f632  c20c00               ret 0xc
// auto-matched from its assembly shape

struct S_func_0066f630 {

    bool f(int a1, int a2, int a3);
};
bool S_func_0066f630::f(int a1, int a2, int a3)
{
    return false;
}
