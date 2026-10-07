// roc 2010-06 00753d50  unit: RBX::Ball  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00753d50
//
// 00753d50  b804000000           mov eax, 4
// 00753d55  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00753d50 {

    unsigned int f(int a1);
};
unsigned int S_func_00753d50::f(int a1)
{
    return 4u;
}
