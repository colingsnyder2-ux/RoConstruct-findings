// from server: 33% by colin
extern "C" {
    int __stdcall GetDeviceCaps(void*, int);
    int __stdcall MulDiv(int, int, int);
}

struct CControlButtonHide {
    void Hide(void*);
};

struct CControlButton {
    void* vtable;
    void* field4;
    void* field8;
};

struct CControlButtonHideImpl {
    char pad[0xc0];
};

struct CXTPDialogBar {
    void* vtable;
    char pad[0xbc];
    CControlButtonHideImpl hideButton;
};

struct CControlButtonHideVtbl {
    void* pad[0x1e];
    void (__thiscall* fn78)(void*, void*, void*);
    void* (__thiscall* fn7c)(void*, void*);
};

struct CControlButtonVtbl {
    void* pad[0xc];
    void (__thiscall* fn30)(void*, void*);
    void (__thiscall* fn38)(void*, void*);
    void (__thiscall* fn70)(void*, int, void*, int, void*);
};

void __stdcall sub_7383d6(void*, int, int, int, int, int);
void __stdcall sub_7383e8(void*, int);
void* __stdcall sub_63a000(void*);
void __stdcall sub_41f680(void*);

void CControlButtonHide::Hide(void* param)
{
    CControlButton* btn = (CControlButton*)param;
    int hdc = GetDeviceCaps(btn->field8, 0x58);
    int cx = MulDiv(0x50, hdc, 0x60);
    int cy = MulDiv(0x50, hdc, 0x60);
    (void)cx;
    (void)cy;
    sub_7383d6((void*)0x7c66b8, 0, 0x60, 0x50, 0, 0);
    CControlButtonVtbl* vt = *(CControlButtonVtbl**)btn;
    vt->fn30(btn, (void*)0x794a08);
    void* p = sub_63a000((void*)0x794a08);
    CControlButtonHideVtbl* vt2 = *(CControlButtonHideVtbl**)p;
    vt2->fn78(p, btn, (void*)0x794a08);
    void* p2 = sub_63a000((void*)0x794a08);
    CControlButtonHideVtbl* vt3 = *(CControlButtonHideVtbl**)p2;
    void* r = vt3->fn7c(p2, (void*)0x794a08);
    CControlButtonVtbl* bvt = *(CControlButtonVtbl**)btn;
    bvt->fn38(btn, r);
    sub_7383e8(btn, 1);
    CControlButtonVtbl* bvt2 = *(CControlButtonVtbl**)btn;
    bvt2->fn70(btn, 0x25, (void*)0x79f4f4, 1, (void*)0x794a08);
    CControlButtonVtbl* bvt3 = *(CControlButtonVtbl**)btn;
    bvt3->fn30(btn, (void*)0x794a08);
    sub_41f680((void*)0x794a08);
}
