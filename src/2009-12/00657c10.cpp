// roc 2009-12 00657c10  unit: RBX::VBasicPartInstance::?$SeatImpl  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00657c10
//
// 00657c10  32c0                 xor al, al
// 00657c12  c20c00               ret 0xc
// copied from an identical function in another client (function ?f@S_func_0066f630@ns_ROCX0000df@@QAE_NHHH@Z)

namespace ns_ROCX0000df {
struct S_func_0066f630 {

    bool f(int a1, int a2, int a3);
};
bool S_func_0066f630::f(int a1, int a2, int a3)
{
    return false;
}
}
