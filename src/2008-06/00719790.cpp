// from server: 21% by colin
struct CSelectionCaption {
    char pad0[0xc];
    int field_c;
    char pad10[0x10];
    int field_20;
    char pad24[0x48];
    int field_6c;
    char pad70[0x5c];
    int field_cc;
    char field_d0[0x10];
    int getRect(int* out);
};

struct GMutex {
    GMutex();
    char data[4];
};

struct CSize {
    int cx;
    int cy;
};

struct CRect {
    int left;
    int top;
    int right;
    int bottom;
};

extern "C" {
    int __stdcall GetTextExtentPoint32A(void* hdc, const char* str, int len, CSize* size);
    int __stdcall GetTextMetricsA(void* hdc, void* tm);
    int __stdcall SendMessageA(void* hwnd, unsigned int msg, unsigned int wparam, long lparam);
}

extern void* g_802fd8;
extern void* g_802fe0;
extern void* g_803ee0;
extern void* g_802070;
extern void* g_802140;
extern void* g_802e14;

extern int __cdecl sub_6a10ca(int);
extern int __cdecl sub_6f7a90(int);
extern int __cdecl sub_6f7b30(int, int);
extern int __cdecl sub_6f7ec0(int, int);
extern int __cdecl sub_6f7f40(int);
extern int __cdecl sub_7bc016(int);
extern int __cdecl sub_7bc01c(int, int);

int CSelectionCaption::getRect(int* out)
{
    GMutex m;
    char buf[0x40];
    CSize sz;
    CRect rc;
    int w;
    int h;
    int x;
    int y;
    int extra;
    int avail;
    int total;
    int left;
    int top;

    if (*(int*)((char*)&g_802fd8) != 0) {
        // placeholder
    }

    if (this->field_d0[0] != 0) {
        sub_6f7a90((int)&m);
        *(int*)out = *(int*)&m;
        *(int*)(out + 1) = *(int*)((char*)&m + 4);
        *(int*)(out + 2) = *(int*)((char*)&m + 8);
        *(int*)(out + 3) = *(int*)((char*)&m + 0xc);
        return (int)out;
    }

    sub_6f7b30((int)this, (int)&m);
    sub_7bc01c((int)&buf, 0);

    w = SendMessageA((void*)this->field_20, 0x31, 0, 0);
    w = sub_6a10ca(w);
    sub_6f7ec0((int)&buf, w);

    GetTextExtentPoint32A((void*)this->field_20, buf, *(int*)((char*)&buf + 4), &sz);

    h = ((int (__stdcall*)(void*))g_802fe0)(this->field_d0);
    x = ((int (__stdcall*)(void*))g_803ee0)(this->field_d0);
    GetTextMetricsA((void*)this->field_20, &rc);

    extra = this->field_cc;
    extra = -extra;
    extra = (extra >> 31) & 0x12;

    avail = *(int*)((char*)&buf + 0x10) - extra - *(int*)((char*)&buf + 0xc);
    total = sz.cx + *(int*)((char*)&buf + 0x24) + 0xc;
    if (total > avail) {
        total = avail;
    }

    left = this->field_6c;
    out[0] = left;
    out[1] = left;
    out[2] = left + total;
    out[3] = *(int*)((char*)&buf + 0x10) - left;

    sub_6f7f40((int)&rc);
    sub_7bc016((int)&buf);

    return (int)out;
}
