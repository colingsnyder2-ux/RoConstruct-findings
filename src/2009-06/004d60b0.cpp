// roc 2009-06 004d60b0  unit: RBX::Network::VClient::?$FactoryProduct  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d60b0
//
// 004d60b0  b801000000           mov eax, 1
// 004d60b5  c20800               ret 8
// auto-matched from its assembly shape

struct S_func_004d60b0 {

    int f(int a1, int a2);
};
int S_func_004d60b0::f(int a1, int a2)
{
    return 1;
}
