// from server: 79% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall DeleteCriticalSection(void*);
extern "C" void __cdecl sub_006a094a(void*);

struct Base {
    unsigned long vtable;
    char data[0x24];
    ~Base();
};

struct Registry {
    void remove(void*);
};

struct Device;
struct DeviceTable {
    void (__stdcall *slot0)(Device*);
    void (__stdcall *slot1)(Device*);
    unsigned long (__stdcall *release)(Device*);
    void (__stdcall *slots3[5])(Device*);
    void (__stdcall *stop)(Device*);
};

struct Device {
    DeviceTable* table;
};

struct DeviceHolder {
    Device* p;

    void reset()
    {
        if (p) {
            p->table->release(p);
            p = 0;
        }
    }

    ~DeviceHolder()
    {
        if (p)
            p->table->release(p);
    }
};

struct Control {
    virtual void slot0() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long references;
    volatile long weakReferences;
};

struct SharedHolder {
    void* p;
    Control* control;

    ~SharedHolder()
    {
        Control* c = control;
        if (c) {
            if (_InterlockedExchangeAdd(&c->references, -1) == 1) {
                c->dispose();
                if (_InterlockedExchangeAdd(&c->weakReferences, -1) == 1)
                    c->destroy();
            }
        }
    }
};

struct CriticalSection {
    char data[24];

    ~CriticalSection()
    {
        DeleteCriticalSection(this);
    }
};

struct S : Base {
    unsigned long secondaryVtable;
    unsigned long tertiaryVtable;
    unsigned long padding30;
    CriticalSection critical;
    unsigned long padding4c;
    void* buffer;
    char padding54[0x120];
    DeviceHolder device;
    DeviceHolder keyboard;
    DeviceHolder mouse;
    SharedHolder owner;
    SharedHolder service;

    ~S();
};

S::~S()
{
    vtable = 0x81c404;
    secondaryVtable = 0x81c3f8;
    tertiaryVtable = 0x81c3ec;

    if (service.p)
        ((Registry*)((char*)service.p + 0x130))->remove(&tertiaryVtable);
    if (service.p)
        ((Registry*)((char*)service.p + 0x170))->remove(&secondaryVtable);

    if (keyboard.p) {
        keyboard.p->table->stop(keyboard.p);
        keyboard.reset();
    }

    if (mouse.p) {
        mouse.p->table->stop(mouse.p);
        mouse.reset();
    }

    if (device.p)
        device.reset();

    sub_006a094a(buffer);
}
