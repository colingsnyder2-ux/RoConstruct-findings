// from server: 58% by EspClaude
// from server: 56% by coldek
// roc 2008-06 004681b0  unit: DxUserInput  size: 738 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004681b0
//

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(void*);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void*);
extern "C" __declspec(dllimport) void* __stdcall GetKeyboardLayout(unsigned long);
extern "C" __declspec(dllimport) unsigned int __stdcall MapVirtualKeyExA(unsigned int, unsigned int, void*);
extern "C" __declspec(dllimport) int __stdcall PostMessageA(void*, unsigned int, unsigned int, long);

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    Shared(const Shared& other);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

struct Guard {
    void* data[3];
    Guard(Shared);
    ~Guard();
};

struct Lock {
    void* section;
    Lock(void*);
    ~Lock();
};

inline Lock::Lock(void* p) : section(p)
{
    EnterCriticalSection(section);
}

inline Lock::~Lock()
{
    LeaveCriticalSection(section);
}

struct InputRecord {
    unsigned int key;
    unsigned int data;
    unsigned int time;
    unsigned int sequence;
    unsigned int extra;
};

struct Event {
    int type;
    void* sender;
    int key;
    int modifiers;
    unsigned short character;
    unsigned short unused;
};

struct Accelerator {
    unsigned char flags;
    unsigned char padding;
    unsigned short key;
    unsigned short command;
};

struct Window {
    char padding[32];
    void* handle;
};

struct Settings {
    char padding[260];
    unsigned char enabled;
};

struct SettingsHolder {
    char padding[32];
    Settings* settings;
};

struct Runtime {
    char padding[4];
    SettingsHolder* holder;
};

extern Runtime* __cdecl getRuntime();
extern int __cdecl getModifiers(void*);
extern int __cdecl translateKey(unsigned int);
extern int __cdecl getKeyCode(int);

struct S {
    char pad0[52];
    char criticalSection[24];
    Window* window;
    Accelerator* accelerators;
    unsigned int acceleratorCount;
    char pad1[16];
    char keyboardState[276];
    unsigned int device;
    Shared shared;
    char pad2[11];
    unsigned char active;

    bool readInput(InputRecord*, unsigned int*, unsigned int);
    void dispatch(Event*);
    void f();
};

void S::f()
{
    InputRecord records[2048];
    unsigned int count = 2048;
    {
        Lock lock(criticalSection);
        if (!readInput(records, &count, device)) {
            active = 0;
            return;
        }
    }

    Guard guard(shared);
    for (unsigned int i = 0; i < count; ++i) {
        unsigned int key = records[i].key;
        bool down = ((records[i].data >> 7) & 1) != 0;
        int modifiers = getModifiers(keyboardState);
        int code = translateKey(key);

        if (down && window) {
            static void* layout = GetKeyboardLayout(0);
            unsigned int virtualKey = MapVirtualKeyExA(key, 1, layout);
            if (!virtualKey)
                virtualKey = getKeyCode(code);

            if (virtualKey == 44) {
                PostMessageA(window->handle, 273, 98556, 0);
            } else if (virtualKey == 112 || virtualKey == 115 ||
                       !getRuntime()->holder->settings->enabled) {
                unsigned int character = MapVirtualKeyExA(virtualKey, 2, layout);
                unsigned int flags =
                    ((modifiers & 0x300) ? 16 : 0) |
                    ((static_cast<signed char>(modifiers & 0xc0)) ? 8 : 0) |
                    ((static_cast<signed char>(modifiers & 3)) ? 4 : 0);

                unsigned int j;
                for (j = 0; j < acceleratorCount; ++j) {
                    Accelerator* a = accelerators + j;
                    if (a->key == ((a->flags & 1)
                                     ? virtualKey
                                     : static_cast<int>(static_cast<signed char>(character))) &&
                        flags == (a->flags & 28))
                        break;
                }

                if (j < acceleratorCount) {
                    PostMessageA(window->handle, 273,
                                 accelerators[j].command | 0x10000, 0);
                    continue;
                }
            }
        }

        Event event;
        event.type = !down + 10;
        event.sender = this;
        event.key = code;
        event.modifiers = modifiers;
        event.character = 0;
        event.unused = 0;
        dispatch(&event);
    }
}
