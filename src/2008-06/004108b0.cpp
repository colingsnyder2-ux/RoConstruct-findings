// from server: 90% by king_originala
struct Base {
    virtual ~Base();
    char storage[0xF4];
    Base();
};

struct Parent : Base {
    unsigned long reserved;
    Parent();
};

inline Parent::Parent() : reserved(0)
{
}

struct Member {
    char storage[0x1C];
    Member();
    ~Member();
};

struct Buffer {
    char storage[0x1A8];
    Buffer();
    ~Buffer();
};

struct Connection {
    void *pointer;
    Connection();
    ~Connection();
};

inline Connection::Connection() : pointer(0)
{
}

extern void (__thiscall *initializeLock)(void *);

struct Lock {
    unsigned long storage;
    Lock();
    ~Lock();
};

inline Lock::Lock()
{
    initializeLock(this);
}

extern void * __cdecl getContext();
extern void __cdecl registerContext(void *);

struct S : Parent {
    Member member;
    unsigned long count;
    Buffer buffer;
    Connection connection;
    bool flag1;
    bool flag2;
    Lock lock;

    S();
    virtual ~S();
};

S::S()
    : count(0),
      flag1(false),
      flag2(false)
{
    registerContext(getContext());
}
