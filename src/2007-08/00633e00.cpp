// from server: 63% by colin
struct CXTPCommandBar {
    char pad0[0x24];
    int field24;
    char pad28[0x7c];
    void* fieldA0;
    char padA4[0xc];
    int fieldB0;
    char padB4[0x10];
    int fieldC4;
    int method633900(int);
    int method6338d0(int);
    int method633ca0(int);
    int method631c90(void*, void*);
    int method6a8070(int);
    int method6a2c50(int, int, int);
    int method6a3940(int);
    int method6a37b0(void*);
    int method6a42e0(void*);
    int method73836a(void*, void*);
    int method67ffa0(void*);
    int method62ff20();
    int method633e00(void*);
};

extern "C" {
    int __stdcall GetCursorPos(void*);
    short __stdcall GetKeyState(int);
    int __stdcall PtInRect(void*, int, int);
}

int CXTPCommandBar::method633e00(void* arg)
{
    char* p = (char*)arg;
    int* pi = (int*)p;
    if (pi[1] == 0x104 && (*(unsigned short*)(p + 0xe) & 0x2000) != 0) {
        int r = method633900(0);
        if (*(int*)(r + 4) <= 0) {
            r = method633900(0);
            if (method6a3940(r) == 0) {
                r = method633900(0);
                void* v = fieldA0;
                if (v != 0) v = *(void**)((char*)v + 0x20);
                if (method6a37b0(v) != 0) {
                    if (pi[2] == 0x12) {
                        method6338d0(1);
                        return 0;
                    }
                    if (field24 != 0) {
                        if (GetKeyState(0x10) < 0) goto skip;
                    }
                    if (pi[2] != 0) {
                        if (method633ca0(pi[2]) != 0) return 1;
                    }
                }
            }
        }
    }
skip:
    if ((pi[1] == 0x105 || pi[1] == 0x101) && fieldC4 != 0 && fieldB0 != 0) {
        int r = method633900(0);
        if (method6a3940(r) == 0) {
            method6338d0(0);
        }
    }
    if (pi[1] == 0x7b || pi[1] == 0x105) {
        int r = method633900(0);
        if (method6a3940(r) != 0) {
            void* g = (void*)0x8c9310;
            int obj = method73836a(g, (void*)0x632210);
            if (obj == 0) obj = method62ff20();
            method6a2c50(0x7b, pi[2], pi[3]);
            return 1;
        }
    }
    if (pi[1] == 0x20a) {
        void* g = (void*)0x8c9310;
        int obj = method73836a(g, (void*)0x632210);
        if (obj == 0) obj = method62ff20();
        if (*(int*)(obj + 0x20) > 0) {
            obj = method73836a(g, (void*)0x632210);
            if (obj == 0) obj = method62ff20();
            method6a2c50(0x20a, pi[2], pi[3]);
            return 1;
        }
        int v = (*(int(__thiscall**)(CXTPCommandBar*))(*(int*)this + 0x58))(this);
        int pt[2];
        GetCursorPos(pt);
        if (v != 0 && *(int*)(v + 0xf4) == 3) {
            int r = method67ffa0((void*)v);
            if (PtInRect((void*)r, pt[0], pt[1]) != 0) {
                int flag = (*(short*)(p + 0xa) <= 0) ? 1 : 0;
                method6a8070(flag);
                return 1;
            }
        }
    }
    if (pi[1] >= 0x100 && pi[1] <= 0x108) {
        void* v = fieldA0;
        if (v != 0) v = *(void**)((char*)v + 0x20);
        int r = method631c90(v, arg);
        if (method6a42e0((void*)r) != 0) return 1;
    }
    return 0;
}
