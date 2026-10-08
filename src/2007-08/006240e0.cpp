// from server: 100% by colin
// roc 2007-08 006240e0  unit: RBX::ArrowButton  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006240e0
//
// 006240e0  8b8940010000         mov ecx, dword ptr [ecx + 0x140]
// 006240e6  e8d5cde2ff           call 0x450ec0
// 006240eb  33c9                 xor ecx, ecx
// 006240ed  83b84c01000001       cmp dword ptr [eax + 0x14c], 1
// 006240f4  0f94c1               sete cl
// 006240f7  8ac1                 mov al, cl
// 006240f9  c3                   ret 

struct Sub {
    char pad[0x14c];
    int state;
    Sub* get();
};

struct ArrowButton {
    char pad[0x140];
    Sub* sub;
    bool isPressed();
};

bool ArrowButton::isPressed()
{
    return sub->get()->state == 1;
}
