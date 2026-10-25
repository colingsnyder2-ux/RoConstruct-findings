// from server: 100% by tester
// roc 2008-06 0060a230  unit: RBX::VelocityMotor  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060a230
//
// 0060a230  8b8154010000         mov eax, dword ptr [ecx + 0x154]
// 0060a236  50                   push eax
// 0060a237  6a01                 push 1
// 0060a239  e8e2fdffff           call 0x60a020
// 0060a23e  c3                   ret 

struct VelocityMotor {
    char pad[0x154];
    int field_fc;
    void sub_5da300(int, int);
    void func();
};

void VelocityMotor::func() {
    sub_5da300(1, field_fc);
}
