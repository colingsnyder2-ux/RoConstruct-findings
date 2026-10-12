// from server: 82% by king_originala
struct Text;
extern void (__thiscall *constructText)(void*, const char*);
extern void (__thiscall *destroyText)(void*);
extern "C" __int64 (__cdecl *readTime)(__int64*);

struct Text {
    unsigned allocator;
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned length;
    unsigned capacity;

    ~Text();
    const char* c_str() const;
};

inline Text::~Text() {
    destroyText(this);
}

__forceinline const char* Text::c_str() const {
    if (capacity >= 16)
        return pointer;
    return buffer;
}

extern Text __cdecl formatText(const char*, char*);

struct Stream {
    Stream& appendText(int, const char*);
};

struct StreamProvider {
    virtual Stream* getStream() = 0;
};

extern StreamProvider* streamProvider;

struct Mutex {
    void* handle;
    char kind;
    void acquire();
    void release();
};

struct Lock {
    Mutex* mutex;
    bool locked;
    Lock(Mutex&);
    ~Lock();
};

__forceinline Lock::Lock(Mutex& m) : mutex(&m) {
    mutex->acquire();
    locked = true;
}

inline Lock::~Lock() {
    if (locked)
        mutex->release();
}

struct Record {
    int severity;
    unsigned allocator;
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned length;
    unsigned capacity;
    __int64 timestamp;

    Record(int, const char*);
    Record(const Record&);
};

__forceinline Record::Record(int s, const char* p) : severity(s) {
    constructText(&allocator, p);
    readTime(&timestamp);
}

struct Provider {
    char prefix[16];
    void** begin;
    void** end;
    char reserved[16];
    Mutex mutex;

    void emit(Record);
};

void __cdecl output(Provider* provider, volatile int severity, const char* format, ...)
{
    Text text = formatText(format, reinterpret_cast<char*>(&format + 1));

    if (streamProvider && streamProvider->getStream()) {
        int s = severity;
        if (s == 3) {
            const char* p = text.c_str();
            (streamProvider ? streamProvider->getStream() : 0)->appendText(2, p);
        } else if (s == 2) {
            const char* p = text.c_str();
            (streamProvider ? streamProvider->getStream() : 0)->appendText(1, p);
        } else if (s == 1) {
            const char* p = text.c_str();
            (streamProvider ? streamProvider->getStream() : 0)->appendText(0, p);
        }
    }

    if (static_cast<unsigned>(provider->end - provider->begin) > 0) {
        Lock lock(provider->mutex);
        if (static_cast<unsigned>(provider->end - provider->begin) > 0)
            provider->emit(Record(severity, text.c_str()));
    }
}
