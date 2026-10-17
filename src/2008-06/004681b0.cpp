// from server: 28% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct SharedPtr {
    void* object;
    Control* control;
};

struct InputObject {
    void* vtable;
    unsigned short keyCode;
    unsigned short reserved;
};

struct S {
    unsigned char pad0[0x34];
    unsigned char critSection[0x18];
    unsigned char pad1[0x1c];
    void* window;
    unsigned char pad2[0x14];
    InputObject* map;
    unsigned long mapSize;
    unsigned char pad3[0x10];
    unsigned char pad4[0x114];
    unsigned long field17c;
    SharedPtr shared;
    unsigned char field193;
    void f();
};

extern "C" void __stdcall EnterCriticalSection(void*);
extern "C" void __stdcall LeaveCriticalSection(void*);
extern "C" void* __stdcall GetKeyboardLayout(unsigned long);
extern "C" unsigned int __stdcall MapVirtualKeyExA(unsigned int, unsigned int, void*);
extern "C" int __stdcall PostMessageA(void*, unsigned int, unsigned int, long);

extern "C" void __cdecl func_6a1520();
extern "C" char __cdecl func_467880(S*, void*, void*);
extern "C" void __cdecl func_411b40(SharedPtr*);
extern "C" int __cdecl func_469f50(void*);
extern "C" int __cdecl func_469360(int);
extern "C" int __cdecl func_469c60(int);
extern "C" void* __cdecl func_6a0926();
extern "C" void __cdecl func_467a00(S*, void*);
extern "C" void __cdecl func_5773c0(void*);

extern unsigned long g_96dfe8;
extern void* g_96dfe4;

void S::f()
{
    func_6a1520();

    EnterCriticalSection(critSection);

    unsigned long local20 = 0x800;
    void* local2c = critSection;

    char result = func_467880(this, &local20, &field17c);
    if (!result) {
        field193 = 0;
        LeaveCriticalSection(critSection);
        return;
    }

    LeaveCriticalSection(critSection);

    SharedPtr sp;
    sp.object = shared.object;
    sp.control = shared.control;
    if (sp.control != 0) {
        _InterlockedExchangeAdd(&sp.control->strong, 1);
    }

    func_411b40(&sp);

    if (mapSize == 0)
        goto done;

    {
        InputObject* entry = map;
        unsigned long i = 0;
        do {
            unsigned long flags = *(unsigned long*)((char*)entry + 0);
            int keyCode = *(int*)((char*)entry - 4);
            int isDown = (flags >> 7) & 1;

            int mapped = func_469f50(&pad0[0x34]);
            int vk = func_469360(keyCode);

            if (isDown && window != 0) {
                if ((g_96dfe8 & 1) == 0) {
                    g_96dfe8 |= 1;
                    g_96dfe4 = GetKeyboardLayout(0);
                }
                int scan = MapVirtualKeyExA(keyCode, 1, g_96dfe4);
                if (scan == 0) {
                    scan = func_469c60(vk);
                }
                if (scan == 0x2c) {
                    PostMessageA(window, 0x111, 0x180fc, 0);
                } else if (scan == 0x70 || scan == 0x73) {
                    MapVirtualKeyExA(keyCode, 2, g_96dfe4);
                    int mods = 0;
                    if ((mapped & 0x300) != 0) mods |= 0x10;
                    if ((mapped & 0xc0) != 0) mods |= 8;
                    if ((mapped & 3) != 0) mods |= 4;
                    unsigned long j = 0;
                    if (mapSize != 0) {
                        InputObject* e2 = map;
                        do {
                            if (e2->keyCode == (unsigned short)vk) {
                                if (((unsigned long)e2->vtable & 0x1c) == mods) {
                                    unsigned short w = *(unsigned short*)((char*)e2 + 4);
                                    PostMessageA(window, 0x111, w | 0x10000, 0);
                                    goto next;
                                }
                            }
                            j++;
                            e2 = (InputObject*)((char*)e2 + 6);
                        } while (j < mapSize);
                    }
                } else {
                    void* p = func_6a0926();
                    void* q = *(void**)((char*)p + 4);
                    void* r = *(void**)((char*)q + 0x20);
                    if (*(unsigned char*)((char*)r + 0x104) == 0) {
                        MapVirtualKeyExA(keyCode, 2, g_96dfe4);
                    }
                }
            }

            {
                int a = isDown ? 0 : 1;
                int b = a + 0xa;
                func_467a00(this, 0);
            }

        next:
            entry = (InputObject*)((char*)entry + 0x14);
            i++;
        } while (i < mapSize);
    }

done:
    func_5773c0(&sp);
}
