// from server: 30% by colin
struct CXTColorPageStandard {
    char pad0[0x20];
    void* hwnd;
    char pad1[0x30];
    void* field54;
    void* field58;
    char pad2[0x4];
    void Draw();
};

extern "C" void __stdcall sub_630490(void*);
extern "C" void __stdcall sub_668f70();
extern "C" void* __stdcall sub_668770(void*, int);
extern "C" void __stdcall sub_6692b0(void*, void*);
extern "C" void __stdcall sub_6d7100(void*, void*, void*);
extern "C" void __stdcall sub_6d7280(void*);
extern "C" void __stdcall sub_630238(void*, void*);
extern "C" void __stdcall sub_7383d0(void*, void*);
extern "C" void __stdcall sub_7384a2(void*, void*, void*);
extern "C" void __stdcall sub_7383e8(void*, int);
extern "C" void* __stdcall sub_6301c0(void*);
extern "C" void __stdcall sub_6308b0(void*, void*);
extern "C" void __stdcall sub_70b080(void*, void*);
extern "C" void __stdcall sub_41f680(void*);
extern "C" void __stdcall sub_709e40(void*, void*);
extern "C" void __stdcall sub_63048a(void*);
extern "C" void __stdcall sub_630a1e();

extern "C" void* __stdcall GetParent(void*);
extern "C" int __stdcall GetClientRect(void*, void*);
extern "C" void* __stdcall CreateCompatibleDC(void*);
extern "C" void* __stdcall CreateCompatibleBitmap(void*, int, int);
extern "C" int __stdcall BitBlt(void*, int, int, int, int, void*, int, int, unsigned long);
extern "C" int __stdcall FillRect(void*, void*, void*);
extern "C" long __stdcall SendMessageA(void*, unsigned int, unsigned long, long);

void CXTColorPageStandard::Draw()
{
    char buf[0x60];
    char rect[0x10];
    char bmp[0x10];
    void* hdc;
    void* memdc;
    void* hbmp;
    void* oldbmp;
    int w, h;

    sub_630490(buf);
    SendMessageA(hwnd, 0x0007, 0, (long)rect);
    void* dc = CreateCompatibleDC(0);
    sub_668770(dc, 0xf);
    sub_6692b0(dc, 0);
    sub_6d7100(rect, buf, 0);
    if (field54 != 0 || *(void**)((char*)field54 + 4) == 0) {
        sub_630238(0, 0);
        sub_7383d0(field54, 0);
        sub_7384a2(field58, 0, 0);
        sub_7383e8(field54, 1);
        void* parent = GetParent(hwnd);
        void* p = sub_6301c0(parent);
        hbmp = CreateCompatibleBitmap(*(void**)((char*)p + 0x20), 0x138, 0);
        if (hbmp) {
            if (field54 == 0) {
                sub_6308b0(0, 0);
            } else {
                sub_6308b0(field54, 0);
            }
        } else {
            sub_668770(0, 0xf);
            sub_6308b0(field54, 0);
        }
        sub_70b080(this, field54);
        sub_41f680(0);
    }
    w = *(int*)(rect + 8) - *(int*)(rect + 0);
    h = *(int*)(rect + 12) - *(int*)(rect + 4);
    if (field54) {
        hbmp = *(void**)((char*)field54 + 4);
    }
    BitBlt(0, 0, 0, w, h, hbmp, 0, 0, 0xcc0020);
    sub_709e40(this, rect);
    sub_6d7280(rect);
    sub_63048a(buf);
}
