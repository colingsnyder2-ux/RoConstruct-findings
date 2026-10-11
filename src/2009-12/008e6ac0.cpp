// from server: 43% by atomic.potato
struct CXTCaptionPopupWnd
{
    char pad0[0x80];
    void* field80;
    void method();
};

extern "C" void __stdcall sub_7f41f0(void*);
extern "C" void __stdcall sub_84b2d0(void*);
extern "C" void __stdcall sub_7f45f8(void*, void*, void*);
extern "C" void __stdcall sub_7f41ea(void*);
extern "C" void* __stdcall sub_82f9d0();
extern "C" void* __stdcall sub_82f100(void*, int);
extern "C" void __stdcall sub_7f539a();

extern "C" void* __stdcall InflateRect(void*, int, int);
extern "C" void* __stdcall InvalidateRect(void*, void*, int);

void CXTCaptionPopupWnd::method()
{
    char buf1[0x10];
    char buf2[0x10];
    char buf3[0x10];
    void* p1;
    void* p2;
    void* p3;

    sub_7f41f0(buf1);
    sub_84b2d0(buf2);
    InflateRect(buf3, -1, -1);
    p1 = sub_82f9d0();
    p2 = sub_82f100(p1, 0x14);
    p3 = sub_82f9d0();
    p3 = sub_82f100(p3, 0x10);
    sub_7f45f8(buf3, p3, p2);
    InvalidateRect(this->field80, 0, 1);
    sub_7f41ea(buf1);
}
