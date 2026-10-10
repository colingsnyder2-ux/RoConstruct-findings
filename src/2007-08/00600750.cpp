// from server: 74% by colin
struct GuiItem {
    void construct();
};

struct Widget : GuiItem {
    char pad0[0xf0];
    float f4;
    float f8;
    char pad1[0x04];
    int fc;
    Widget();
};

extern float g_78fef0;
extern float g_7a8360;

Widget::Widget()
{
    construct();
    *(int*)((char*)this + 0x00) = 0x7c28b4;
    *(int*)((char*)this + 0x04) = 0x7c28ac;
    *(int*)((char*)this + 0x10) = 0x7c28a4;
    *(int*)((char*)this + 0x14) = 0x7c2894;
    *(int*)((char*)this + 0x2c) = 0x7c2884;
    *(int*)((char*)this + 0x44) = 0x7c2874;
    *(int*)((char*)this + 0x5c) = 0x7c2864;
    *(int*)((char*)this + 0x74) = 0x7c2854;
    *(int*)((char*)this + 0x8c) = 0x7c2844;
    *(int*)((char*)this + 0xe8) = 0x7c283c;
    *(int*)((char*)this + 0xfc) = 0;
    *(float*)((char*)this + 0xf4) = g_78fef0;
    *(float*)((char*)this + 0xf8) = g_7a8360;
}
