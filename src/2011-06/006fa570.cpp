// roc 2011-06 006fa570  unit: RBX::SpanningTree  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006fa570
//
// 006fa570  b001                 mov al, 1
// 006fa572  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006fa570 {

    bool f(int a1);
};
bool S_func_006fa570::f(int a1)
{
    return true;
}
