// from server: 49% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall DeleteCriticalSection(void*);

struct Sub_005E5A80 {
    void f(void*);
};

struct Sub_00467770 {
    void f();
};

extern "C" void __cdecl sub_006A094A(void*);

struct DxUserInput {
    void dtor();
};

void DxUserInput::dtor()
{
    char* base = (char*)this;
    *(int*)(base + 0) = 0x81c404;
    *(int*)(base + 0x28) = 0x81c3f8;
    *(int*)(base + 0x2c) = 0x81c3ec;

    if (*(int*)(base + 0x188)) {
        ((Sub_005E5A80*)(*(int*)(base + 0x188) + 0x130))->f((void*)(base + 0x2c));
    }
    if (*(int*)(base + 0x188)) {
        ((Sub_005E5A80*)(*(int*)(base + 0x188) + 0x170))->f((void*)(base + 0x28));
    }

    if (*(int*)(base + 0x178)) {
        void* p = *(void**)(base + 0x178);
        (*(void(__thiscall**)(void*, int))(*(int*)p + 0x20))(p, 1);
        p = *(void**)(base + 0x178);
        if (p) {
            (*(void(__thiscall**)(void*, int))(*(int*)p + 8))(p, 1);
            *(int*)(base + 0x178) = 0;
        }
    }

    if (*(int*)(base + 0x17c)) {
        void* p = *(void**)(base + 0x17c);
        (*(void(__thiscall**)(void*, int))(*(int*)p + 0x20))(p, 1);
        p = *(void**)(base + 0x17c);
        if (p) {
            (*(void(__thiscall**)(void*, int))(*(int*)p + 8))(p, 1);
            *(int*)(base + 0x17c) = 0;
        }
    }

    if (*(int*)(base + 0x174)) {
        void* p = *(void**)(base + 0x174);
        if (p) {
            (*(void(__thiscall**)(void*, int))(*(int*)p + 8))(p, 1);
            *(int*)(base + 0x174) = 0;
        }
    }

    sub_006A094A(*(void**)(base + 0x50));

    {
        int* p = *(int**)(base + 0x18c);
        if (p) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1) {
                (*(void(__thiscall**)(void*))(*(int*)p + 4))(p);
            }
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1) {
                (*(void(__thiscall**)(void*))(*(int*)p + 8))(p);
            }
        }
    }

    {
        int* p = *(int**)(base + 0x184);
        if (p) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1) {
                (*(void(__thiscall**)(void*))(*(int*)p + 4))(p);
            }
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1) {
                (*(void(__thiscall**)(void*))(*(int*)p + 8))(p);
            }
        }
    }

    {
        int* p = *(int**)(base + 0x17c);
        if (p) {
            (*(void(__thiscall**)(void*))(*(int*)p + 8))(p);
        }
    }
    {
        int* p = *(int**)(base + 0x178);
        if (p) {
            (*(void(__thiscall**)(void*))(*(int*)p + 8))(p);
        }
    }
    {
        int* p = *(int**)(base + 0x174);
        if (p) {
            (*(void(__thiscall**)(void*))(*(int*)p + 8))(p);
        }
    }

    DeleteCriticalSection((void*)(base + 0x34));

    ((Sub_00467770*)base)->f();
}
