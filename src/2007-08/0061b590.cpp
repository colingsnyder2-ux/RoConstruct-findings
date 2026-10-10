// from server: 34% by colin
struct GuiItem {
    char pad[0x100];
};

struct Widget : GuiItem {
    char pad2[0x100];
    void construct(int a, int b, int c, int d, int e, int f, int g, int h);
};

extern "C" void __stdcall sub_5d4d80();
extern "C" void __stdcall sub_541bf0(int);
extern "C" void* __stdcall sub_77e6a4();
extern "C" void __stdcall sub_77e690(void*);
extern "C" void __stdcall sub_77e6ac(void*);

void Widget::construct(int a, int b, int c, int d, int e, int f, int g, int h) {
    sub_5d4d80();
    *(int*)((char*)this + 0x00) = 0x7c3cd4;
    *(int*)((char*)this + 0x04) = 0x7c3ccc;
    *(int*)((char*)this + 0x10) = 0x7c3cc4;
    *(int*)((char*)this + 0x14) = 0x7c3cb4;
    *(int*)((char*)this + 0x2c) = 0x7c3ca4;
    *(int*)((char*)this + 0x44) = 0x7c3c94;
    *(int*)((char*)this + 0x5c) = 0x7c3c84;
    *(int*)((char*)this + 0x74) = 0x7c3c74;
    *(int*)((char*)this + 0x8c) = 0x7c3c64;
    *(int*)((char*)this + 0xe8) = 0x7c3c5c;
    sub_77e6a4();
    sub_541bf0(a);
    sub_77e690((char*)this + 0x100);
    sub_77e6ac((char*)this + 0x100);
}
