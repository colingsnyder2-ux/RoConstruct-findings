// from server: 46% by colin
struct GuiItem {
    char pad[0x100];
};

struct Widget : GuiItem {
    char pad2[0x4];
    float f4;
    float f8;
    char pad3[0xdc];
    float f4_2;
    float f8_2;
    void construct(int);
};

extern "C" void __stdcall sub_6007d0(int);
extern "C" void __stdcall sub_541bf0(int);
extern "C" void __stdcall sub_77e6a4();

extern float dword_7c3d60;
extern float dword_7a8360;

void Widget::construct(int a) {
    sub_6007d0(a);
    *(int*)((char*)this + 0x104) = 0;
    *(int*)((char*)this) = 0x7c3de4;
    *(int*)((char*)this + 4) = 0x7c3dd8;
    *(int*)((char*)this + 0x10) = 0x7c3dd0;
    *(int*)((char*)this + 0x14) = 0x7c3dc0;
    *(int*)((char*)this + 0x2c) = 0x7c3db0;
    *(int*)((char*)this + 0x44) = 0x7c3da0;
    *(int*)((char*)this + 0x5c) = 0x7c3d90;
    *(int*)((char*)this + 0x74) = 0x7c3d80;
    *(int*)((char*)this + 0x8c) = 0x7c3d70;
    *(int*)((char*)this + 0xe8) = 0x7c3d68;
    sub_77e6a4();
    sub_541bf0(a);
    *(float*)((char*)this + 0xf4) = dword_7c3d60;
    *(float*)((char*)this + 0xf8) = dword_7a8360;
}
