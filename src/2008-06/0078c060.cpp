// from server: 32% by colin
struct CXTColorWnd {
    char pad[0x20];
    void* hwnd;
    void sub_78c060();
};

extern "C" {
    void __stdcall FillRect(void*, const void*, void*);
    int __stdcall GetClientRect(void*, void*);
    void* __stdcall GetParent(void*);
    int __stdcall SendMessageA(void*, unsigned int, unsigned int, long);
}

void __stdcall sub_6a0f44(void*, void*);
void __stdcall sub_6a0f3e(void*);
void __stdcall sub_6f7c60(void*, void*);
void __stdcall sub_6f7da0(void*);
void __stdcall sub_6a0bde(void*, void*);
void __stdcall sub_6a135e(void*, void*, void*);
void __stdcall sub_6dfd40(void*, void*);
void __stdcall sub_6df520(void*, int);
void __stdcall sub_6a1dd2(void*, void*);
void __stdcall sub_78ab20(void*, void*);
void __stdcall sub_78abc0(void*, void*);

void CXTColorWnd::sub_78c060()
{
    char buf[0x50];
    char rect[0x10];
    void* tmp;
    void* parent;
    int result;

    sub_6a0f44(this, buf);
    GetClientRect(this->hwnd, rect);
    sub_6f7c60(rect, buf + 0x40);
    parent = GetParent(this->hwnd);
    sub_6a0bde(parent, buf + 0x40);
    result = SendMessageA(*(void**)((char*)parent + 0x20), 0x138, *(unsigned int*)rect, 0);
    if (result != 0) {
        sub_6a135e(rect, &result, buf + 0x40);
    } else {
        sub_6dfd40(buf + 0x40, 0);
        sub_6df520(buf + 0x40, 0xf);
        sub_6a135e(rect, buf + 0x40, buf + 0x40);
    }
    sub_78ab20(this, buf + 0x40);
    sub_78abc0(this, buf + 0x40);
    sub_6f7da0(buf + 0x40);
    sub_6a0f3e(buf);
}
