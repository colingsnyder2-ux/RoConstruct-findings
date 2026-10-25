// from server: 100% by tester
// roc 2008-06 00590180  unit: RBX::RootInstance  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00590180
//
// 00590180  c681b002000001       mov byte ptr [ecx + 0x2b0], 1
// 00590187  e9e444ffff           jmp 0x584670

struct S {
    char pad[0x2b0];
    unsigned char flag;
    void f();
    void g();
};

void S::f()
{
    flag = 1;
    g();
}
