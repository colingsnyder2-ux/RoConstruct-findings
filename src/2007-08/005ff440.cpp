// from server: 70% by colin
// roc 2007-08 005ff440  unit: RBX::BallBallContact  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ff440
//
// 005ff440  8d412c               lea eax, [ecx + 0x2c]
// 005ff443  50                   push eax
// 005ff444  e837e6fcff           call 0x5cda80
// 005ff449  c3                   ret 

struct BallBallContact {
    char pad[0x2c];
    int field_2c;
    void method();
};

extern "C" void __stdcall helper(int*);

void BallBallContact::method() {
    helper(&field_2c);
}
