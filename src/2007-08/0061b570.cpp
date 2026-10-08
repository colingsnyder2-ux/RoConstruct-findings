// from server: 100% by colin
// roc 2007-08 0061b570  unit: RBX::ChatWidget  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061b570
//
// 0061b570  83b9fc00000001       cmp dword ptr [ecx + 0xfc], 1
// 0061b577  7507                 jne 0x61b580
// 0061b579  6a03                 push 3
// 0061b57b  e8e0a2f3ff           call 0x555860
// 0061b580  c3                   ret 

struct ChatWidget {
    char pad[0xfc];
    int state;
    void update();
};

extern "C" void __stdcall sub_555860(int);

void ChatWidget::update() {
    if (state == 1)
        sub_555860(3);
}
