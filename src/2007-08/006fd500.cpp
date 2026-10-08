// roc 2007-08 006fd500  unit: ATL::CRegObject  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd500
//
// 006fd500  b801000000           mov eax, 1
// 006fd505  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006fd500 {

    int f(int a1);
};
int S_func_006fd500::f(int a1)
{
    return 1;
}
