// roc 2009-12 00641b50  unit: RBX::VFaces::?$TypedPropertyDescriptor  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00641b50
//
// 00641b50  32c0                 xor al, al
// 00641b52  c20800               ret 8
// copied from an identical function in another client (function ?f@S_func_006634b0@ns_ROCX0000cd@@QAE_NHH@Z)

namespace ns_ROCX0000cd {
struct S_func_006634b0 {

    bool f(int a1, int a2);
};
bool S_func_006634b0::f(int a1, int a2)
{
    return false;
}
}
