// from server: 65% by colin
struct CRobloxView {
    char pad[0x198];
    void* field_198;
    void setVisible(bool);
};

extern "C" void* __stdcall sub_004666D0();
extern "C" void* __stdcall sub_0063052C(void*);
extern "C" void __stdcall sub_004562E0(CRobloxView*);
extern "C" void* __stdcall SendMessageA(void*, unsigned int, unsigned int, int);

void CRobloxView::setVisible(bool visible)
{
    if ((this->field_198 != 0) == visible)
        return;

    if (!visible) {
        void** vt = *(void***)this->field_198;
        ((void (__stdcall*)(void*))vt[0x68/4])(this->field_198);
        this->field_198 = 0;
        sub_004562E0(this);
        return;
    }

    void* p = sub_004666D0();
    void* q = sub_0063052C(p);
    this->field_198 = q;

    void* r = *(void**)((char*)this + 0x54);
    void* s = *(void**)((char*)r + 0x78);
    if (*(void**)((char*)q + 0xf8) != s) {
        if (s != 0) {
            void** vt = *(void***)s;
            ((void (__stdcall*)(void*))vt[4/4])(s);
        }
        void* t = *(void**)((char*)q + 0xf8);
        if (t != 0) {
            void** vt = *(void***)t;
            ((void (__stdcall*)(void*))vt[8/4])(t);
        }
        *(void**)((char*)q + 0xf8) = s;
    }

    void* u = this->field_198;
    *(void**)((char*)u + 0xf4) = (char*)this + 0x88;

    void* v = this->field_198;
    int local[4];
    local[0] = 0;
    local[1] = 0;
    local[2] = 0;
    local[3] = 0;
    void** vt = *(void***)v;
    int result = ((int (__stdcall*)(void*, unsigned int, unsigned int, int*, unsigned int, unsigned int, unsigned int))vt[0x5c/4])(v, 0x50000000, (unsigned int)this, local, 0x413, 0, 0);

    if (result == 0) {
        this->field_198 = 0;
        return;
    }

    if (*(unsigned char*)&local[0] != 0) {
        void* w = this->field_198;
        void* hwnd = *(void**)((char*)w + 0x20);
        SendMessageA(hwnd, 0x364, (unsigned int)hwnd, 0);
        sub_004562E0(this);
    }
}
