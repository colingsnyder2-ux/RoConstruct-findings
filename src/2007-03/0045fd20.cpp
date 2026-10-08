// roc 2007-03 0045fd20  unit: seg_00450000  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045fd20
//
// 0045fd20  b001                 mov al, 1
// 0045fd22  c21000               ret 0x10
// auto-matched from its assembly shape

struct S_func_0045fd20 {

    bool f(int a1, int a2, int a3, int a4);
};
bool S_func_0045fd20::f(int a1, int a2, int a3, int a4)
{
    return true;
}
