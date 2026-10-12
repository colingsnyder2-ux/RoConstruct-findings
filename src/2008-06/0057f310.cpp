// from server: 91% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void __cdecl free(void*);

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct B0 {
    virtual ~B0();
    unsigned long padding[3];
};

struct B1 {
    virtual ~B1();
};

struct B2 {
    virtual ~B2();
    unsigned long padding[2];
};

struct B3 {
    virtual ~B3();
};

struct B4 {
    virtual ~B4();
    unsigned long padding[7];
};

struct B5 {
    virtual ~B5();
    unsigned long padding[7];
};

struct B6 {
    virtual ~B6();
    unsigned long padding[7];
};

struct B7 {
    virtual ~B7();
    unsigned long padding[7];
};

struct B8 {
    virtual ~B8();
    unsigned long padding[7];
};

struct B9 {
    virtual ~B9();
    unsigned long padding[26];
};

struct Base : B0, B1, B2, B3, B4, B5, B6, B7, B8, B9 {
    virtual ~Base();
};

struct Connection;

struct Holder {
    virtual void unused();
    Connection* connection;
};

struct Connection {
    void disconnect(Holder*);
};

struct ControlRef {
    Control* control;
    ~ControlRef();
};

struct Buffer {
    void* allocation;
    unsigned long reserved[2];
    void* first;
    void* last;
    void* limit;
    ~Buffer();
};

struct S : Base, Holder {
    ControlRef reference;
    Buffer buffer;
    virtual ~S();
};

__forceinline ControlRef::~ControlRef()
{
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

__forceinline Buffer::~Buffer()
{
    if (first)
        free(first);
    first = 0;
    last = 0;
    limit = 0;
    free(allocation);
}

S::~S()
{
    if (connection)
        connection->disconnect(this);
}
