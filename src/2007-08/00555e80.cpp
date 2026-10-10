// from server: 70% by colin
struct GuiItem {
    virtual int getX();
    virtual int getY();
};

struct GuiRoot {
    char pad[0xc0];
    void* items;
    int render2d(GuiItem* item);
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" int __cdecl sub_630D36(void*, void*, void*, int, int);
extern "C" int __cdecl sub_487C10(GuiRoot*);

float g_8c1e64;
float g_8c1e68;

int GuiRoot::render2d(GuiItem* item) {
    short x = (short)item->getX();
    short y = (short)item->getY();
    g_8c1e64 = (float)y;
    g_8c1e68 = (float)x;

    unsigned int count = (unsigned int)sub_487C10(this);
    for (unsigned int i = 0; i < count; ++i) {
        void** vec = (void**)((char*)this + 0xc0);
        void* begin = vec[1];
        void* end = vec[2];
        if (begin == 0 || i >= (unsigned int)(((char*)end - (char*)begin) >> 3)) {
            _invalid_parameter_noinfo();
        }
        void* elem = ((void**)vec[1])[i * 2];
        int r = sub_630D36(elem, (void*)0x881f4c, (void*)0x881f30, 0, 0);
        if (r != 0) {
            void** vtbl = *(void***)r;
            ((void (__thiscall*)(void*, GuiItem*))vtbl[0x64 / 4])((void*)r, item);
        }
        count = (unsigned int)sub_487C10(this);
    }
    return 0;
}
