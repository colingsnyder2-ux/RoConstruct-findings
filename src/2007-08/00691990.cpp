// from server: 32% by colin
struct CXTThemeManagerStyle {
    char pad0[0xc];
    void* m_unkC;
    void* m_unk10;
    bool Render(void* p);
};

struct Helper {
    void sub_63022C();
    void sub_630238(void*);
    void sub_6309F4(void*);
    void sub_67F2D0();
    void sub_67FFA0(void*);
    void sub_6804E0(void*, void*);
    void sub_7383D0(void*);
    void sub_7383DC();
    void sub_7383E2();
};

extern "C" {
    void* __stdcall GetDC(void*);
    int __stdcall ReleaseDC(void*, void*);
    int __stdcall IsWindow(void*);
    void* __stdcall GetParent(void*);
    void* __stdcall CreateCompatibleDC(void*);
    void* __stdcall CreateCompatibleBitmap(void*, int, int);
    int __stdcall BitBlt(void*, int, int, int, int, void*, int, int, unsigned long);
}

void* __stdcall sub_6301C0(void*);
void* __stdcall sub_7383BE(void*);

bool CXTThemeManagerStyle::Render(void* p)
{
    void* hdc = GetDC(*(void**)((char*)p + 0x20));
    void* src = sub_6301C0(hdc);
    void* memdc = 0;
    if (src) {
        memdc = *(void**)((char*)src + 0x20);
    }
    if (!IsWindow(memdc)) {
        return false;
    }
    if (this->m_unkC) {
        if (this->m_unk10) {
            ((Helper*)&this->m_unkC)->sub_63022C();
        }
    }
    char local1[8];
    ((Helper*)local1)->sub_67FFA0(p);
    char local2[8];
    ((Helper*)src)->sub_6309F4(local2);
    void* bmp = sub_7383BE(*(void**)((char*)src + 0x20));
    ((Helper*)local2)->sub_7383E2();
    void* hbmp = 0;
    if (bmp) {
        hbmp = *(void**)((char*)bmp + 4);
    }
    void* hdc2 = CreateCompatibleDC(hbmp);
    void* hbmp2 = CreateCompatibleBitmap(hbmp, *(int*)(local2 + 8) - *(int*)(local2 + 0), *(int*)(local2 + 12) - *(int*)(local2 + 4));
    ((Helper*)local2)->sub_7383D0(hbmp2);
    ((Helper*)&this->m_unkC)->sub_630238(hbmp2);
    char local3[8];
    ((Helper*)local3)->sub_6804E0(local2, &this->m_unkC);
    int x = *(int*)(local3 + 0);
    int y = *(int*)(local3 + 4);
    int w = *(int*)(local3 + 8) - x;
    int h = *(int*)(local3 + 12) - y;
    BitBlt(hdc2, 0, 0, w, h, hbmp, x, y, 0xcc0020);
    ReleaseDC(*(void**)((char*)src + 0x20), hbmp);
    ((Helper*)local3)->sub_67F2D0();
    ((Helper*)local2)->sub_7383DC();
    return true;
}
