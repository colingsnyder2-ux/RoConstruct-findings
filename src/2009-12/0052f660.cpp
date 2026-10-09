// roc 2009-12 0052f660  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$sp_counted_impl_p  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0052f660
//
// 0052f660  33c0                 xor eax, eax
// 0052f662  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_004e16c0@ns_ROCX000035@@QAEHH@Z)

namespace ns_ROCX000035 {
struct S_func_004e16c0 {

    int f(int a1);
};
int S_func_004e16c0::f(int a1)
{
    return 0;
}
}
