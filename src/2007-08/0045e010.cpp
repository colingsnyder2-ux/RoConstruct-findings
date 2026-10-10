// from server: 46% by colin
struct CScintillaFindReplaceDlg {
    void run();
};

struct Font {
    void* vtable;
    char pad[0x1c];
    void* field20;
};

extern "C" void* __stdcall sub_62FF02();
extern "C" int __stdcall sub_6301F0(void*, void*);
extern "C" void __stdcall sub_63092E(void*);
extern "C" int __stdcall IsWindow(void*);
extern "C" void* __stdcall SendMessageA(void*, unsigned int, unsigned int, unsigned int);

extern void* g_88a574;
extern void* g_7941a0;

void CScintillaFindReplaceDlg::run() {
    void* local18;
    void* local14;
    void* local10;
    void* localc;
    int found;
    void* p;
    void* q;
    void* r;
    void* s;
    void* t;
    void* u;

    localc = this;

    if (g_88a574 == 0) {
        sub_63092E(localc);
        return;
    }

    p = sub_62FF02();
    local18 = *(void**)((char*)p + 4);
    found = 0;

    if (*(void**)((char*)local18 + 0x58) != 0) {
        q = *(void**)((char*)local18 + 0x58);
        r = (*(void*(**)(void*))((*(void***)q)[6]))(q);
        local18 = r;
        if (r != 0) {
            while (found == 0) {
                q = *(void**)((char*)local18 + 0x58);
                s = (*(void*(**)(void*, void**))((*(void***)q)[7]))(q, &local18);
                t = (*(void*(**)(void*))((*(void***)s)[0x17]))(s);
                local14 = t;
                if (t != 0) {
                    while (found == 0) {
                        u = (*(void*(**)(void*, void**))((*(void***)s)[0x18]))(s, &local14);
                        if (sub_6301F0(u, &g_7941a0) != 0) {
                            if (u != localc) {
                                if (u != 0) {
                                    u = *(void**)((char*)u + 0x20);
                                }
                                if (IsWindow(u) != 0) {
                                    found = 1;
                                }
                            }
                        }
                        if (local14 == 0) break;
                    }
                }
                if (local18 == 0) break;
            }
        }
    }

    if (found == 0) {
        if (IsWindow(*(void**)((char*)g_88a574 + 0x20)) != 0) {
            SendMessageA(*(void**)((char*)g_88a574 + 0x20), 0x10, 0, 0);
        }
        g_88a574 = 0;
    }

    sub_63092E(localc);
}
