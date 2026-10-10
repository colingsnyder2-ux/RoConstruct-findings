// from server: 42% by colin
// roc-repair: genuine WinNT.h definitions (no SDK shipped)
struct HDC__; typedef struct HDC__ *HDC;
struct CXTPDialogBar_CControlCaptionPopup {
    void Draw(HDC hdc);
};

extern "C" {
    void* __cdecl sub_63A000();
    void __cdecl sub_668F70();
    void __cdecl sub_668770(int);
    void __cdecl sub_680550(void*, void*, void*);
    void __cdecl sub_6805D0(void*);
    void __cdecl sub_681070(void*, int, int, int, int, int, int, int);
    void* __stdcall sub_77DCC8(int, void*);
    void* __stdcall sub_77DD98(void*, void*);
    void __stdcall sub_77DDBC(void*);
    int __stdcall sub_77D144(void*);
}

void CXTPDialogBar_CControlCaptionPopup::Draw(HDC hdc)
{
    void* p = sub_63A000();
    void* p2 = (char*)p + 0x94;
    char buf[0x20];
    sub_680550(buf, hdc, p2);

    int v178 = *(int*)((char*)this + 0x178);
    int c0 = *(int*)((char*)this + 0xc0);
    int c4 = *(int*)((char*)this + 0xc4);
    int c8 = *(int*)((char*)this + 0xc8);
    int cc = *(int*)((char*)this + 0xcc);

    if (v178 != 0) {
        void* vt = *(void**)p;
        void (*f78)(void*, HDC) = *(void (**)(void*, HDC))((char*)vt + 0x78);
        f78(p, hdc);
        if (*(int*)((char*)this + 0x178) != 0) {
            void* vt2 = *(void**)p;
            void (*f7c)(void*, void*) = *(void (**)(void*, void*))((char*)vt2 + 0x7c);
            f7c(p, this);
        }
    } else {
        sub_668F70();
        sub_668770(0x12);
    }

    void* vt3 = *(void**)hdc;
    void (*f38)(void*, void*) = *(void (**)(void*, void*))((char*)vt3 + 0x38);
    f38(hdc, 0);

    int v178b = *(int*)((char*)this + 0x178);
    int eax = -v178b;
    eax = (eax >> 31) & 0xd;
    eax += 2;
    int x = c8 - eax;

    void* vt4 = *(void**)this;
    void (*f58)(void*, void*) = *(void (**)(void*, void*))((char*)vt4 + 0x58);
    int rect[4];
    rect[0] = c0;
    rect[1] = c4;
    rect[2] = x;
    rect[3] = cc;
    f58(this, rect);

    void* vt5 = *(void**)hdc;
    void* h = sub_77DCC8(0x24, rect);
    void* h2 = sub_77DD98(h, 0);
    void (*f70)(void*, void*) = *(void (**)(void*, void*))((char*)vt5 + 0x70);
    f70(hdc, h2);

    sub_77DDBC(rect);

    int color = sub_77D144(*(void**)((char*)hdc + 8));

    if (*(int*)((char*)this + 0x178) != 0) {
        int mid = (cc - c4) / 2 + c4;
        int x1 = x - 9;
        int x2 = mid + 2;
        int x3 = mid - 2;
        int x4 = x1 + 4;
        int x5 = x1 - 4;
        sub_681070(hdc, x5, x3, x4, x2, x1, color, 0);
    }

    sub_6805D0(rect);
}
