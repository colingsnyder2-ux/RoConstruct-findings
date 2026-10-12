// from server: 70% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl releaseMemory(void*);

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    Control* control;
    __forceinline ~Shared();
};

struct Buffer {
    void* data;
    __forceinline ~Buffer();
};

struct Connection {
    unsigned long table;
    struct Owner* owner;
};

struct Owner {
    void disconnect(Connection*);
};

struct Base {
    unsigned char pad04[12];
    unsigned long table10;
    unsigned long table14;
    unsigned char pad18[8];
    unsigned long table20;
    unsigned long table24;
    unsigned char pad28[28];
    unsigned long table44;
    unsigned char pad48[28];
    unsigned long table64;
    unsigned char pad68[28];
    unsigned long table84;
    unsigned char pad88[28];
    unsigned long tableA4;
    unsigned char padA8[28];
    unsigned long tableC4;
    unsigned char padC8[104];
    virtual ~Base();
};

struct S : Base {
    Connection connection;
    Shared shared;
    Buffer buffer;
    unsigned long reserved[2];
    void* first;
    void* last;
    void* end;
    virtual ~S();
};

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

__forceinline Buffer::~Buffer()
{
    releaseMemory(data);
}

S::~S()
{
    table10 = 0x830934;
    table14 = 0x83092c;
    table20 = 0x830924;
    table24 = 0x830914;
    table44 = 0x830904;
    table64 = 0x8308f4;
    table84 = 0x8308e4;
    tableA4 = 0x8308d4;
    tableC4 = 0x8308c4;
    connection.table = 0x8308bc;
    if (connection.owner)
        connection.owner->disconnect(&connection);
    if (first)
        releaseMemory(first);
    first = 0;
    last = 0;
    end = 0;
}
