// roc 2007-03 005cf610  unit: seg_005c0000  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005cf610
//
// 005cf610  b001                 mov al, 1
// 005cf612  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_005cf610 {

    bool f(int a1);
};
bool S_func_005cf610::f(int a1)
{
    return true;
}
