// from server: 28% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Ctl {
    virtual ~Ctl();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct CRobloxWnd {
    char pad0[0x20];
    void* hwnd;
    char pad1[0x38];
    int mode;
    char pad2[0x58];
    void* gfx;
    char pad3[0x88];
    char flag88;
    char pad4[0x2f];
    void* obj_b8;
    void update();
};

extern "C" void __cdecl sub_45ace0(void*);
extern "C" void __cdecl sub_6a13ee(void*, void*);
extern "C" void* __cdecl sub_678510();
extern "C" void* __cdecl sub_6a0920(unsigned);
extern "C" void __cdecl sub_6786c0(void*);
extern "C" void* __cdecl sub_407be0(void*);
extern "C" void __cdecl sub_5634b0(void*, void*);
extern "C" void* __cdecl sub_412d50();
extern "C" void __cdecl sub_427b60();
extern "C" void __cdecl sub_428050(void*, void*, const char*);
extern "C" void __cdecl sub_4d71a0(int);
extern "C" void* __cdecl sub_569620(void*);
extern "C" void __cdecl sub_5693a0(void*, int, const char*);
extern "C" void __cdecl sub_67a7e0(void*, int, int, int, int, int);

extern "C" void __stdcall GetClientRect(void*, void*);

extern int g_962f68;
extern char g_96de64;
extern char g_962f64;
extern float g_819ba4;
extern float g_819ba8;
extern float g_819bac;
extern void* g_819bb0;
extern void* g_819bb4;
extern void* g_819bd0;
extern void* g_819bd8;
extern void* g_819be8;
extern void* g_819bf4;
extern void* g_930668;
extern void* g_804e94;
extern void* g_804e98;
extern void* g_804e9c;
extern void* g_804ea0;
extern void* g_804ea4;
extern void* g_804ea8;
extern void* g_802458;
extern void* g_802468;
extern void* g_802d84;

