// from server: 59% by colin
// roc 2007-08 00514ba0  unit: G3D::_internal::DialogTemplate  size: 311 bytes

extern "C" void* __stdcall sub_51ED00(void* a, unsigned int b);
extern "C" void __stdcall sub_51E990(void* a, const char* b);
extern "C" void __stdcall sub_51ECD0(void* a, void* b);
extern "C" void* __stdcall sub_630D4C(void* dst, const void* src, unsigned int n);
extern "C" void* __stdcall sub_77E978(void* dst, const void* src, unsigned int n);

struct DialogTemplate {
    char pad_0000[0x68];
    char field_0068;
    char pad_0069[0xB8 - 0x69];
    unsigned int field_00B8;
    void* field_00BC;
    unsigned int field_00C0;
    void sub_514BA0(void* a, DialogTemplate* b, int c, int d);
};

void DialogTemplate::sub_514BA0(void* a, DialogTemplate* b, int c, int d)
{
    if (a != 0)
        return;
    if (b == 0)
        return;
    if (c == 0)
        return;

    unsigned int total = (b->field_00C0 + c) * 20;
    void* mem = sub_51ED00(a, total);
    if (mem == 0) {
        sub_51E990(a, "Out of memory processing unknown chunk.");
        return;
    }

    sub_630D4C(mem, b->field_00BC, b->field_00C0 * 20);
    sub_51ECD0(a, b->field_00BC);

    b->field_00BC = 0;

    int i = 0;
    if (c > 0) {
        char* src = (char*)c + 0xC;
        do {
            unsigned int idx = b->field_00C0 + i;
            char* dst = (char*)mem + idx * 20;
            sub_77E978(dst, src - 0xC, 5);
            void* p = sub_51ED00(a, *(int*)src);
            *(void**)(dst + 8) = p;
            if (p == 0) {
                sub_51E990(a, "Out of memory while processing unknown chunk.");
            } else {
                sub_630D4C(p, *(void**)(src - 4), *(int*)src);
                *(int*)(dst + 0xC) = *(int*)src;
                *(char*)(dst + 0x10) = *(char*)((char*)a + 0x68);
            }
            i++;
            src += 0x14;
        } while (i < c);
    }

    b->field_00C0 += c;
    b->field_00B8 |= 0x200;
    b->field_00BC = mem;
}
