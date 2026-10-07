// roc 2007-08 0053e2e0  unit: RBX::VInstance::?$NonFactoryProduct  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0053e2e0
//
// 0053e2e0  32c0                 xor al, al
// 0053e2e2  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0053e2e0 {

    bool f(int a1);
};
bool S_func_0053e2e0::f(int a1)
{
    return false;
}
