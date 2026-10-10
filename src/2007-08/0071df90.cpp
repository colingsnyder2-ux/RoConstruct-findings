// from server: 50% by colin
// roc 2007-08 0071df90  unit: CXTPDialogBar::CCaptionPopupBar  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071df90

extern "C" {
    void __stdcall sub_630946(void* dst, void* src);
    void __stdcall sub_630940(void* p);
    void* __stdcall sub_643a40(void* p);
    void __stdcall sub_680550(void* dst, void* a, void* b);
    void __stdcall sub_6805d0(void* p);
}

struct CXTPDialogBar_CCaptionPopupBar {
    int GetRect(int* out);
};

int CXTPDialogBar_CCaptionPopupBar::GetRect(int* out) {
    int local1;
    int local2;
    int local3;
    int local4;
    int local5;
    int local6;
    int local7;
    int local8;
    int local9;
    int local10;
    int local11;
    int local12;

    out[0] = *(int*)((char*)this + 0x1a8);
    out[1] = *(int*)((char*)this + 0x1ac);
    out[2] = *(int*)((char*)this + 0x1b0);
    out[3] = *(int*)((char*)this + 0x1b4);

    sub_630946(&local1, this);

    void* p1 = sub_643a40(this);
    void* vtable1 = *(void**)p1;
    int (*fn1)(void*, int, void*) = *(int(**)(void*, int, void*))((char*)vtable1 + 0xd8);
    void* r1 = (void*)fn1(p1, 0, this);

    sub_680550(&local2, &local1, r1);

    void* p2 = sub_643a40(this);
    void* vtable2 = *(void**)p2;
    int (*fn2)(void*, void*, void*, int, void*) = *(int(**)(void*, void*, void*, int, void*))((char*)vtable2 + 0x88);
    fn2(p2, &local3, &local2, 0, this);

    out[1] += local3;

    sub_6805d0(&local2);
    sub_630940(&local1);

    return (int)out;
}
