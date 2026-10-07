// roc 2007-08 00570090  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00570090
//
// 00570090  33c0                 xor eax, eax
// 00570092  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00570090 {

    int f(int a1);
};
int S_func_00570090::f(int a1)
{
    return 0;
}
