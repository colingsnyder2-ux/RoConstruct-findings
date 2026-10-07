// roc 2010-06 00870270  unit: ATL::CRegObject  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00870270
//
// 00870270  b801000000           mov eax, 1
// 00870275  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00870270 {

    int f(int a1);
};
int S_func_00870270::f(int a1)
{
    return 1;
}
