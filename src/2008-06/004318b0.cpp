// from server: 31% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
    void release();
};

struct CDataModelPropGrid {
    void ChangeResolution();
    char padding[0xf8];
    unsigned char field_0xf8;
    unsigned char field_0xf9;
    unsigned char field_0xfa;
    char pad2;
    void* field_0xfc;
};

extern "C" int (__thiscall *GetMonitorInfoA)(void*, void*);
extern "C" long __stdcall ChangeDisplaySettingsExA(void*, void*, void*, unsigned long, void*);
extern "C" int __stdcall GetSystemMetrics(int);

struct CString {
    void* data;
};

struct CStringHolder {
    CString str;
};

extern "C" void* __cdecl sub_569620(void*);
extern "C" void __cdecl sub_5693a0(void*, int, void*);
extern "C" void* __cdecl sub_412d50(void*);
extern "C" void __cdecl sub_445250(void*);
extern "C" void* __cdecl sub_430bf0(void*, void*, int);
extern "C" void __cdecl sub_600660(void*);
extern "C" void __cdecl sub_6a0e12(void*, int, int, int);
extern "C" void* __cdecl sub_6e9080(void*, void*);
extern "C" void __cdecl sub_6e8a90(void*);
extern "C" void __cdecl sub_6a0a46(void*, int, int, int, int, int, int);

void CDataModelPropGrid::ChangeResolution() {
    if (field_0xfc == 0) {
        void* p = sub_569620((char*)this + 0x18);
        void* v = *(void**)p;
        sub_5693a0(v, 3, (void*)0x8115fc);
        Control* c = *(Control**)((char*)this + 0x2c);
        if (c != 0) {
            if (_InterlockedExchangeAdd(&c->strong, -1) == 1) {
                c->dispose();
                if (_InterlockedExchangeAdd(&c->weak, -1) == 1) {
                    c->destroy();
                }
            }
        }
        return;
    }

    unsigned char old = field_0xfa;
    field_0xfa = 1;

    struct {
        int cbSize;
        int rc[4];
        int rcWork[4];
        int dwFlags;
    } mi;
    mi.cbSize = 0x48;

    if (GetMonitorInfoA(field_0xfc, &mi) == 0) {
        void* p = sub_569620((char*)this + 0x20);
        void* v = *(void**)p;
        sub_5693a0(v, 3, (void*)0x8115e4);
        Control* c = *(Control**)((char*)this + 0x34);
        if (c != 0) {
            if (_InterlockedExchangeAdd(&c->strong, -1) == 1) {
                c->dispose();
                if (_InterlockedExchangeAdd(&c->weak, -1) == 1) {
                    c->destroy();
                }
            }
        }
        field_0xfa = old;
        return;
    }

    int dims[2];
    sub_412d50(dims);
    sub_445250(dims);
    int w = (short)dims[0];
    int h = (short)dims[1];
    int total = w * h;

    char buf[0x27 * 4];
    void* res = sub_430bf0((char*)this + 0x120, (char*)this + 0x5c, total);
    for (int i = 0; i < 0x27; i++) {
        ((int*)buf)[i] = ((int*)res)[i];
    }

    int r = ChangeDisplaySettingsExA(0, (void*)buf, 0, 4, 0);
    if (r != 0) {
        void* p = sub_569620((char*)this + 0x20);
        void* v = *(void**)p;
        sub_5693a0(v, 3, (void*)0x8115c8);
        sub_600660((char*)this + 0x20);
        field_0xfa = old;
        return;
    }

    sub_6a0e12(this, 0xc40000, 0, 0);
    void* q = sub_6e9080((char*)this + 0x20, this);
    sub_6e8a90(q);

    int a = GetSystemMetrics(5);
    int b = GetSystemMetrics(6);

    int x1 = mi.rc[0];
    int y1 = mi.rc[1];
    int x2 = mi.rc[2];
    int y2 = mi.rc[3];

    int nx = (b * 2) - x1 + x2;
    int ny = (a * 2) - y1 + y2;

    sub_6a0a46(this, 0, x1 - a, y1 - b, nx, ny, 4);

    field_0xfa = old;
}
