// from server: 40% by colin
extern "C" {
    int __stdcall InvalidateRect(void*, const void*, int);
    int __stdcall sub_77ED90(void*, int, int, void*);
    void* __cdecl sub_668F70();
    void* __cdecl sub_668770(void*, int);
    void __cdecl sub_630490(void*, void*);
    void __cdecl sub_680000(void*, void*);
    void __cdecl sub_6308AA(void*, void*, void*, void*);
    void __cdecl sub_63048A(void*);
}

struct CXTCaptionPopupWnd {
    char pad[0x80];
    void* hwnd;
    void sub_715FB0();
};

void CXTCaptionPopupWnd::sub_715FB0() {
    char buf1[0x10];
    char buf2[0x10];
    char buf3[0x10];
    void* p1;
    void* p2;
    void* p3;

    sub_630490(buf1, this);
    sub_680000(buf2, this);
    sub_77ED90(&p1, -1, -1, buf2);
    p2 = sub_668F70();
    p3 = sub_668770(p2, 0x14);
    p2 = sub_668F70();
    p2 = sub_668770(p2, 0x10);
    sub_6308AA(buf3, &p1, p2, p3);
    InvalidateRect(this->hwnd, 0, 1);
    sub_63048A(buf3);
}
