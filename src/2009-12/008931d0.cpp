// from server: 54% by atomic.potato
struct CControlMDIButton {
    char pad0[0xc0];
    char field_c0[0x30];
    char field_f0[0x10];

    void sub_8931d0(void* arg);
};

extern "C" void* __stdcall sub_98b164();
extern "C" void* __stdcall sub_98b2a0();
extern "C" void* __stdcall sub_98ddb4();
extern "C" void* __stdcall sub_98de80();
extern "C" void __stdcall sub_40f230();
extern "C" void __stdcall sub_9264a2();

struct CComPtrBase {
    void* p;
    CComPtrBase();
    ~CComPtrBase();
};

struct CHTMLToolTip {
    void* GetInterface();
};

void CControlMDIButton::sub_8931d0(void* arg) {
    CComPtrBase sp;
    sp.p = 0;
    void* p = sub_98b164();
    void* q = sub_98b2a0();
    sub_9264a2();
    void* r = ((void* (__thiscall*)(void*, void*))((*(void***)arg)[0x30/4]))(arg, &sp);
    void* s = ((CHTMLToolTip*)this)->GetInterface();
    ((void (__thiscall*)(void*, void*, void*))((*(void***)s)[0x78/4]))(s, this, arg);
    void* t = ((CHTMLToolTip*)this)->GetInterface();
    void* u = ((void* (__thiscall*)(void*, void*))((*(void***)t)[0x7c/4]))(t, this);
    ((void (__thiscall*)(void*, void*))((*(void***)arg)[0x38/4]))(arg, u);
    void* v = sub_98ddb4();
    void* w = sub_98de80();
    ((void (__thiscall*)(void*, void*))((*(void***)arg)[0x70/4]))(arg, w);
    ((void (__thiscall*)(void*, void*))((*(void***)arg)[0x30/4]))(arg, r);
    sub_40f230();
}
