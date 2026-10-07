// roc 2010-06 005013a0  unit: RBX::Network::Replicator  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005013a0
//
// 005013a0  b001                 mov al, 1
// 005013a2  c20800               ret 8
// auto-matched from its assembly shape

struct S_func_005013a0 {

    bool f(int a1, int a2);
};
bool S_func_005013a0::f(int a1, int a2)
{
    return true;
}
