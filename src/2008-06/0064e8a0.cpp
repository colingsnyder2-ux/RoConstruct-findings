// from server: 100% by tester
// roc 2008-06 0064e8a0  unit: RBX::ChatWidget  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064e8a0
//
// 0064e8a0  83b94401000001       cmp dword ptr [ecx + 0x144], 1
// 0064e8a7  7507                 jne 0x64e8b0
// 0064e8a9  6a03                 push 3
// 0064e8ab  e8104df2ff           call 0x5735c0
// 0064e8b0  c3                   ret 

struct ChatWidget {
    char pad[0x144];
    int field_a0;
    void sub_607770(int);
    void f();
};

void ChatWidget::f() {
    if (field_a0 == 1) {
        sub_607770(3);
    }
}
