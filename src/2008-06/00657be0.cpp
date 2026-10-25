// from server: 100% by tester
// roc 2008-06 00657be0  unit: RBX::ArrowButton  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00657be0
//
// 00657be0  8b8988010000         mov ecx, dword ptr [ecx + 0x188]
// 00657be6  e805b5dfff           call 0x4530f0
// 00657beb  33c9                 xor ecx, ecx
// 00657bed  83b8b401000001       cmp dword ptr [eax + 0x1b4], 1
// 00657bf4  0f94c1               sete cl
// 00657bf7  8ac1                 mov al, cl
// 00657bf9  c3                   ret 

struct Sub {
    char pad[0x1b4];
    int state;
    Sub* get();
};

struct ArrowButton {
    char pad[0x188];
    Sub* sub;
    bool isPressed();
};

bool ArrowButton::isPressed()
{
    return sub->get()->state == 1;
}
