// from server: 44% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RBX_Instance {
    void* vptr;
    void (__thiscall *destroy)(RBX_Instance*);
};

struct RBX_BackpackItem {
    void* vptr;
    void (__thiscall *destroy)(RBX_BackpackItem*);
};

struct RBX_Player {
    void* vptr;
    void (__thiscall *destroy)(RBX_Player*);
};

extern "C" int __cdecl sub_6a17c6(void*, const char*, const char*, int, int);

struct S_func_005fc230 {
    char pad0[0x1c];
    void* m_field_1c;
    int f(void* a1);
};

int S_func_005fc230::f(void* a1)
{
    int result = 0;
    void* p;

    p = (void*)sub_6a17c6(a1, (const char*)0x92907c, (const char*)0x937460, 0, 0);
    if (p != 0) {
        if (p == m_field_1c) {
            ((void (__thiscall*)(char*))0x5fc150)((char*)this - 0x16c);
        }
    } else {
        p = (void*)sub_6a17c6(a1, (const char*)0x92907c, (const char*)0x9353ec, 0, 0);
        if (p != 0) {
            ((void (__thiscall*)(char*))0x5fc1d0)((char*)this - 0x16c);
        } else {
            p = (void*)sub_6a17c6(a1, (const char*)0x92907c, (const char*)0x951950, 0, 0);
            if (p != 0) {
                ((void (__thiscall*)(char*, void*))0x5fbc80)((char*)this - 0x16c, p);
            }
        }
    }

    if (a1 != 0) {
        volatile long* ref1 = (volatile long*)((char*)a1 + 4);
        if (_InterlockedExchangeAdd(ref1, -1) == 1) {
            void** vt = *(void***)a1;
            ((void (__thiscall*)(void*))vt[1])(a1);
            volatile long* ref2 = (volatile long*)((char*)a1 + 8);
            if (_InterlockedExchangeAdd(ref2, -1) == 1) {
                void** vt2 = *(void***)a1;
                ((void (__thiscall*)(void*))vt2[2])(a1);
            }
        }
    }

    return result;
}
