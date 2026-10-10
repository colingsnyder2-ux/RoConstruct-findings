// from server: 35% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct InputObject;
struct Instance;

struct SharedPtr {
    void* px;
    void* pn;
};

struct Signal {
    void* a;
    void* b;
};

struct Mouse {
    char pad0[4];
    Signal moveSignal;
    Signal idleSignal;
    Signal button1DownSignal;
    Signal button2DownSignal;
    Signal button1UpSignal;
    Signal button2UpSignal;
    Signal wheelForwardSignal;
    Signal wheelBackwardSignal;
    Signal keyDownSignal;
    Signal keyUpSignal;
    char pad1[0x16c - 4 - 10*8];
    int state;
    char pad2[0x1b0 - 0x16c - 4];
    void* ptr1b0;
    void* ptr1b4;

    void update(int command);
};

extern "C" void __cdecl sub_5d39d0();
extern "C" void __cdecl sub_5d43d0();
extern "C" void __cdecl sub_495b10();
extern "C" void __cdecl sub_570270();
extern "C" void __cdecl sub_4b0360();
extern "C" void __cdecl sub_57ce80();

void Mouse::update(int command)
{
    if (state < 5 && command >= 5) {
        sub_5d39d0();
        SharedPtr sp;
        sub_5d43d0();
        sub_495b10();
        if (sp.pn) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)sp.pn + 4), -1) == 1) {
                void** vt = *(void***)sp.pn;
                ((void(__thiscall*)(void*))vt[1])(sp.pn);
                if (_InterlockedExchangeAdd((volatile long*)((char*)sp.pn + 8), -1) == 1) {
                    void** vt2 = *(void***)sp.pn;
                    ((void(__thiscall*)(void*))vt2[2])(sp.pn);
                }
            }
        }
    }
    if (command == 6) {
        sub_570270();
    }
    if (state == 6) {
        sub_570270();
    }
    if (state >= 5 && command < 5) {
        sub_570270();
        if (ptr1b0 != 0) {
            void* p = ptr1b4;
            ptr1b0 = 0;
            sub_57ce80();
            ptr1b4 = 0;
        }
    }
    state = command;
}
