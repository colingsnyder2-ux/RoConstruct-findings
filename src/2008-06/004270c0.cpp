// from server: 97% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

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
    Shared();
    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared() : object(0), control(0)
{
}

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct OwnedObject {
    virtual void unused();
    virtual ~OwnedObject();
};

struct Owned {
    OwnedObject* object;
    ~Owned();
};

__forceinline Owned::~Owned()
{
    if (object)
        delete object;
}

struct PrimaryBase {
    virtual ~PrimaryBase();
    char data[0x50];
};

struct SecondaryBase {
    virtual ~SecondaryBase();
    char data[0x78];
};

struct Base : PrimaryBase, SecondaryBase {
    virtual ~Base();
};

struct RegistrationPrimary {
    virtual ~RegistrationPrimary();
};

struct RegistrationSecondary {
    virtual ~RegistrationSecondary();
};

struct Registration : RegistrationPrimary, RegistrationSecondary {
    virtual ~Registration();
};

struct MemberBase {
    virtual ~MemberBase();
    unsigned long data[2];
};

struct Member : MemberBase {
    virtual ~Member();
};

__forceinline Member::~Member()
{
}

struct Collection {
    char data[0x20];
    ~Collection();
};

struct Connection {
    char data[0x20];
    ~Connection();
};

struct S : Base, Registration {
    Member member;
    Collection collection;
    Connection connection;
    Shared shared;
    Owned owned;

    void reset(Shared value);
    virtual ~S();
};

S::~S()
{
    reset(Shared());
}
