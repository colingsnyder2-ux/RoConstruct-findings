// from server: 79% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct Mat34 {
    float m[12];
};

struct Contact {
    char pad0[0x9c];
    Mat34* m_mat;
};

struct ContactList {
    char pad0[0xc];
    Contact** m_begin;
    Contact** m_end;
};

extern "C" float* __stdcall sub_00583920();
extern "C" void __stdcall sub_0057dee0(void*, void*);
extern "C" void* __stdcall sub_005e82c0();
extern "C" void __stdcall sub_0060fc20(void*, void*);

extern float g_819bac;
extern void (__stdcall *g_802890)();

struct BlockBlockContact {
    void* f(void* out, ContactList* list);
};

void* BlockBlockContact::f(void* out, ContactList* list)
{
    float* src = sub_00583920();
    float* dst = (float*)out;
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    dst[4] = src[4];
    dst[5] = src[5];

    unsigned int count = (unsigned int)((char*)list->m_end - (char*)list->m_begin) >> 2;
    unsigned int i = 0;
    if (count > 0) {
        do {
            float scale = g_819bac;
            if (i >= count) {
                g_802890();
                scale = g_819bac;
            }
            Contact* c = list->m_begin[i];
            Mat34* m = c->m_mat;
            float a = m->m[0] * scale;
            float b = m->m[1] * scale;
            float cc = m->m[2] * scale;
            float d = -a;
            float e = -b;
            float f2 = -cc;
            float tmp[6];
            tmp[0] = d;
            tmp[1] = e;
            tmp[2] = f2;
            tmp[3] = a;
            tmp[4] = b;
            tmp[5] = cc;
            void* p = sub_005e82c0();
            sub_0060fc20(tmp, p);
            sub_0057dee0(out, tmp);
            count = (unsigned int)((char*)list->m_end - (char*)list->m_begin) >> 2;
            i++;
        } while (i < count);
    }
    return out;
}
