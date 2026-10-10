// from server: 54% by colin
struct Listener {
    char pad0[0x20];
    void* hwnd;
    char pad1[0x88 - 0x24];
    char field88[0x18];
    char pad2[0x140 - 0xa0];
    char field140[0x20];
    int field160;
    char pad4[0x198 - 0x164];
    void* field198;
    void update();
};

extern "C" int __stdcall GetClientRect(void*, void*);
extern "C" void __stdcall sub_630034(void*, int, int, int, int, int);

void Listener::update()
{
    int rect[4];
    GetClientRect(hwnd, rect);
    int w = rect[2] - rect[0];
    int h = rect[3] - rect[1];
    int x = w;
    int y = h;
    if (field198 != 0 && *(int*)((char*)field198 + 0x20) != 0)
        y = h - 0xe1;
    if (field160 != 0)
        x = w - 0x14;
    int a = (x < 0) ? 0 : x;
    int b = (y < 0) ? 0 : y;
    if (*(int*)((char*)this + 0xa8) != 0)
        sub_630034((char*)this + 0x88, 0, 0, b, a, 1);
    if (field198 != 0 && *(int*)((char*)field198 + 0x20) != 0)
        sub_630034(0, 0, 0xe1, w, b, 1);
    if (field160 != 0)
        sub_630034((char*)this + 0x140, 0, a, 0x14, 1, 0);
}
