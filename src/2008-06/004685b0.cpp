// from server: 2% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" {
    extern void (__stdcall *EnterCriticalSection)(void*);
    extern void (__stdcall *LeaveCriticalSection)(void*);
    extern int (__stdcall *PostMessageA)(void*, unsigned int, unsigned int, long);
}

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    Control* control;
    void* object;
};

struct Vector2 {
    float x;
    float y;
};

struct InputEvent {
    int type;
    int a;
    int b;
    int c;
    int d;
};

struct DxUserInput {
    char padding0[0x34];
    char criticalSection[0x18];
    char padding1[0x120];
    void* window;
    char padding2[0x8];
    void* game;
    char padding3[0x8];
    Shared shared;
    char padding4[0x8];
    unsigned char flag192;

    void method467880(void*, void*, int);
    void method467f10(void*);
    void method4684a0(int, void*);
    void method467440(void*);
    void method467a00(void*);
    void method469340(void*, void*, void*);
    void method509ba0();
    void method5122d0(void*);
    void method5773c0();
    void method5a0220(void*);
    void method411b40();
    void method6a1520();

    void processInput();
};

void DxUserInput::processInput()
{
    EnterCriticalSection(criticalSection);

    int count = 0;
    int i;
    Vector2 cursor;
    cursor.x = 0.0f;
    cursor.y = 0.0f;
    unsigned char flag13 = 0;

    for (i = 0; i < count; i++) {
        InputEvent* ev = (InputEvent*)((char*)0 + i * 0x14);
        switch (ev->type) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
            break;
        }
    }

    LeaveCriticalSection(criticalSection);
}
