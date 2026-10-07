// roc 2012-06 004054a0  unit: ATL::CRegObject  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004054a0
//
// 004054a0  b801000000           mov eax, 1
// 004054a5  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004054a0 {

    int f(int a1);
};
int S_func_004054a0::f(int a1)
{
    return 1;
}
