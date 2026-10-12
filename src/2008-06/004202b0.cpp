// from server: 54% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Count {
    Control* control;

    Count& operator=(const Count&);

    ~Count() {
        Control* p = control;
        if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
};

struct Shared {
    void* object;
    Count count;

    Shared& operator=(const Shared& other) {
        object = other.object;
        count = other.count;
        return *this;
    }
};

struct Argument {
    void* first;
    void* key;
};

struct Descriptor {
    unsigned char padding[0x130];
    unsigned char enabled;
    unsigned char requiresFirst;
    unsigned char requiresSecond;
};

struct Manager {
    Descriptor* invoke(const Argument*, int);
};

extern char registrationData;
extern void __cdecl registrationCallback();
extern void __cdecl registerCallback(void (__cdecl*)(), void*);
extern void* __cdecl excludedKey();
extern Shared __cdecl acquireManager();
extern Descriptor* __cdecl currentDescriptor();
extern Shared __cdecl createObject(void*);

struct CInsertObjectDialog {
    void insert(const Argument*);
};

void CInsertObjectDialog::insert(const Argument* argument) {
    registerCallback(registrationCallback, &registrationData);

    if (argument->key == excludedKey())
        return;

    Descriptor* descriptor;
    {
        Shared manager = acquireManager();
        descriptor = static_cast<Manager*>(manager.object)->invoke(argument, 0);
    }

    Descriptor* current = currentDescriptor();
    if (!descriptor)
        return;
    if (descriptor->requiresFirst && !current->enabled)
        return;
    if (descriptor->requiresSecond && !current->requiresFirst)
        return;
    if (!descriptor->enabled)
        return;

    Shared object = { 0, { 0 } };
    object = createObject(argument->key);
}
