// from server: 89% by king_originala
struct Control {
    int modified(int);
    int length(int);
    void text(int, char*);
    void savePoint(int);
};

struct Mutex {
    void acquire();
    void release();
};

extern void (__thiscall *stringCreate)(void*, const char*);
extern void (__thiscall *stringDestroy)(void*);
extern void (__thiscall *bufferCreate)(void*);
extern void (__thiscall *bufferDestroy)(void*);
extern char* (__thiscall *bufferGet)(void*, int, int);
extern void (__thiscall *bufferRelease)(void*, int);
extern const char* (__thiscall *bufferData)(void*);

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

inline String::String(const char* p)
{
    stringCreate(this, p);
}

inline String::~String()
{
    stringDestroy(this);
}

struct Buffer {
    char* storage;
    Buffer();
    __declspec(nothrow) ~Buffer();
    char* get(int, int);
    void release(int);
    const char* data();
};

inline Buffer::Buffer()
{
    bufferCreate(this);
}

inline Buffer::~Buffer()
{
    bufferDestroy(this);
}

inline char* Buffer::get(int n, int flag)
{
    return bufferGet(this, n, flag);
}

inline void Buffer::release(int n)
{
    bufferRelease(this, n);
}

inline const char* Buffer::data()
{
    return bufferData(this);
}

struct Lock {
    Mutex* mutex;
    bool locked;
    Lock(Mutex*);
    ~Lock();
};

inline Lock::Lock(Mutex* p) : mutex(p)
{
    mutex->acquire();
    locked = true;
}

inline Lock::~Lock()
{
    if (locked)
        mutex->release();
}

struct Script {
    void update(const String&);
};

struct CScriptDoc {
    char padding0[0x138];
    Mutex* mutex;
    char padding1[8];
    Script* script;
    char padding2[12];
    bool busy;

    Control* control();
    void f();
};

void CScriptDoc::f()
{
    if (control()->modified(1) && !busy) {
        if (script) {
            Lock lock(mutex);
            int n = control()->length(1);
            Buffer buffer;
            ++n;
            control()->text(n, buffer.get(n, 1));
            buffer.release(-1);
            script->update(String(buffer.data()));
        }
        control()->savePoint(1);
    }
}
