// from server: 58% by colin
struct CXTPRibbonBarCControlCaptionButton {
    void OnClick(int);
};

extern "C" void __fastcall sub_6a79e0(void*);

void CXTPRibbonBarCControlCaptionButton::OnClick(int arg) {
    int flag;
    if (*(int*)((char*)this + 0x9c) != 0) {
        int* p = *(int**)((char*)this + 0x168);
        flag = (p[6] != 0) ? 1 : 0;
    } else {
        flag = 0;
    }

    void* ecx = *(void**)((char*)this + 0xfc);
    sub_6a79e0(ecx);
    int* ebx = (int*)0;

    int v14 = *(int*)((char*)this + 0xc0);
    int v18 = *(int*)((char*)this + 0xc4);
    int ebp = *(int*)((char*)this + 0x84);
    int v1c = *(int*)((char*)this + 0xc8);
    int v20 = *(int*)((char*)this + 0xcc);

    int* vt = *(int**)this;
    int (*fn78)(void*, int) = (int (*)(void*, int))vt[0x78/4];
    int r1 = fn78(this, flag);

    vt = *(int**)this;
    int (*fn6c)(void*) = (int (*)(void*))vt[0x6c/4];
    int r2 = fn6c(this);

    int* obj = (int*)((char*)ebx + 0x128);
    int (*fn)(void*, int, int, int, int, int, int, int) = (int (*)(void*, int, int, int, int, int, int, int))obj[0];
    fn(ebx, r2, ebp, v14, v18, v1c, v20, r1);
}
