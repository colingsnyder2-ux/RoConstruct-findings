// from server: 50% by colin
struct GuiItem {
    virtual bool isVisible();
    virtual void render2d(void* adorn);
    virtual void process(void* event);
    virtual void getSize(void* canvas);
    virtual void getChildPosition(void* child, void* canvas);
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
};

struct TopMenuBar : GuiItem {
    char pad0[0xc0 - 4];
    void* m_items;
    char pad1[0xfc - 0xc0 - 4];
    float m_color[4];
    void process(void* event);
};

extern "C" void* __cdecl sub_736ED0();
extern "C" unsigned int __cdecl sub_487C10();
extern "C" void __cdecl sub_555C00();
extern "C" void* __cdecl sub_630D36(void*, int, void*, void*, int);
extern "C" void __cdecl sub_77E6D8();

void TopMenuBar::process(void* event)
{
    if (!isVisible())
        return;

    void* p = sub_736ED0();
    float* src = (float*)p;
    float* dst = m_color;

    if (src[0] != dst[0] || src[1] != dst[1] || src[2] != dst[2] || src[3] != dst[3]) {
        void* vtable = *(void**)event;
        void* tmp;
        sub_555C00();
        void* fn = *(void**)((char*)vtable + 0x28);
        ((void (__thiscall*)(void*, void*))fn)(event, &tmp);
    }

    unsigned int count = sub_487C10();
    unsigned int i = 0;
    while (i < count) {
        void* items = m_items;
        void* begin = *(void**)((char*)items + 4);
        void* end = *(void**)((char*)items + 8);
        if (begin != 0 || i >= (unsigned int)(((char*)end - (char*)begin) >> 3))
            sub_77E6D8();
        void* item = *(void**)((char*)begin + i * 8);
        void* result = sub_630D36(item, 0, (void*)0x881F30, (void*)0x881F4C, 0);
        if (result) {
            void* vt = *(void**)result;
            void* fn = *(void**)((char*)vt + 0x64);
            ((void (__thiscall*)(void*, void*))fn)(result, event);
        }
        i++;
        count = sub_487C10();
    }
}