void CRobloxWnd::update()
{
    char buf[0x100];
    void* dc;
    void* ctl;
    void* obj;
    int w, h;
    int mode;
    int flag;
    int idx;
    int* ranges;
    int r0, r1, r2;
    int sel;
    char changed;
    char matched;

    sub_45ace0(buf);

    flag = (this->flag88 != 0) ? 0 : 8;

    w = *(int*)((char*)&buf + 0x74);
    h = *(int*)((char*)&buf + 0x78);

    *(int*)((char*)&buf + 0x00) = w;
    *(int*)((char*)&buf + 0x04) = h;
    *(int*)((char*)&buf + 0x08) = 8;
    *(int*)((char*)&buf + 0x0c) = 8;
    *(int*)((char*)&buf + 0x10) = 0x18;
    *(int*)((char*)&buf + 0x14) = flag;
    *(int*)((char*)&buf + 0x18) = (int)g_930668;

    sub_6a13ee((char*)&buf + 0x28, this);

    GetClientRect(this->hwnd, (char*)&buf + 0x54);

    dc = sub_678510();
    *(int*)((char*)&buf + 0x5c) = (int)dc;

    obj = sub_6a0920(0x808);
    *(int*)((char*)&buf + 0x58) = (int)obj;
    if (obj != 0) {
        sub_6786c0(obj);
    } else {
        obj = 0;
    }
    this->obj_b8 = obj;

    ctl = sub_407be0((char*)&buf + 0x0c);
    sub_5634b0(ctl, 0);

    {
        void* app = sub_412d50();
        *(int*)((char*)&buf + 0x58) = *(int*)((char*)app + 0x13c);
    }

    *(int*)((char*)&buf + 0x00) = 0xbebc200;
    *(int*)((char*)&buf + 0x04) = 0x17d78400;
    *(int*)((char*)&buf + 0x08) = 0x2faf0800;
    *(int*)((char*)&buf + 0x0c) = 0x5f5e100;
    *(int*)((char*)&buf + 0x10) = 0x17d78400;
    *(int*)((char*)&buf + 0x14) = 0x2faf0800;
    *(int*)((char*)&buf + 0x18) = 0x5f5e1000;
    *(int*)((char*)&buf + 0x1c) = 0xbebc200;

    *(char*)((char*)&buf + 0x6a) = 0;

    ((void(__stdcall*)(void*))g_802458)((char*)&buf + 0x28);

    matched = 0;
    if (((int(__stdcall*)(void*, void*, void*))g_804e94)(0, (char*)&buf + 0x28, (char*)&buf + 0x0c)) {
        matched = 1;
    } else {
        ((void(__stdcall*)(void*))g_802458)((char*)&buf + 0x98);
        if (((int(__stdcall*)(void*, void*, void*))g_804e94)(0, (char*)&buf + 0x98, (char*)&buf + 0x0c)) {
            matched = 1;
        } else {
            ((void(__stdcall*)(void*))g_802458)((char*)&buf + 0xb4);
            ((int(__stdcall*)(void*, void*, void*))g_804e94)(0, (char*)&buf + 0xb4, (char*)&buf + 0x0c);
            *(char*)((char*)&buf + 0x6b) = 0;
        }
        ((void(__stdcall*)(void*))g_802468)((char*)&buf + 0x98);
    }
    ((void(__stdcall*)(void*))g_802468)((char*)&buf + 0x28);

    if (matched) {
        ranges = (int*)((char*)&buf + 0x00);
    } else {
        ((void(__stdcall*)(void*))g_802458)((char*)&buf + 0x28);
        if (((int(__stdcall*)(void*, void*, void*))g_804e94)(0, (char*)&buf + 0x28, (char*)&buf + 0x0c)) {
            ranges = (int*)((char*)&buf + 0x48);
        } else {
            ranges = (int*)((char*)&buf + 0x00);
        }
        ((void(__stdcall*)(void*))g_802468)((char*)&buf + 0x28);
    }

    sel = *(int*)((char*)&buf + 0x58);
    if (sel == 0) {
        mode = *(int*)((char*)&buf + 0x5c);
        r0 = ranges[0];
        r1 = ranges[1];
        r2 = ranges[2];
        if (mode >= r0) {
            if (mode < r1) {
                *(char*)((char*)&buf + 0x6a) = 1;
                g_962f68 = 0;
            } else if (mode < r2) {
                *(char*)((char*)&buf + 0x6a) = 1;
                g_962f68 = 1;
            } else {
                *(char*)((char*)&buf + 0x6a) = 1;
                g_962f68 = 2;
            }
        } else {
            if (mode < r1) {
                if (mode > r2) {
                    *(char*)((char*)&buf + 0x6a) = 1;
                    g_962f68 = 2;
                }
            } else if (mode < r2) {
                *(char*)((char*)&buf + 0x6a) = 1;
                g_962f68 = 1;
            } else {
                *(char*)((char*)&buf + 0x6a) = 1;
                g_962f68 = 2;
            }
        }
    } else {
        *(char*)((char*)&buf + 0x6a) = (sel != 2);
    }

    changed = *(char*)((char*)&buf + 0x6a);
    if (changed != g_96de64) {
        g_96de64 = changed;
    }
    if (changed) {
        *(int*)((char*)this->obj_b8 + 0x7f8) = 0;
    }

    {
        void* app = sub_412d50();
        int m = *(int*)((char*)app + 0x138);
        if (m == 0) {
            int v = *(int*)((char*)&buf + 0x5c);
            idx = (v >= 0xbebc200) ? 2 : 0;
            ((void(__stdcall*)(void*))g_802458)((char*)&buf + 0xb4);
            if (((int(__stdcall*)(void*, void*, void*))g_804e94)(0, (char*)&buf + 0xb4, (char*)&buf + 0x0c)) {
                idx = 2;
            } else {
                ((void(__stdcall*)(void*))g_802458)((char*)&buf + 0x98);
                if (((int(__stdcall*)(void*, void*, void*))g_804e94)(0, (char*)&buf + 0x98, (char*)&buf + 0x0c)) {
                    idx = 2;
                } else {
                    ((void(__stdcall*)(void*))g_802458)((char*)&buf + 0x28);
                    ((int(__stdcall*)(void*, void*, void*))g_804e94)(0, (char*)&buf + 0x28, (char*)&buf + 0x0c);
                    *(char*)((char*)&buf + 0x6b) = 0;
                }
                ((void(__stdcall*)(void*))g_802468)((char*)&buf + 0x98);
            }
            ((void(__stdcall*)(void*))g_802468)((char*)&buf + 0xb4);
            if (*(char*)((char*)&buf + 0x6b) != 0) {
                idx = 2;
            }
        } else if (m == 1) {
            idx = 0;
        } else if (m == 2) {
            idx = 2;
        } else {
            void* s = sub_569620((char*)&buf + 0x54);
            sub_5693a0(*(void**)s, 1, (const char*)g_819bb4);
            if (*(int*)((char*)&buf + 0x58) != 0) {
                Ctl* c = (Ctl*)*(int*)((char*)&buf + 0x58);
                if (_InterlockedExchangeAdd(&c->strong, -1) == 1) {
                    c->dispose();
                    if (_InterlockedExchangeAdd(&c->weak, -1) == 1) {
                        c->destroy();
                    }
                }
            }
            idx = 2;
        }
    }

    sub_427b60();
    {
        char tmpbuf[0x1c];
        sub_428050(tmpbuf, (char*)&buf + 0x58, (const char*)g_819bb0);
    }

    {
        int dx = *(int*)((char*)&buf + 0x58) - *(int*)((char*)&buf + 0x50);
        int dy = *(int*)((char*)&buf + 0x5c) - *(int*)((char*)&buf + 0x54);
        int ne = (this->mode != 3) ? 1 : 0;
        sub_67a7e0(this->obj_b8, ne, (int)this->hwnd, dy, dx, idx);
    }

    {
        void* app = sub_412d50();
        g_962f64 = (*(int*)((char*)app + 0x140) != 2);
    }

    {
        void* app = sub_412d50();
        int m = *(int*)((char*)app + 0x134);
        if (m == 0) {
            if (*(int*)((char*)&buf + 0x5c) >= 0x5f5e100) {
                if (*(char*)((char*)this->obj_b8 + 0x804) == 0) {
                    *(char*)((char*)&buf + 0x78) = 1;
                } else {
                    *(char*)((char*)&buf + 0x78) = 0;
                }
            } else {
                *(char*)((char*)&buf + 0x78) = 0;
            }
        } else if (m == 1) {
            *(char*)((char*)&buf + 0x78) = 1;
        } else {
            *(char*)((char*)&buf + 0x78) = 0;
        }
    }

    sub_4d71a0(*(int*)((char*)&buf + 0x78));

    ((void(__stdcall*)(int))g_804e98)(0);
    ((void(__stdcall*)(int))g_804e9c)(0);

    {
        float f = g_819bac;
        *(float*)((char*)&buf + 0x44) = f;
        *(float*)((char*)&buf + 0x48) = f;
        *(float*)((char*)&buf + 0x4c) = f;
        *(float*)((char*)&buf + 0x50) = 1.0f;
        ((void(__stdcall*)(void*))g_804ea0)((char*)&buf + 0x44);
    }

    {
        void* g = this->obj_b8;
        void* cam = *(void**)((char*)g + 4);
        float a = g_819ba8;
        float b = g_819ba4;
        ((void(__stdcall*)(void*, float, float, float))g_804ea4)(cam, 0.0f, b, a);
    }

    {
        void* g = this->obj_b8;
        void* cam = *(void**)((char*)g + 8);
        float b = g_819ba4;
        ((void(__stdcall*)(void*, float, float, float))g_804ea8)(cam, 0.0f, b, 0.0f);
    }
}
