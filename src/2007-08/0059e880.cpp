// from server: 100% by colin
// roc 2007-08 0059e880  unit: RBX::HopperBin  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059e880
//
// 0059e880  80b95c01000000       cmp byte ptr [ecx + 0x15c], 0
// 0059e887  751a                 jne 0x59e8a3
// 0059e889  83b95801000000       cmp dword ptr [ecx + 0x158], 0
// 0059e890  c6815c01000001       mov byte ptr [ecx + 0x15c], 1
// 0059e897  7505                 jne 0x59e89e
// 0059e899  e9f2fdffff           jmp 0x59e690
// 0059e89e  e9edfeffff           jmp 0x59e790
// 0059e8a3  8b01                 mov eax, dword ptr [ecx]
// 0059e8a5  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 0059e8ab  ffe2                 jmp edx

struct HopperBin {
    char pad[0x158];
    int field_158;
    unsigned char field_15c;
    void sub_59e690();
    void sub_59e790();
    void func();
};

void HopperBin::func() {
    if (field_15c == 0) {
        field_15c = 1;
        if (field_158 == 0) {
            sub_59e690();
        } else {
            sub_59e790();
        }
    } else {
        void (HopperBin::*p)() = *(void (HopperBin::**)())(*(void***)this + 0x8c / 4);
        (this->*p)();
    }
}
