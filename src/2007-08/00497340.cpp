// from server: 31% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Players {
    char pad[0x11c];
    void* field_11c;
    char pad2[0x138 - 0x120];
    void* field_138;
    void* field_140;
};

struct Player {
    char pad[0xcc];
    char pad2[0xe0 - 0xcc];
    char pad3[0x15c - 0xe0];
    void* field_15c;
};

extern "C" void* __cdecl sub_56c3b0(void*);
extern "C" void __cdecl sub_56c0a0(void*, int, const char*, const char*);
extern "C" void __cdecl sub_493930(void*);
extern "C" void __cdecl sub_4939a0(void*);
extern "C" void __cdecl sub_496dd0(void*, void*, void*);
extern "C" void __cdecl sub_49f820(void*);
extern "C" void __cdecl sub_49f930(void*);
extern "C" void __cdecl sub_4a0590(void*, void*);
extern "C" void __cdecl sub_4a05c0(void*, int);
extern "C" void __cdecl sub_4a0660(void*, void*, void*);
extern "C" void __cdecl sub_412dc0(void*, void*);
extern "C" void __cdecl sub_630b9e(void*, void*);
extern "C" void __stdcall sub_77e690(void*, void*);
extern "C" void __stdcall sub_77e698(void*, const char*);
extern "C" void __stdcall sub_77e6ac(void*);

extern void* g_88e334;
extern void* g_88e338;

struct BoundFuncDesc {
    void reportAbuse(Player* player, void* arg2, void* arg3, void* arg4, void* arg5, void* arg6, void* arg7, void* arg8);
};

void BoundFuncDesc::reportAbuse(Player* player, void* arg2, void* arg3, void* arg4, void* arg5, void* arg6, void* arg7, void* arg8) {
    Players* self = (Players*)this;
    char vm[0x160];
    if (self->field_11c != 0) {
        const char* name;
        if (player != 0) {
            if (*(unsigned int*)((char*)player + 0xe0) < 0x10) {
                name = (char*)player + 0xcc;
            } else {
                name = *(char**)((char*)player + 0xcc);
            }
        } else {
            name = (const char*)0x79bcfc;
        }
        void* tmp;
        sub_56c3b0(&tmp);
        void* str = *(void**)tmp;
        sub_56c0a0(str, 1, (const char*)0x79bcdc, name);
        void* ref = *(void**)((char*)&tmp + 0x18);
        if (ref != 0) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)ref + 4), -1) == 1) {
                void** vt = *(void***)ref;
                ((void(__thiscall*)(void*))vt[1])(ref);
                if (_InterlockedExchangeAdd((volatile long*)((char*)ref + 8), -1) == 1) {
                    void** vt2 = *(void***)ref;
                    ((void(__thiscall*)(void*))vt2[2])(ref);
                }
            }
        }
        sub_493930(vm);
        void* a = self->field_138 ? *(void**)((char*)self->field_138 + 0x15c) : 0;
        *(void**)(vm + 0) = a;
        void* b = player ? *(void**)((char*)player + 0x15c) : 0;
        *(void**)(vm + 4) = b;
        sub_77e690(vm, vm + 0x15c);
        void* f = self->field_11c;
        sub_496dd0(f, vm, (char*)self + 0x120);
        sub_4939a0(vm);
    } else {
        void* tmp;
        sub_56c3b0(&tmp);
        void* str = *(void**)tmp;
        sub_56c0a0(str, 1, (const char*)0x79bcac, 0);
        void* ref = *(void**)((char*)&tmp + 0x14);
        if (ref != 0) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)ref + 4), -1) == 1) {
                void** vt = *(void***)ref;
                ((void(__thiscall*)(void*))vt[1])(ref);
                if (_InterlockedExchangeAdd((volatile long*)((char*)ref + 8), -1) == 1) {
                    void** vt2 = *(void***)ref;
                    ((void(__thiscall*)(void*))vt2[2])(ref);
                }
            }
        }
        if (self->field_140 == 0) {
            sub_77e698(&tmp, (const char*)0x79bc80);
            sub_412dc0(&tmp, (char*)&tmp + 0x1c);
            sub_630b9e((char*)&tmp + 0x1c, (void*)0x8410c0);
        }
        char buf[0x60];
        sub_49f820(buf);
        sub_4a05c0(buf, 0x4d);
        void* a = self->field_138 ? *(void**)((char*)self->field_138 + 0x15c) : 0;
        sub_4a0590(buf, a);
        void* b = player ? *(void**)((char*)player + 0x15c) : 0;
        sub_4a0590(buf, b);
        sub_4a0660(buf, buf, buf + 0x1c);
        void* p = self->field_140;
        void** vt = *(void***)p;
        void* fn = vt[0x34/4];
        ((void(__thiscall*)(void*, void*, int, int, int, void*, void*, int))fn)(p, buf, 2, 2, 1, g_88e334, g_88e338, 1);
        sub_49f930(buf);
    }
    sub_77e6ac(vm + 0x15c);
}
