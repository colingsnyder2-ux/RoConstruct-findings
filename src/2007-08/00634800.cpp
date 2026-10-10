// from server: 74% by colin
struct MyXTPCommandBars {
    char pad_0x00[0x7c];
    int field_0x7c;
    int field_0x80;
    int field_0x84;
    char pad_0x88[0x38];
    int field_0xc0;
    void sub_00634800();
};

struct MyXTPCommandBar {
    char pad_0x00[0x20];
    int field_0x20;
    char pad_0x24[0xb4];
    int field_0xd8;
    char pad_0xdc[0xa4];
    int field_0x180;
    void sub_0062ff4a(int);
    void sub_006301e4();
};

extern "C" void __stdcall sub_006a2770(int, int);
extern "C" void __stdcall sub_006ffab0(int, int, int);

void MyXTPCommandBars::sub_00634800() {
    int i;
    MyXTPCommandBar* pBar;
    this->field_0xc0 = 1;
    for (i = 0; i < this->field_0x84; i++) {
        pBar = (MyXTPCommandBar*)((void* (*)(void*, int))0x632910)(this, i);
        if (pBar != 0 && pBar->field_0x20 != 0) {
            pBar->sub_0062ff4a(0);
            pBar->field_0xd8 = 0;
        }
        if (pBar->field_0x180 != 0) {
            sub_006a2770((int)pBar, -1);
            pBar->field_0x180 = 0;
        }
        ((void (*)(void*, MyXTPCommandBar*))(*(int*)(*(int*)this + 0x7c)))(this, pBar);
        ((void (*)(void*))(*(int*)(*(int*)pBar + 0x1dc)))(pBar);
        pBar->sub_006301e4();
    }
    sub_006ffab0((int)&this->field_0x7c, 0, -1);
    this->field_0xc0 = 0;
    ((void (*)(void*, int))(*(int*)(*(int*)this + 0x7c)))(this, 1);
}
