// roc 2009-06 004f2a00  unit: RBX::Network::Player  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f2a00
//
// 004f2a00  b001                 mov al, 1
// 004f2a02  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004f2a00 {

    bool f(int a1);
};
bool S_func_004f2a00::f(int a1)
{
    return true;
}
