// roc 2009-12 0054eb70  unit: RBX::Network::Replicator  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0054eb70
//
// 0054eb70  b001                 mov al, 1
// 0054eb72  c20800               ret 8
// copied from an identical function in another client (function ?f@S_func_005013a0@ns_ROCX000006@@QAE_NHH@Z)

namespace ns_ROCX000006 {
struct S_func_005013a0 {

    bool f(int a1, int a2);
};
bool S_func_005013a0::f(int a1, int a2)
{
    return true;
}
}
