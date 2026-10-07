// roc 2009-06 004e16c0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$sp_counted_impl_p  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e16c0
//
// 004e16c0  33c0                 xor eax, eax
// 004e16c2  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004e16c0 {

    int f(int a1);
};
int S_func_004e16c0::f(int a1)
{
    return 0;
}
