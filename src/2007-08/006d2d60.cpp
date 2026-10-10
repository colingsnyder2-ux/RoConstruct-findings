// from server: 50% by colin
// roc 2007-08 006d2d60  unit: CXTPReportHyperlinks  size: 460 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d2d60

extern "C" __declspec(dllimport) void* __stdcall HeapAlloc(void*, unsigned long, unsigned long);
extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(long volatile*);

extern void* __cdecl sub_41db10();
extern void* __cdecl sub_62fef6(unsigned int);
extern void* __cdecl sub_62ff32(unsigned int);
extern void __cdecl sub_6301e4(void*);
extern void* __cdecl sub_6d2710();

struct CXTPReportHyperlinks {
    void func(void*);
};

void CXTPReportHyperlinks::func(void* arg) {
    void* self = this;
    void* v1 = (*(void*(__thiscall**)(void*))(*(int*)self + 0x58))(self);
    void* v2 = (*(void*(__thiscall**)(void*, const char*))(*(int*)arg + 0x94))(arg, "Hyperlink");
    void* v3 = 0;
    int flag = 0;
    if (*(int*)((char*)arg + 0x24) == 0) {
        v3 = (*(void*(__thiscall**)(void*, int, int))(*(int*)v2 + 4))(v2, (int)v1, 1);
        int i = 0;
        if ((int)v1 > 0) {
            do {
                void* v4 = (*(void*(__thiscall**)(void*, int))(*(int*)self + 0x64))(self, i);
                if (v4) {
                    void* v5 = (*(void*(__thiscall**)(void*, void**))(*(int*)v2 + 8))(v2, &v3);
                    (*(void(__thiscall**)(void*, void*))(*(int*)v4 + 0x58))(v4, v5);
                    if (v5) sub_6301e4(v5);
                }
                i++;
            } while (i < (int)v1);
        }
    } else {
        v3 = (*(void*(__thiscall**)(void*, int, int))(*(int*)v2 + 4))(v2, 0, 1);
        if (v3) {
            do {
                void* v6;
                if (*(int*)0x8c8778) {
                    InterlockedIncrement((long*)0x8c8778);
                    if (*(int*)0x8c8778) {
                        sub_41db10();
                        v6 = HeapAlloc(*(void**)0x8c876c, 0, 0x38);
                    } else {
                        v6 = sub_62ff32(0x38);
                    }
                } else {
                    InterlockedIncrement((long*)0x8c8778);
                    v6 = sub_62fef6(0x38);
                }
                void* v7 = 0;
                if (v6) {
                    v7 = sub_6d2710();
                }
                if (v7) {
                    void* v8 = (*(void*(__thiscall**)(void*, void**))(*(int*)v2 + 8))(v2, &v3);
                    (*(void(__thiscall**)(void*, void*))(*(int*)v7 + 0x58))(v7, v8);
                    (*(void(__thiscall**)(void*, void*))(*(int*)self + 0x7c))(self, v7);
                    if (v8) sub_6301e4(v8);
                }
            } while (v3 != 0);
        }
    }
    (*(void(__thiscall**)(void*, int))(*(int*)v2 + 0))(v2, 1);
}
