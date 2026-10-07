// roc 2008-06 006e8870  unit: ATL::CRegObject  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8870
//
// 006e8870  b801000000           mov eax, 1
// 006e8875  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006e8870 {

    int f(int a1);
};
int S_func_006e8870::f(int a1)
{
    return 1;
}
