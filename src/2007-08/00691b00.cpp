// from server: 50% by colin
struct CXTThemeManagerStyle {
    void* m_unk0;
    void* m_unk4;
    void* m_unk8;
    int sub_691B00(void* a, void* b);
};

extern "C" {
    int __stdcall GetWindowLongA(void* hWnd, int nIndex);
    void* __stdcall CreateCompatibleDC(void* hdc);
    int __stdcall BitBlt(void* hdcDest, int x, int y, int cx, int cy, void* hdcSrc, int x1, int y1, unsigned long rop);
}

void sub_680000(void* self, void* a);
void sub_6804E0(void* self, void* a, void* b);
void sub_7383E2(void* self);
void sub_7383D0(void* self, void* a);
void sub_7383DC(void* self);
void sub_67F2D0(void* self);

int CXTThemeManagerStyle::sub_691B00(void* a, void* b)
{
    void* p = a;
    int style;
    if (p != 0)
        style = 0;
    else
        style = *(int*)((char*)p + 0x20);

    if ((GetWindowLongA((void*)style, -0x14) & 0x20) == 0)
        return 0;

    if ((*(int (__thiscall **)(void*, void*))((char*)*(void**)this + 8))(this, p) == 0)
        return 0;

    char buf1[0x10];
    char buf2[0x10];
    sub_680000(buf1, p);
    sub_7383E2(buf2);

    void* q = b;
    int v2;
    if (q == 0)
        v2 = 0;
    else
        v2 = *(int*)((char*)q + 4);

    sub_7383D0(buf2, (void*)v2);
    sub_6804E0(buf1, buf2, (char*)this + 0xc);

    int cx = *(int*)(buf1 + 8) - *(int*)(buf1 + 0);
    int cy = *(int*)(buf1 + 0xc) - *(int*)(buf1 + 4);
    int x = *(int*)(buf2 + 0);

    BitBlt(*(void**)((char*)q + 4), 0, 0, cx, cy, (void*)x, 0, 0, 0xcc0020);

    sub_67F2D0(buf1);
    sub_7383DC(buf2);
    return 1;
}
