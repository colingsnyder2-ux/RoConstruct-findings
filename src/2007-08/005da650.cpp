// roc 2007-08 005da650  unit: RBX::Network::Server  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005da650
//
// 005da650  b001                 mov al, 1
// 005da652  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_005da650 {

    bool f(int a1);
};
bool S_func_005da650::f(int a1)
{
    return true;
}
