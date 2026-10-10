// from server: 28% by colin
struct S_func_0069ff90 {
    char pad0[0x20];
    unsigned m_hwnd;
    char pad1[0x48];
    int m_x;
    char pad2[0x5c];
    int m_y;
    char pad3[0x4];
    int m_w;
    char pad4[0x4];
    int m_h;
    char pad5[0x4];
    int m_flag;
    char pad6[0x4];
    int m_sel;
    char pad7[0x4];
    void* m_pdc;
    int f(int* out);
};

struct T1 { char pad[0x10]; };
struct T2 { char pad[0x10]; };

extern "C" {
int __stdcall GetTextExtentPoint32A(void*, const char*, int, int*);
int __stdcall GetTextMetricsA(void*, void*);
int __stdcall SendMessageA(void*, unsigned, unsigned, long);
}

extern "C" int __stdcall sub_77dcd0(void*);
extern "C" int __stdcall sub_77dcc8(void*);
extern "C" int __stdcall sub_77dd98(void*);
extern "C" int __stdcall sub_77d0f0(void*, void*);
extern "C" int __stdcall sub_77d0b8(void*, void*, void*, void*);
extern "C" int __stdcall sub_77ecd8(unsigned, unsigned, unsigned, unsigned);

extern "C" void sub_67ff60(void*);
extern "C" void sub_680000(void*, void*);
extern "C" void sub_680550(void*, void*, void*);
extern "C" void sub_6805d0(void*);
extern "C" void sub_7383ac(void*, int);
extern "C" void sub_7383a6(void*);
extern "C" void* sub_63062e(void*);

int S_func_0069ff90::f(int* out)
{
    if (sub_77dcd0(&m_pdc)) {
        T1 t;
        sub_67ff60(&t);
        out[0] = ((int*)&t)[0];
        out[1] = ((int*)&t)[1];
        out[2] = ((int*)&t)[2];
        out[3] = ((int*)&t)[3];
        return (int)out;
    }

    T2 a;
    sub_680000(&a, this);
    T2 b;
    sub_7383ac(&b, 0);

    unsigned r = sub_77ecd8(m_hwnd, 0x31, 0, 0);
    void* p = sub_63062e((void*)r);
    T2 c;
    sub_680550(&c, &b, p);

    int sz[2];
    sub_77d0f0(&c, sz);

    int w = sub_77dcc8(&m_pdc);
    int h = sub_77dd98(&m_pdc);
    int ext[2];
    sub_77d0b8(&m_pdc, (void*)h, (void*)w, ext);

    int tw = ext[0] + sz[0] + 0xc;
    int flag = m_flag;
    int sub = (flag != 0) ? 0x12 : 0;
    int avail = m_w - sub - m_x;
    if (tw > avail) tw = avail;

    int base = m_sel;
    out[0] = base;
    out[1] = base;
    out[2] = base + tw;
    out[3] = m_h - m_y - base;

    sub_6805d0(&c);
    sub_7383a6(&b);
    return (int)out;
}
