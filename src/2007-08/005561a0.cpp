// from server: 58% by colin
struct GuiItem {
    char pad0[0x4c];
    virtual void vf_4c(int);
    char pad1[0x60 - 0x50];
    virtual void vf_60(float*);
};

struct TopMenuBar : GuiItem {
    char pad2[0xc0 - 0x64];
    void* m_c0;
    char pad3[0x10c - 0xc4];
    int m_10c;
    float* f(float* out, GuiItem* target);
};

extern "C" int __stdcall sub_487c10();
extern "C" void* __stdcall sub_630d36(void*, int, int, int, int);
extern "C" void __stdcall sub_77e6d8();
extern float g_797e9c;

float* TopMenuBar::f(float* out, GuiItem* target)
{
    float local[2];
    int i = 0;
    vf_4c(0);
    vf_60(local);
    while ((unsigned)i < (unsigned)sub_487c10()) {
        void* vec = m_c0;
        void* begin = *(void**)((char*)vec + 4);
        void* end = *(void**)((char*)vec + 8);
        if (begin == 0 || (unsigned)i >= (unsigned)(((char*)end - (char*)begin) >> 3)) {
            sub_77e6d8();
        }
        void* p = sub_630d36(*(void**)((char*)begin + i * 8), 0, 0x881f30, 0x881f4c, 0);
        if (p) {
            GuiItem* gi = (GuiItem*)p;
            float tmp[2];
            gi->vf_60(tmp);
            if (gi == target) {
                int idx = m_10c + 1;
                idx &= 0x80000001;
                if (idx < 0) {
                    idx = (idx - 1) | 0xfffffffe;
                    idx++;
                }
                out[idx] += (local[idx] - tmp[idx]) * g_797e9c;
                return out;
            }
            if (m_10c <= 1) {
                float tmp2[2];
                gi->vf_60(tmp2);
                out[m_10c] += tmp2[m_10c];
            }
        }
        i++;
    }
    return out;
}
