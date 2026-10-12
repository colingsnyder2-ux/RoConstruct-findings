// from server: 95% by king_originala
typedef unsigned int DWORD;

extern DWORD (__stdcall *currentThreadId)();

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct StringData {
    unsigned int reserved;
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned int length;
    unsigned int capacity;
};

struct Log {
    static StringData* get();
};

struct String {
    unsigned char storage[28];
    String(const char*);
    ~String();
};

extern String* (__thiscall *constructString)(String*, const char*);

struct LogBase {
    virtual ~LogBase();
    unsigned int reserved;
    DWORD threadId;
    String name;
    LogBase(const char*);
};

struct ThreadLog : LogBase {
    virtual ~ThreadLog();
    ThreadLog();
};

struct ThreadStorage {
    ThreadLog* get();
    void set(ThreadLog*);
    void dispose(ThreadLog*);
    void reset(ThreadLog*);
};

extern ThreadStorage* storage;
extern int initializationFlag;
extern void __cdecl initializeStorage();
extern void __cdecl callOnce(void (__cdecl*)(), int&);

inline String::String(const char* text) {
    constructString(this, text);
}

inline LogBase::LogBase(const char* text)
    : reserved(0), threadId(currentThreadId()), name(text) {
}

inline ThreadLog::ThreadLog()
    : LogBase(reinterpret_cast<const char*>(Log::get())) {
}

inline void ThreadStorage::reset(ThreadLog* value) {
    ThreadLog* previous = get();
    if (previous != value) {
        set(value);
        if (previous)
            dispose(previous);
    }
}

ThreadLog* __cdecl getThreadLog() {
    callOnce(initializeStorage, initializationFlag);

    ThreadLog* result = storage->get();
    if (result)
        return result;

    result = new ThreadLog;
    storage->reset(result);
    return result;
}
