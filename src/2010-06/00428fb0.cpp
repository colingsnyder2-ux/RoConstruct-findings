// roc 2010-06 00428fb0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$sp_counted_impl_p  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00428fb0
//
// 00428fb0  33c0                 xor eax, eax
// 00428fb2  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00428fb0 {

    int f(int a1);
};
int S_func_00428fb0::f(int a1)
{
    return 0;
}
