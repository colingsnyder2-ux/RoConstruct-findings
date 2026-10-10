// from server: 52% by colin
struct GuiDrawImage {
    char pad[0x18];
};

struct BackpackItem {
    void construct();
    void setName(const char* value);
    char pad0[0x8c - 0x4];
    GuiDrawImage guiImageDraw;
    char pad1[0xe8 - 0x8c - 0x18];
    GuiDrawImage window;
    void* vtable_extra;
};

extern "C" {
    void __stdcall InitializeCriticalSection(void*);
    void __stdcall DeleteCriticalSection(void*);
}

void BackpackItem::construct()
{
    char buf[0x20];
    setName("StarterPack");
    *(void**)this = (void*)0x7b2934;
    *(void**)((char*)this + 4) = (void*)0x7b2928;
    *(void**)((char*)this + 0x10) = (void*)0x7b2920;
    *(void**)((char*)this + 0x14) = (void*)0x7b2910;
    *(void**)((char*)this + 0x2c) = (void*)0x7b2900;
    *(void**)((char*)this + 0x44) = (void*)0x7b28f0;
    *(void**)((char*)this + 0x5c) = (void*)0x7b28e0;
    *(void**)((char*)this + 0x74) = (void*)0x7b28d0;
    *(void**)((char*)this + 0x8c) = (void*)0x7b28c0;
    *(void**)((char*)this + 0xe8) = (void*)0x7b28b8;
    InitializeCriticalSection(buf);
    DeleteCriticalSection(buf);
}
