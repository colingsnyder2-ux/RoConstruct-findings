// from server: 85% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();
extern "C" int __stdcall TlsSetValue(unsigned long, void*);
extern void __cdecl releaseMemory(void*);

struct Mutex {
    void lock();
    void unlock();
};

struct Lock {
    Mutex* mutex;
    bool active;
};

struct Exception {
    char storage[40];
    Exception* construct();
};

extern void __cdecl raiseException(Exception*);
extern void __cdecl finishCleanup(Lock*);
extern Mutex* cleanupMutex;
extern unsigned long tlsIndex;

struct Callback;

struct CallbackTable {
    void (__cdecl *first)();
    void (__cdecl *invoke)(void*, void*);
};

struct Callback {
    CallbackTable* table;
    unsigned long reserved;
    char context[1];
};

struct CallbackList {
    unsigned long reserved[3];
    Callback** begin;
    Callback** end;
    Callback** capacity;

    unsigned int size() const;
    Callback*& at(unsigned int index);
};

struct Values {
    void* allocation;
    unsigned long reserved[2];
    void** begin;
    void** end;
    void** capacity;

    unsigned int size() const;
    void*& at(unsigned int index);
};

extern CallbackList* callbacks;

inline unsigned int CallbackList::size() const
{
    return static_cast<unsigned int>(end - begin);
}

inline Callback*& CallbackList::at(unsigned int index)
{
    if (index >= size())
        _invalid_parameter_noinfo();
    return begin[index];
}

inline unsigned int Values::size() const
{
    return static_cast<unsigned int>(end - begin);
}

inline void*& Values::at(unsigned int index)
{
    if (index >= size())
        _invalid_parameter_noinfo();
    return begin[index];
}

void __cdecl cleanupValues(Values* values)
{
    Lock lock;
    lock.mutex = cleanupMutex;
    lock.mutex->lock();
    lock.active = true;

    for (unsigned int i = 0; i < values->size(); ++i) {
        void*& value = values->begin[i];
        Callback* callback = callbacks->at(i);
        if (!callback->table) {
            Exception exception;
            raiseException(exception.construct());
            return;
        }
        callback->table->invoke(callback->context, value);
        values->at(i) = 0;
    }

    TlsSetValue(tlsIndex, 0);
    finishCleanup(&lock);

    if (values->begin)
        releaseMemory(values->begin);

    values->begin = 0;
    values->end = 0;
    values->capacity = 0;

    releaseMemory(values->allocation);
    releaseMemory(values);

    if (lock.active)
        lock.mutex->unlock();
}
