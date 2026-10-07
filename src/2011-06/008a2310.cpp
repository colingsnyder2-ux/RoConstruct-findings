// roc 2011-06 008a2310  unit: ATL::CRegObject  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a2310
//
// 008a2310  b801000000           mov eax, 1
// 008a2315  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_008a2310 {

    int f(int a1);
};
int S_func_008a2310::f(int a1)
{
    return 1;
}
