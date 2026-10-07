// roc 2011-06 007a5280  unit: RBX::Ball  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a5280
//
// 007a5280  b804000000           mov eax, 4
// 007a5285  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_007a5280 {

    unsigned int f(int a1);
};
unsigned int S_func_007a5280::f(int a1)
{
    return 4u;
}
