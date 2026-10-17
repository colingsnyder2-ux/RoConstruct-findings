// from server: 19% by colin
struct Instance {
    char pad[0x10];
    void process(int a, int b);
};

extern "C" {
    int __stdcall sub_553F90(int, const char*);
    void* __cdecl sub_554290(void*, const char*);
    void __cdecl sub_557330(void*, void*);
    int __cdecl sub_57C210(void*, void*);
    void* __cdecl sub_57C2B0(void*, void*);
    int __cdecl sub_57C360(void*, void*);
    int __cdecl sub_57C610(void*, void*);
    int __cdecl sub_57C810(void*);
    int __cdecl sub_5ED300(void*, void*);
    void* __cdecl sub_5ED5C0();
    void* __cdecl sub_5ED630();
    int __cdecl sub_5ED6A0(void*, void*);
    int __cdecl sub_5ED800(void*);
    void __cdecl sub_5F13E0(void*, void*);
    void __cdecl sub_5F1430(void*, void*);
    void __cdecl sub_5F14F0(void*, float);
    void __cdecl sub_5F15C0(void*, float);
    void __cdecl sub_802460(void*);
    void __cdecl sub_802468(void*);
}

extern int dword_97B5B0;
extern int dword_97B5AC;
extern int dword_97B5A8;
extern int dword_97B5A4;
extern int dword_97B5A0;
extern int dword_97B5B4;
extern void* dword_975338;
extern void* dword_97B11C;
extern void* dword_97B120;

void Instance::process(int a, int b)
{
    if (!(dword_97B5B4 & 1)) {
        dword_97B5B4 |= 1;
        dword_97B5B0 = sub_553F90(-1, (const char*)0x80F7D4);
    }
    if (!(dword_97B5B4 & 2)) {
        dword_97B5B4 |= 2;
        dword_97B5AC = sub_553F90(-1, (const char*)0x840814);
    }
    if (!(dword_97B5B4 & 4)) {
        dword_97B5B4 |= 4;
        dword_97B5A8 = sub_553F90(-1, (const char*)0x84080C);
    }
    if (!(dword_97B5B4 & 8)) {
        dword_97B5B4 |= 8;
        dword_97B5A4 = sub_553F90(-1, (const char*)0x840804);
    }
    if (!(dword_97B5B4 & 0x10)) {
        dword_97B5B4 |= 0x10;
        dword_97B5A0 = sub_553F90(-1, (const char*)0x8407F8);
    }

    void* node = *(void**)((char*)&a + 4);
    while (node) {
        int val = 0;
        if (sub_57C810(node)) {
            node = *(void**)node;
            continue;
        }
        void* r = sub_57C2B0(node, dword_975338);
        if (!r) {
            node = *(void**)node;
            continue;
        }
        if (!sub_57C360((char*)r + 8, &val)) {
            node = *(void**)node;
            continue;
        }

        if (val == dword_97B5B0) {
            char buf[0x18];
            sub_802460(buf);
            if (sub_57C210((char*)node + 0x10, buf)) {
                char* p;
                if (*(int*)(buf + 0x14) >= 0x10)
                    p = *(char**)(buf + 4);
                else
                    p = buf + 4;
                sub_557330((void*)0x97B11C, (void*)0x5ED620);
                void* obj = sub_5ED5C0();
                char tmp[4];
                void* s = sub_554290(tmp, p);
                int ok = sub_5ED300(obj, s);
                if (ok) {
                    sub_5F13E0(this, *(void**)tmp);
                } else {
                    sub_5F13E0(this, 0);
                }
            }
            sub_802468(buf);
        } else if (val == dword_97B5AC) {
            char buf[0x18];
            sub_802460(buf);
            if (sub_57C210((char*)node + 0x10, buf)) {
                char* p;
                if (*(int*)(buf + 0x14) >= 0x10)
                    p = *(char**)(buf + 4);
                else
                    p = buf + 4;
                sub_557330((void*)0x97B120, (void*)0x5ED690);
                void* obj = sub_5ED630();
                char tmp[4];
                void* s = sub_554290(tmp, p);
                int ok = sub_5ED300(obj, s);
                if (ok) {
                    sub_5F1430(this, *(void**)tmp);
                }
            }
            sub_802468(buf);
        } else if (val == dword_97B5A8) {
            float f;
            if (sub_57C610((char*)node + 0x10, &f)) {
                sub_5F14F0(this, f);
            }
        } else if (val == dword_97B5A4) {
            float f;
            if (sub_57C610((char*)node + 0x10, &f)) {
                sub_5F15C0(this, f);
            }
        } else if (val == dword_97B5A0) {
            char buf[0x18];
            sub_802460(buf);
            if (sub_57C210((char*)node + 0x10, buf)) {
                char* p;
                if (*(int*)(buf + 0x14) >= 0x10)
                    p = *(char**)(buf + 4);
                else
                    p = buf + 4;
                char tmp[4];
                sub_5ED6A0(tmp, p);
                if (sub_5ED800(tmp)) {
                    void* v = *(void**)tmp;
                    if (v) {
                        sub_5F13E0(this, v);
                    }
                }
            }
            sub_802468(buf);
        }
        node = *(void**)node;
    }
}
