// from server: 47% by colin
struct GuiItem {
    char pad0[0xc0];
    void* m_children_begin;
    void* m_children_end;
    char pad1[0x10c - 0xc8];
    int m_state;
};

struct TopMenuBar {
    char pad0[0xc0];
    void* m_children_begin;
    void* m_children_end;
    char pad1[0x10c - 0xc8];
    int m_state;
    int f(void* out);
};

extern "C" int __stdcall sub_487C10();
extern "C" void* __stdcall sub_630D36(void*, void*, void*, int, int);
extern "C" void __stdcall _invalid_parameter_noinfo();

int TopMenuBar::f(void* out)
{
    float* p = (float*)out;
    p[0] = 0.0f;
    p[1] = 0.0f;

    int count = sub_487C10();
    if (count <= 0)
        return (int)out;

    for (int i = 0; i < count; ++i) {
        void* vec = *(void**)((char*)this + 0xc0);
        void* begin = *(void**)((char*)vec + 4);
        void* end = *(void**)((char*)vec + 8);
        if (begin == 0 || (unsigned)(((char*)end - (char*)begin) >> 3) <= (unsigned)i)
            _invalid_parameter_noinfo();

        void* item = *(void**)((char*)begin + i * 8);
        void* result = sub_630D36(item, (void*)0x881f4c, (void*)0x881f30, 0, 0);
        if (result != 0) {
            void** vtbl = *(void***)result;
            void (*fn)(void*, void*) = (void (*)(void*, void*))vtbl[0x60 / 4];
            float tmp[2];
            fn(result, tmp);

            int st = *(int*)((char*)this + 0x10c);
            if (st == 0) {
                p[0] += tmp[0];
                if (tmp[1] > p[1])
                    p[1] = tmp[1];
            } else if (st == 1) {
                if (tmp[0] < p[0])
                    p[0] = tmp[0];
                p[1] += tmp[1];
            }
        }

        count = sub_487C10();
    }

    return (int)out;
}
