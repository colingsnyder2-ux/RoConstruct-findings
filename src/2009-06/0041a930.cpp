// roc 2009-06 0041a930  unit: CInstanceRecord::CNameItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041a930
//
// 0041a930  83c8ff               or eax, 0xffffffff
// 0041a933  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0041a930 {

    int f(int a1);
};
int S_func_0041a930::f(int a1)
{
    return -1;
}
