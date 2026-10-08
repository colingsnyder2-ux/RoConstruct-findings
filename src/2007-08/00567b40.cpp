// from server: 100% by colin
// roc 2007-08 00567b40  unit: RBX::RootInstance  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00567b40
//
// 00567b40  c6814802000001       mov byte ptr [ecx + 0x248], 1
// 00567b47  e98495fcff           jmp 0x5310d0

struct S {
    char pad[0x248];
    unsigned char flag;
    void f();
    void g();
};

void S::f()
{
    flag = 1;
    g();
}
