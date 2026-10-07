// roc 2008-06 005f2310  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f2310
//
// 005f2310  33c0                 xor eax, eax
// 005f2312  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_005f2310 {

    int f(int a1);
};
int S_func_005f2310::f(int a1)
{
    return 0;
}
