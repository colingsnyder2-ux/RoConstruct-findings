// from server: 91% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void __cdecl free(void*);
void __cdecl operator delete(void*);

struct Interface0 {
    virtual void slot();
    unsigned char padding[12];
};

struct Interface1 {
    virtual void slot();
};

struct Interface2 {
    virtual void slot();
    unsigned char padding[8];
};

struct Interface3 {
    virtual void slot();
};

struct Interface4 {
    virtual void slot();
    unsigned char padding[28];
};

struct Interface5 {
    virtual void slot();
    unsigned char padding[28];
};

struct Interface6 {
    virtual void slot();
    unsigned char padding[28];
};

struct Interface7 {
    virtual void slot();
    unsigned char padding[28];
};

struct Interface8 {
    virtual void slot();
    unsigned char padding[28];
};

struct Interface9 {
    virtual void slot();
    unsigned char padding[104];
};

struct Base : Interface0, Interface1, Interface2, Interface3,
              Interface4, Interface5, Interface6, Interface7,
              Interface8, Interface9 {
    virtual ~Base();
};

struct Connection;

struct ConnectionOwner {
    void disconnect(Connection*);
};

struct Connection {
    virtual void slot();
    ConnectionOwner* owner;
};

struct RefCount {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct SharedRef {
    RefCount* value;
    ~SharedRef();
};

struct Buffers {
    void* first;
    void* last;
    void* limit;
    void* selectedFirst;
    void* selectedLast;
    void* selectedLimit;
    ~Buffers();
};

struct S : Base, Connection {
    SharedRef reference;
    Buffers buffers;
    virtual void slot();
    virtual ~S();
    void* deletingDestructor(unsigned int flags);
};

inline SharedRef::~SharedRef()
{
    RefCount* p = value;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

inline Buffers::~Buffers()
{
    if (selectedFirst)
        free(selectedFirst);
    selectedFirst = 0;
    selectedLast = 0;
    selectedLimit = 0;
    free(first);
}

S::~S()
{
    if (owner)
        owner->disconnect(static_cast<Connection*>(this));
}

void* S::deletingDestructor(unsigned int flags)
{
    this->S::~S();
    if (flags & 1)
        operator delete(this);
    return this;
}
