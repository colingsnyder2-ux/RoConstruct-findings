// from server: 55% by tester
struct GuiItem {
    char pad0[0x108];
    void* m_items;
};

struct UnifiedWidget {
    char pad0[0x108];
    void* m_items;

    int getItemCount();
    void getChildPosition(float* out, void* child);
    void process(void* event);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

extern "C" void* __cdecl sub_6a17c6(void*, void*, void*, int, int);

int UnifiedWidget::getItemCount()
{
    void* p = m_items;
    if (p) {
        return ((int*)p)[4] - ((int*)p)[3];
    }
    return 0;
}

void UnifiedWidget::process(void* event)
{
    float* pos = (float*)event;
    void* vtable = *(void**)this;
    void (__thiscall *fn)(void*, void*) = *(void (__thiscall **)(void*, void*))((char*)vtable + 0x68);
    fn(this, pos);

    int count = getItemCount();
    int i = 0;
    while (i < count) {
        void* items = m_items;
        int* begin = (int*)((char*)items + 0xc);
        int* end = (int*)((char*)items + 0x10);
        int n = (int)((char*)end - (char*)begin) >> 3;
        if (i >= n) {
            _invalid_parameter_noinfo();
        }
        void* item = *(void**)((char*)begin + i * 8);
        void* r = sub_6a17c6(item, (void*)0x92907c, (void*)0x92b8d8, 0, 0);
        if (r != 0) {
            if (r == *(void**)((char*)event + 8)) {
                break;
            }
            void* vt2 = *(void**)this;
            void (__thiscall *fn2)(void*, float*) = *(void (__thiscall **)(void*, float*))((char*)vt2 + 0x6c);
            float tmp[2];
            fn2(this, tmp);
            pos[0] += tmp[0];
            pos[1] += tmp[1];
        }
        i++;
        count = getItemCount();
    }
}
