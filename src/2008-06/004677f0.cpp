// from server: 96% by king_originala
extern "C" void __stdcall EnterCriticalSection(void *);
extern "C" void __stdcall LeaveCriticalSection(void *);

struct Lock {
    void *section;
    bool held;
    Lock(void *);
    ~Lock();
};

__forceinline Lock::Lock(void *p) : section(p), held(false) {
    EnterCriticalSection(section);
    held = true;
}

__forceinline Lock::~Lock() {
    if (held)
        LeaveCriticalSection(section);
}

struct Device;

struct DeviceTable {
    char padding[0x20];
    void (__stdcall *releaseInput)(Device *);
};

struct Device {
    DeviceTable *table;
};

struct DxUserInput {
    char storage[0x17c];
    Device *device;
    char padding[0x11];
    bool requested;
    char padding2;
    bool active;

    void enableInput();
    void updateInput();
};

void DxUserInput::updateInput() {
    Lock lock(storage + 0x34);
    if (device && active != requested) {
        if (requested) {
            enableInput();
        } else {
            device->table->releaseInput(device);
            active = false;
        }
    }
}
