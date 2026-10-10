// from server: 33% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall DeleteCriticalSection_impl(void*);
extern "C" void __stdcall EnterCriticalSection_impl(void*);
extern "C" void __cdecl free_impl(void*);

struct Sub {
    void* vptr;
    void Release();
};

struct Inner {
    char pad[0x8];
    void* vptr;
    void Release();
};

struct ChatEnter {
    void* vptr0;
    void* vptr4;
    char pad8[0x8];
    void* vptr10;
    void* vptr14;
    char pad18[0x14];
    void* vptr2c;
    char pad30[0x14];
    void* vptr44;
    char pad48[0x14];
    void* vptr5c;
    char pad60[0x14];
    void* vptr74;
    char pad78[0x14];
    void* vptr8c;
    char pad90[0x4];
    void* ptr94;
    void* ptr98;
    void* ptr9c;
    char padA0[0xc];
    char critAC[0x18];
    void* ptrC4;
    char critC8[0x18];
    void* ptrA8;
    void Destructor();
};

void Sub::Release() {
    if (_InterlockedExchangeAdd((volatile long*)((char*)this + 4), -1) == 1) {
        void** vt = *(void***)this;
        ((void (__thiscall*)(void*))vt[1])(this);
    }
}

void Inner::Release() {
    if (_InterlockedExchangeAdd((volatile long*)((char*)this + 8), -1) == 1) {
        void** vt = *(void***)this;
        ((void (__thiscall*)(void*))vt[2])(this);
    }
}

void ChatEnter::Destructor() {
    *(void**)this = (void*)0x7a6594;
    *(void**)((char*)this + 4) = (void*)0x7a658c;
    *(void**)((char*)this + 0x10) = (void*)0x7a6584;
    *(void**)((char*)this + 0x14) = (void*)0x7a6574;
    *(void**)((char*)this + 0x2c) = (void*)0x7a6564;
    *(void**)((char*)this + 0x44) = (void*)0x7a6554;
    *(void**)((char*)this + 0x5c) = (void*)0x7a6544;
    *(void**)((char*)this + 0x74) = (void*)0x7a6534;
    *(void**)((char*)this + 0x8c) = (void*)0x7a6524;

    DeleteCriticalSection_impl((char*)this + 0xc8);

    if (ptrC4 != 0) {
        Sub* s = (Sub*)ptrC4;
        if (_InterlockedExchangeAdd((volatile long*)((char*)s + 4), -1) == 1) {
            void** vt = *(void***)s;
            ((void (__thiscall*)(void*))vt[1])(s);
        }
        if (_InterlockedExchangeAdd((volatile long*)((char*)s + 8), -1) == 1) {
            void** vt = *(void***)s;
            ((void (__thiscall*)(void*))vt[2])(s);
        }
    }

    DeleteCriticalSection_impl((char*)this + 0xac);

    *(void**)((char*)this + 0x8c) = (void*)0x7a6514;
    if (ptr94 != 0) {
        free_impl(ptr94);
    }
    ptr94 = 0;
    ptr98 = 0;
    ptr9c = 0;

    *(void**)((char*)this + 0x74) = (void*)0x7a6504;
    if (*(void**)((char*)this + 0x7c) != 0) {
        free_impl(*(void**)((char*)this + 0x7c));
    }
    *(void**)((char*)this + 0x7c) = 0;
    *(void**)((char*)this + 0x80) = 0;
    *(void**)((char*)this + 0x84) = 0;

    *(void**)((char*)this + 0x5c) = (void*)0x7a64f4;
    if (*(void**)((char*)this + 0x64) != 0) {
        free_impl(*(void**)((char*)this + 0x64));
    }
    *(void**)((char*)this + 0x64) = 0;
    *(void**)((char*)this + 0x68) = 0;
    *(void**)((char*)this + 0x6c) = 0;

    *(void**)((char*)this + 0x44) = (void*)0x7a64e4;
    if (*(void**)((char*)this + 0x4c) != 0) {
        free_impl(*(void**)((char*)this + 0x4c));
    }
    *(void**)((char*)this + 0x4c) = 0;
    *(void**)((char*)this + 0x50) = 0;
    *(void**)((char*)this + 0x54) = 0;

    *(void**)((char*)this + 0x2c) = (void*)0x7a64d4;
    if (*(void**)((char*)this + 0x34) != 0) {
        free_impl(*(void**)((char*)this + 0x34));
    }
    *(void**)((char*)this + 0x34) = 0;
    *(void**)((char*)this + 0x38) = 0;
    *(void**)((char*)this + 0x3c) = 0;

    *(void**)((char*)this + 0x14) = (void*)0x7a64c4;
    if (*(void**)((char*)this + 0x1c) != 0) {
        free_impl(*(void**)((char*)this + 0x1c));
    }
    *(void**)((char*)this + 0x1c) = 0;
    *(void**)((char*)this + 0x20) = 0;
    *(void**)((char*)this + 0x24) = 0;

    ((void (__thiscall*)(void*))0x570700)((char*)this + 4);

    *(void**)this = (void*)0x7a6470;

    if (ptrA8 != 0) {
        Inner* in = (Inner*)ptrA8;
        if (_InterlockedExchangeAdd((volatile long*)((char*)in + 8), -1) == 1) {
            void** vt = *(void***)in;
            ((void (__thiscall*)(void*))vt[2])(in);
        }
    }
}
