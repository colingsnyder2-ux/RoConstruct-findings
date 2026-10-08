// from server: 100% by colin
// roc 2007-08 005da510  unit: RBX::VelocityMotor  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005da510
//
// 005da510  8b81fc000000         mov eax, dword ptr [ecx + 0xfc]
// 005da516  50                   push eax
// 005da517  6a01                 push 1
// 005da519  e8e2fdffff           call 0x5da300
// 005da51e  c3                   ret 

struct VelocityMotor {
    char pad[0xfc];
    int field_fc;
    void sub_5da300(int, int);
    void func();
};

void VelocityMotor::func() {
    sub_5da300(1, field_fc);
}
