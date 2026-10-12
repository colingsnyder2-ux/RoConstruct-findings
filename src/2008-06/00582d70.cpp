// from server: 84% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Entry {
    void* object;
    void* control;
};

struct EntryList {
    char padding[0xC];
    Entry* first;
    Entry* last;
};

struct Result {
    char padding[0x148];
    void** first;
    void** last;
    void* reserved;
    EntryList* entries;
};

struct ReferenceCount {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;

    void release();
};

inline void ReferenceCount::release() {
    if (_InterlockedExchangeAdd(&strong, -1) == 1) {
        dispose();
        if (_InterlockedExchangeAdd(&weak, -1) == 1)
            destroy();
    }
}

struct Source {
    void* object;
    void* cached;
    ReferenceCount* control;

    Result* get(bool);
};

struct Temporary {
    void* object;
    void* cached;
    ReferenceCount* control;

    Temporary(void*);
    ~Temporary();
    Result* get(bool);
};

inline Temporary::Temporary(void* value)
    : object(value), cached(0), control(0) {
}

inline Temporary::~Temporary() {
    if (control)
        control->release();
}

struct AttachCameraCommand {
    char padding[0x14];
    Source source;
    void* object;

    bool execute();
};

bool AttachCameraCommand::execute() {
    EntryList* entries = source.get(true)->entries;
    if ((unsigned)(entries->last - entries->first) == 0)
        return false;

    Temporary temporary(object);
    Result* result = temporary.get(true);
    return (unsigned)(result->last - result->first) == 1;
}
