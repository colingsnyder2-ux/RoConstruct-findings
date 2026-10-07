// roc 2010-06 005c6bf0  unit: RBX::SpanningTree  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c6bf0
//
// 005c6bf0  b001                 mov al, 1
// 005c6bf2  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_005c6bf0 {

    bool f(int a1);
};
bool S_func_005c6bf0::f(int a1)
{
    return true;
}
