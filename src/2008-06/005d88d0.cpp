// from server: 62% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl free(void*);

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

struct Storage {
    void* buffer;
    unsigned long reserved[2];
    void* first;
    void* last;
    void* limit;
    ~Storage();
};

inline Storage::~Storage()
{
    if (first)
        free(first);
    first = 0;
    last = 0;
    limit = 0;
    free(buffer);
}

struct Base {
    unsigned long words[76];
    ~Base();
};

struct Connection {
    void __thiscall disconnect(void*);
};

struct S : Base {
    unsigned long connectionTable;
    Shared connection;
    Storage storage;
    ~S();
};

S::~S()
{
    words[0] = 0x0083d544;
    words[4] = 0x0083d538;
    words[5] = 0x0083d530;
    words[8] = 0x0083d528;
    words[9] = 0x0083d518;
    words[17] = 0x0083d508;
    words[25] = 0x0083d4f8;
    words[33] = 0x0083d4e8;
    words[41] = 0x0083d4d8;
    words[49] = 0x0083d4c8;
    connectionTable = 0x0083d4c0;

    if (connection.object)
        static_cast<Connection*>(connection.object)->disconnect(&connectionTable);
}
