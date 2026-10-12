// from server: 86% by king_originala
extern "C" int __stdcall TlsSetValue(unsigned long, void*);
extern "C" void __cdecl _invalid_parameter_noinfo();
extern void __cdecl releaseMemory(void*);

struct Mutex {
    void lock();
    void unlock();
};

struct Lock {
    Mutex* mutex;
    bool locked;
};

struct CallError {
    char storage[40];
    CallError* construct();
};

extern __declspec(noreturn) void __cdecl raiseError(CallError*);
extern void __cdecl cleanupLock(Lock*);

struct CallbackTable {
    void* reserved;
    void (__cdecl *invoke)(void*, void*);
};

struct Callback {
    CallbackTable* table;
    unsigned long reserved;
    char object[1];
};

struct Values {
    void* allocation;
    unsigned long reserved[2];
    void** first;
    void** last;
    void** limit;
};

struct Callbacks {
    unsigned long reserved[3];
    Callback** first;
    Callback** last;
    Callback** limit;
};

extern Mutex* globalMutex;
extern Callbacks* globalCallbacks;
extern unsigned long tlsIndex;

void __cdecl sub_5a71e0(Values* values)
{
    Lock lock;
    lock.mutex = globalMutex;
    lock.mutex->lock();
    lock.locked = true;

    for (unsigned int i = 0;
         i < static_cast<unsigned int>(values->last - values->first);
         ++i) {
        void** value = values->first + i;
        Callback** first = globalCallbacks->first;
        Callback*** base = &globalCallbacks->first;

        if (i >= static_cast<unsigned int>(globalCallbacks->last - first))
            _invalid_parameter_noinfo();

        Callback* callback = (*base)[i];
        if (!callback->table) {
            CallError error;
            raiseError(error.construct());
        }

        callback->table->invoke(callback->object, *value);

        if (i >= static_cast<unsigned int>(values->last - values->first))
            _invalid_parameter_noinfo();

        values->first[i] = 0;
    }

    TlsSetValue(tlsIndex, 0);
    cleanupLock(&lock);

    if (values->first)
        releaseMemory(values->first);

    values->first = 0;
    values->last = 0;
    values->limit = 0;
    releaseMemory(values->allocation);
    releaseMemory(values);

    if (lock.locked)
        lock.mutex->unlock();
}
