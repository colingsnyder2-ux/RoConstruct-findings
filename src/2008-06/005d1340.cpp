// from server: 100% by tester
// roc 2008-06 005d1340  unit: RBX::HopperBin  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d1340
//
// 005d1340  80b9a401000000       cmp byte ptr [ecx + 0x1a4], 0
// 005d1347  751a                 jne 0x5d1363
// 005d1349  83b9a001000000       cmp dword ptr [ecx + 0x1a0], 0
// 005d1350  c681a401000001       mov byte ptr [ecx + 0x1a4], 1
// 005d1357  7505                 jne 0x5d135e
// 005d1359  e9e2feffff           jmp 0x5d1240
// 005d135e  e95dfbffff           jmp 0x5d0ec0
// 005d1363  8b01                 mov eax, dword ptr [ecx]
// 005d1365  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 005d136b  ffe2                 jmp edx

struct HopperBin {
    char pad[0x1a0];
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
        void (HopperBin::*p)() = *(void (HopperBin::**)())(*(void***)this + 0x88 / 4);
        (this->*p)();
    }
}
