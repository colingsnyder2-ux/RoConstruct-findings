// from server: 35% by colin
struct CRobloxWnd {
    char pad0[0x58];
    void* field58;
    void* field5c;
    void* field60;
    char pad64[0x800 - 0x64];
    int field800;
    char pad804[0x8ad0 - 0x804];
    int field8ad0;
    int field8ad4;
    void* method(const char* name, int arg);
};

extern "C" {
    int __stdcall sub_80236C(const char*, const char*);
    void* __stdcall sub_802460(void*);
    void __stdcall sub_802468(void*);
    void* __stdcall sub_802458(void*);
    void* __stdcall sub_80245C(void*);
    void* __stdcall sub_80244C(void*);
    int __stdcall sub_802830(char*, const char*, ...);
    int __stdcall sub_802368(void*, const char*, ...);
    int __stdcall sub_804E8C(void*);
    int __stdcall sub_804E90(void*, int, int, int, int, int);
    void* __stdcall sub_80236C2(const char*, const char*);
}

void* sub_447E10();
void* sub_448360(void*, void*);
void* sub_557330(void*, void*);
int sub_71F210(void*);
void* sub_678630(void*, int);
int sub_6A17F0(float);
void* sub_6A17C6(void*, int, int, int, int, int);
int sub_4D71B0();
int sub_678510();
void sub_5BDEF0(void*, void*);

extern char byte_962F64;
extern char byte_96DE64;
extern float flt_8163A4;
extern float flt_819DCC;

void* CRobloxWnd::method(const char* name, int arg) {
    void* result = 0;
    if (sub_80236C(name, "graphicsMode")) {
        sub_557330((void*)0x96DB98, (void*)0x447E70);
        void* obj = sub_447E10();
        sub_448360(obj, &field58);
        return result;
    }
    if (sub_80236C(name, "Shadows")) {
        if (field60 == 0) {
            sub_802458((void*)0x819E40);
            return result;
        }
        if (byte_962F64 == 0) {
            sub_802458((void*)0x815F8C);
            return result;
        }
        if (sub_71F210((char*)field60 + 0x18) < 0x1E) {
            sub_802458((void*)0x819E38);
            return result;
        }
        char buf1[0x1C];
        char buf2[0x1C];
        char buf3[0x1C];
        sub_802460(buf1);
        sub_802460(buf2);
        sub_802460(buf3);
        void* e = sub_678630((char*)field60 + 0x18, 0);
        int a = sub_6A17F0(*(float*)((char*)e + 4));
        int b = sub_6A17F0(*(float*)((char*)e + 8));
        int pct = 0;
        if (a > 0) {
            float f = (float)b / (float)a;
            pct = sub_6A17F0((1.0f - f) * flt_8163A4);
        }
        void* ent = ((void*(*)(void*))((*(void***)((char*)field60 + 4))[0x2D]))((char*)field60 + 4);
        int total = 0;
        int n = ((int(*)(void*))((*(void***)ent)[0x33]))(ent);
        for (int i = 0; i < n; i++) {
            void* c = ((void*(*)(void*, int, int, int, int))((*(void***)ent)[0x35]))(ent, i, 0, 0, 0);
            void* r = sub_6A17C6(c, 0, 0, 0, 0, 0);
            if (r) {
                void* r2 = ((void*(*)(void*, int, int, int, int))((*(void***)r)[0x4F]))(r, 0, 0, 0, 0);
                void* r3 = sub_6A17C6(r2, 0, 0, 0, 0, 0);
                total += sub_804E8C(r3);
            }
        }
        char out[0x100];
        sub_802830(out, "On  %2d%% r=%d v=%d w=%d", pct, a, b, total);
        sub_80245C(buf3);
        sub_802468(buf1);
        sub_802468(buf2);
        sub_802468(buf3);
        return result;
    }
    if (sub_80236C(name, "antiAliasing")) {
        if (field60 == 0) {
            sub_802458((void*)0x819E10);
            return result;
        }
        if (byte_96DE64 == 0) {
            sub_802458((void*)0x815F8C);
            return result;
        }
        int cnt = (field8ad4 - field8ad0) >> 2;
        char buf[0x20];
        sub_804E90(buf, cnt, 0, 0x20, 0, 0);
        sub_802368((void*)0x819E00, buf);
        return result;
    }
    if (sub_80236C(name, "bevels")) {
        if (field60 == 0) {
            sub_802458((void*)0x819E40);
            return result;
        }
        char buf[0x1C];
        sub_802460(buf);
        int v = field800 - 1;
        if (v == 0) {
            sub_80244C((void*)0x815F90);
        } else if (v == 1) {
            sub_80244C((void*)0x815F8C);
        }
        sub_80245C(buf);
        sub_802468(buf);
        return result;
    }
    if (sub_80236C(name, "videoMemory")) {
        if (field60 == 0) {
            sub_802458((void*)0x819E40);
            return result;
        }
        if (sub_4D71B0()) {
            sub_802458((void*)0x815F90);
        } else {
            sub_802458((void*)0x815F8C);
        }
        return result;
    }
    if (sub_80236C(name, "GfxTime")) {
        int t = sub_678510();
        sub_5BDEF0(&t, (void*)0x819DDC);
        return result;
    }
    if (sub_80236C(name, "Particles")) {
        if (field60 == 0) {
            sub_802458((void*)0x819E10);
            return result;
        }
        if (byte_962F64 == 0) {
            sub_802458((void*)0x815F8C);
            return result;
        }
        if (sub_71F210((char*)field60 + 0x18) == 0) {
            sub_802458((void*)0x819DD0);
            return result;
        }
        void* e = sub_678630((char*)field60 + 0x18, 0);
        float f1 = *(float*)e;
        float f2 = flt_819DCC;
        if (f2 >= 1.0f) {
            f2 = f2 / f1;
        }
        char out[0x100];
        sub_802830(out, "%.1fms (%.1ffps)", f1, f2);
        sub_802458(out);
        return result;
    }
    sub_802458((void*)0x80B716);
    return result;
}
