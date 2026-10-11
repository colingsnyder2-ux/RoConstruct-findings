// from server: 27% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refcount;
    long weakrefcount;
    void AddRef();
    void Release();
};

struct String {
    char pad[0x1c];
    unsigned int len;
    char data[1];
};

struct MapNode {
    MapNode* left;
    MapNode* parent;
    MapNode* right;
    char color;
    char pad[3];
    void* key;
    void* value;
};

struct Map {
    MapNode* head;
    unsigned int size;
};

struct Replicator {
    char pad0[0x2cfc];
    Map map;

    void* DeleteInstanceItem(void* arg);
};

struct Holder {
    void* vptr;
    long refcount;
    long weakrefcount;
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void* __cdecl sub_42bc10(void* self, int n);
extern "C" void* __cdecl sub_591bd0(void* self, void* a, void* b);
extern "C" void* __cdecl sub_420190(void* a, void* b);
extern "C" void* __cdecl sub_569620(void* a);
extern "C" void* __cdecl sub_5693a0(void* a, int b, void* c, void* d);
extern "C" void* __cdecl sub_592610(void* self, void* a);
extern "C" void* __cdecl sub_4025b0(void* self, void* a);
extern "C" void* __cdecl sub_42bbb0();
extern "C" void* __cdecl sub_5a7570(void* self);
extern "C" void* __cdecl sub_5a76b0(void* self, void* a);
extern "C" void* __cdecl sub_5a6ff0(void* self, void* a);

void RefCounted::AddRef() {
    _InterlockedExchangeAdd(&refcount, 1);
}

void RefCounted::Release() {
    if (_InterlockedExchangeAdd(&refcount, -1) == 1) {
        void** vt = (void**)vptr;
        ((void(__thiscall*)(RefCounted*))vt[1])(this);
        if (_InterlockedExchangeAdd(&weakrefcount, -1) == 1) {
            void** vt2 = (void**)vptr;
            ((void(__thiscall*)(RefCounted*))vt2[2])(this);
        }
    }
}

void* Replicator::DeleteInstanceItem(void* arg) {
    void* local14 = 0;
    void* local18 = 0;
    void* local1c = 0;
    void* local20 = 0;
    void* local24 = 0;
    void* local28 = 0;
    void* local2c = 0;
    void* local30 = 0;
    void* local34 = 0;
    void* local38 = 0;

    sub_42bc10(&local14, 6);

    local34 = 0;
    local38 = arg;

    sub_591bd0(&map, &local18, &local34);

    void* ebp = local14;
    void* ebx = *(void**)((char*)&map + 0x18);
    void* eax = map.head;

    if (ebp != 0 && ebp != eax) {
        _invalid_parameter_noinfo();
    }

    if (local18 != ebx) {
        if (ebp == 0) {
            _invalid_parameter_noinfo();
            if (local18 != *(void**)((char*)ebp + 0x18)) {
                _invalid_parameter_noinfo();
            }
            ebx = *(void**)((char*)local18 + 0x10);
        } else {
            ebp = *(void**)ebp;
            if (local18 != *(void**)((char*)ebp + 0x18)) {
                _invalid_parameter_noinfo();
            }
            ebx = *(void**)((char*)local18 + 0x10);
        }
    } else {
        sub_420190(&local14, arg);

        if (local14 == 0) {
            sub_569620(&local1c);

            char* str;
            if (*(unsigned int*)((char*)arg + 0x1c) < 0x10) {
                str = (char*)arg + 8;
            } else {
                str = *(char**)((char*)arg + 8);
            }

            void* eax2 = *(void**)&local1c;
            sub_5693a0(eax2, 3, (void*)0x824de4, str);

            void* p = local20;
            if (p != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1) {
                    void** vt = (void**)p;
                    ((void(__thiscall*)(void*))vt[1])(p);
                    if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1) {
                        void** vt2 = (void**)p;
                        ((void(__thiscall*)(void*))vt2[2])(p);
                    }
                }
            }
        }

        local38 = arg;
        void* node = sub_592610(&map, &local34);
        *(void**)node = local14;
        sub_4025b0((char*)node + 4, &local18);

        void* q = local18;
        void* r = local14;
        if (q != 0) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)q + 4), -1) == 1) {
                void** vt = (void**)q;
                ((void(__thiscall*)(void*))vt[1])(q);
                if (_InterlockedExchangeAdd((volatile long*)((char*)q + 8), -1) == 1) {
                    void** vt2 = (void**)q;
                    ((void(__thiscall*)(void*))vt2[2])(q);
                }
            }
        }
    }

    void* esi = sub_42bbb0();
    void* edi = sub_5a7570(esi);
    void* eax3 = local14;
    if (edi != eax3) {
        sub_5a76b0(esi, eax3);
        if (edi != 0) {
            sub_5a6ff0(esi, edi);
        }
    }

    return ebx;
}
