// from server: 15% by colin
struct CXTCaptionButtonThemeOffice2003 {
    bool DrawCaptionButton(void* pDC, void* pRect, unsigned int uState, unsigned int uFlags);
};

extern "C" {
    void* __stdcall IsWindow(void*);
    void* __stdcall CreateCompatibleDC(void*);
    void* __stdcall CreateCompatibleBitmap(void*, int, int);
    unsigned int __stdcall GetPixel(void*, int, int);
}

void* __stdcall sub_680000(void*);
void* __stdcall sub_6309F4(void*, void*);
void* __stdcall sub_630946(void*, void*);
void* __stdcall sub_7383E2(void*);
void* __stdcall sub_7383D0(void*, void*);
void* __stdcall sub_630238(void*, void*);
void* __stdcall sub_7384A2(void*, void*);
void* __stdcall sub_668F70();
void* __stdcall sub_682240(void*, void*, void*, void*, void*);
void* __stdcall sub_682560(void*, void*);
void* __stdcall sub_6684F0(void*, void*, void*, float);
void* __stdcall sub_7388E6(void*);
void* __stdcall sub_63022C(void*);
void* __stdcall sub_41F680(void*);
void* __stdcall sub_7383DC(void*);
void* __stdcall sub_630940(void*);

bool CXTCaptionButtonThemeOffice2003::DrawCaptionButton(void* pDC, void* pRect, unsigned int uState, unsigned int uFlags)
{
    if (IsWindow(*(void**)((char*)this + 0x20)) == 0)
        return false;

    char buf1[0x18];
    char buf2[0x18];
    char buf3[0x18];

    sub_680000(buf1);
    sub_6309F4(this, pDC);
    sub_630946(buf2, this);

    sub_7383E2(buf3);

    void* hdc = CreateCompatibleDC(*(void**)buf2);
    if (sub_7383D0(buf3, hdc) == 0)
    {
        sub_7383DC(buf3);
        sub_630940(buf2);
        return false;
    }

    void* p1 = 0;
    void* p2 = (void*)0x788300;

    int w = *(int*)(buf1 + 8) - *(int*)(buf1 + 0);
    int h = *(int*)(buf1 + 4) - *(int*)(buf1 + 0x0c);

    void* hbm = CreateCompatibleBitmap(*(void**)buf2, w, h);
    sub_630238(&p2, hbm);

    void* p3 = sub_7384A2(p1, *(void**)(buf3 + 4));

    void* p4;
    if (*(char*)((char*)this + 0x81) != 0)
        p4 = (char*)sub_668F70() + 0x20;
    else
        p4 = (char*)sub_668F70() + 0x80;

    void* p5 = sub_682240(p4, 0, 0, buf2, buf1);
    sub_682560(p5, p3);

    unsigned int p6 = GetPixel(*(void**)pDC, *(int*)pRect, *(int*)((char*)pRect + 4));
    unsigned int p7 = GetPixel(*(void**)pDC, *(int*)((char*)pRect + 8), *(int*)((char*)pRect + 0xc));

    sub_6684F0((void*)p6, (void*)p7, p3, *(float*)0x797E9C);

    if (p3 != 0)
        p3 = *(void**)((char*)p3 + 4);

    sub_7384A2(p1, p3);
    sub_7388E6(buf3);
    sub_63022C(&p2);
    sub_41F680(&p2);
    sub_7383DC(buf3);
    sub_630940(buf2);

    return true;
}
