// from server: 22% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Object {
    virtual void unused0();
    virtual void dispose();
    virtual void destroy();
};

struct Control {
    const void* table;
    volatile long strong;
    volatile long weak;
    Object* object;
};

struct List {
    char pad[0x14];
    void* end;
};

struct MapNode {
    MapNode* next;
    MapNode* prev;
};

struct Map {
    char pad[0x14];
    MapNode* end;
};

struct Replicator {
    char pad0[0x2c38];
    List list1;
    char pad1[0x18];
    void* field2c50;
    char pad2[0x20];
    Map map2c74;
    char pad3[0x18];
    void* field2c90;

    void NewInstanceItem(void* a, void* b);
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl func_0047d410(void*, void*, void*);
extern "C" void __cdecl func_004ac160(void*, void*);
extern "C" void __cdecl func_004ac1f0(void*, void*);
extern "C" void __cdecl func_004acb50(void*, int);
extern "C" void* __cdecl func_004ad860(void*, void*, void*);
extern "C" void* __cdecl func_004adfd0(void*, void*, void*);
extern "C" void __cdecl func_004afd00(void*, void*, void*);
extern "C" void* __cdecl func_004afe90(void*, void*, void*);
extern "C" void* __cdecl func_005e9f60(void*, void*);
extern "C" void __cdecl func_00600660(void*);
extern "C" void __cdecl func_006a0920(void);
extern "C" void __cdecl func_00802890(void);

void Replicator::NewInstanceItem(void* a, void* b)
{
    void* ebx = this->field2c50;
    void* ebp = this->list1.end;

    void* local14;
    void* local18;
    void* local1c;
    void* local20;

    local14 = *(void**)((char*)a + 0x104);
    func_004adfd0(&this->list1, &local14, &local18);
    void* esi = local18;

    if (esi) {
        void* v = *(void**)esi;
        if (v != 0 && v != ebp) {
            func_00802890();
        }
    }

    if (*(void**)((char*)esi + 4) == ebx) {
        void* ecx = local14;
        void* edx = b;
        local1c = ecx;
        local20 = edx;
        if (edx) {
            _InterlockedExchangeAdd((volatile long*)((char*)edx + 4), 1);
        }
        func_004afd00(this, &local1c, 0);
        local18 = ecx;
        func_005e9f60(&this->field2c90, &local18);
        if (*(int*)&local18 != 0) {
            goto cleanup;
        }
        void* p = operator_new(0x10);
        local14 = p;
        if (p) {
            local1c = ecx;
            local20 = edx;
            if (edx) {
                _InterlockedExchangeAdd((volatile long*)((char*)edx + 4), 1);
            }
            func_004afe90(p, this, &local1c);
            esi = p;
        } else {
            esi = 0;
        }
        local18 = esi;
        func_004ac1f0(&local18, esi);
        func_0047d410(&local18, esi, esi);
        void* node = func_004ad860(&this->map2c74, this->map2c74.end, &local14);
        func_004acb50(&this->map2c74, 1);
        void* old = local18;
        this->map2c74.end->next = (MapNode*)node;
        *(void**)node = this->map2c74.end;
        if (old) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)old + 4), -1) == 1) {
                void* vt = *(void**)old;
                (*(void(__thiscall**)(void*))(*(char**)vt + 4))(old);
                if (_InterlockedExchangeAdd((volatile long*)((char*)old + 8), -1) == 1) {
                    void* vt2 = *(void**)old;
                    (*(void(__thiscall**)(void*))(*(char**)vt2 + 8))(old);
                }
            }
        }
        goto cleanup;
    }

    {
        void* p = operator_new(0x14);
        if (p) {
            void* ecx = local14;
            void* edx = b;
            local1c = ecx;
            local20 = edx;
            if (edx) {
                _InterlockedExchangeAdd((volatile long*)((char*)edx + 4), 1);
            }
            *(void**)((char*)p + 4) = this;
            *(void**)p = (void*)0x824828;
            *(void**)((char*)p + 8) = (void*)0x973d34;
            *(void**)((char*)p + 0xc) = ecx;
            *(void**)((char*)p + 0x10) = edx;
            if (edx) {
                _InterlockedExchangeAdd((volatile long*)((char*)edx + 4), 1);
            }
            esi = p;
        } else {
            esi = 0;
        }
        local18 = esi;
        func_004ac160(&local18, esi);
        func_0047d410(&local18, esi, esi);
        void* node = func_004ad860(&this->map2c74, this->map2c74.end, &local14);
        func_004acb50(&this->map2c74, 1);
        void* old = local18;
        this->map2c74.end->next = (MapNode*)node;
        *(void**)node = this->map2c74.end;
        if (old) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)old + 4), -1) == 1) {
                void* vt = *(void**)old;
                (*(void(__thiscall**)(void*))(*(char**)vt + 4))(old);
                if (_InterlockedExchangeAdd((volatile long*)((char*)old + 8), -1) == 1) {
                    void* vt2 = *(void**)old;
                    (*(void(__thiscall**)(void*))(*(char**)vt2 + 8))(old);
                }
            }
        }
        if (b) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)b + 4), -1) == 1) {
                void* vt = *(void**)b;
                (*(void(__thiscall**)(void*))(*(char**)vt + 4))(b);
                if (_InterlockedExchangeAdd((volatile long*)((char*)b + 8), -1) == 1) {
                    void* vt2 = *(void**)b;
                    (*(void(__thiscall**)(void*))(*(char**)vt2 + 8))(b);
                }
            }
        }
    }

cleanup:
    if (local18) {
        void* old = local18;
        if (_InterlockedExchangeAdd((volatile long*)((char*)old + 4), -1) == 1) {
            void* vt = *(void**)old;
            (*(void(__thiscall**)(void*))(*(char**)vt + 4))(old);
            if (_InterlockedExchangeAdd((volatile long*)((char*)old + 8), -1) == 1) {
                void* vt2 = *(void**)old;
                (*(void(__thiscall**)(void*))(*(char**)vt2 + 8))(old);
            }
        }
    }
}
