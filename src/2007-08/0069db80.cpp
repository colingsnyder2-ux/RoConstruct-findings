// from server: 85% by colin
// roc 2007-08 0069db80  size: 101 bytes
// library xtp-11.2.2-vc8/Source\Controls\XTColorPopup.cpp

extern "C" void* __stdcall GetCapture();
extern "C" void* __stdcall SetCapture(void*);

extern "C" void* __stdcall sub_6301c0(void*);

struct CXTPPropertyGridItemColorColorPopup {
    void* field_0;
    void* field_4;
    void* field_8;
    void* field_c;
    void* field_10;
    void* field_14;
    void* field_18;
    void* field_1c;
    void* field_20;

    char sub_710fd0();
    void sub_7114c0(void*);
    void OnInplaceButtonDown(void*);
};

void CXTPPropertyGridItemColorColorPopup::OnInplaceButtonDown(void* param) {
    void* cap = GetCapture();
    void* obj = sub_6301c0(cap);
    if (obj != 0) {
        obj = *(void**)((char*)obj + 0x20);
    }
    if (obj != this->field_20) {
        if (!this->sub_710fd0()) {
            void* cap2 = SetCapture(this->field_20);
            sub_6301c0(cap2);
        }
    }
    if (*(int*)((char*)param + 4) == 0x100) {
        if (*(int*)((char*)param + 8) == 0x1b) {
            void** vtbl = *(void***)this;
            void (*fn)(void*, int) = (void (*)(void*, int))vtbl[0x13c / 4];
            fn(this, -1);
        }
    }
    this->sub_7114c0(param);
}
