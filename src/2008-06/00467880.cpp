// from server: 20% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall EnterCriticalSection(void*);
extern "C" void __stdcall LeaveCriticalSection(void*);

extern "C" void* __stdcall sub_802458(const char*);
extern "C" void __stdcall sub_802468(void*);
extern "C" void* __stdcall sub_802464(void*);
extern "C" void* __stdcall sub_8023e4(void*, void*, const char*);
extern "C" void* __stdcall sub_8022d4(void*);
extern "C" void* __stdcall sub_8021f4(void*);

extern "C" void* __cdecl sub_569620(void*);
extern "C" void __cdecl sub_5693a0(void*, int, void*);

struct S_func_00467880 {
    char pad0[0x34];
    char m_cs[0x18];
    char pad1[0x17c - 0x34 - 0x18];
    void* m_17c;
    char pad2[0x1a0 - 0x17c - 4];
    bool f(void* a1, void* a2, void* a3);
};

bool S_func_00467880::f(void* a1, void* a2, void* a3)
{
    EnterCriticalSection(m_cs);
    int r = ((int (__stdcall*)(void*, int, void*, void*, int))((*(void***)a3)[0x28/4]))(a3, 0x14, a2, a1, 0);
    if (r == 0) {
        LeaveCriticalSection(m_cs);
        return true;
    }
    if (r == 1) {
        const char* s = (a3 == m_17c) ? (const char*)0x81c3d0 : (const char*)0x81c3d0;
        void* str1 = sub_802458(s);
        void* str2 = sub_8023e4(str1, (void*)0x81c3bc, 0);
        void* str3 = sub_569620(str2);
        void* cstr = sub_802464(str3);
        sub_5693a0(cstr, 3, 0);
        sub_802468(str3);
        sub_802468(str1);
    } else {
        const char* s = (a3 == m_17c) ? (const char*)0x81c3d8 : (const char*)0x81c3d0;
        void* str1 = sub_802458(s);
        sub_802468(str1);
    }
    LeaveCriticalSection(m_cs);
    return false;
}
