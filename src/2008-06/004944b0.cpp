// from server: 98% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Count
{
    Control* control;
    Count& operator=(const Count&);
};

struct Object
{
    void set(int);
};

struct Shared
{
    Object* object;
    Count count;

    Shared(const Shared&);
    ~Shared();
    Shared& operator=(const Shared&);
    void reset();
};

__forceinline Shared::~Shared()
{
    if (count.control)
    {
        Control* p = count.control;
        if (_InterlockedDecrement(&p->strong) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

__forceinline Shared& Shared::operator=(const Shared& other)
{
    object = other.object;
    count = other.count;
    return *this;
}

extern Shared __cdecl makeShared(Object*);

struct AddedSignal
{
    char data[32];
    void notify(Shared);
};

struct RemovedSignal
{
    char data[32];
    void notify(Shared);
};

struct Connection
{
    void disconnect();
};

struct Player
{
    char data[0x130];
    AddedSignal added;
    RemovedSignal removed;
    Shared current;
    char padding[8];
    Connection connection;

    void change(Object*);
    void update();
    void notify(const void*);
};

extern bool __cdecl shouldDetach(Player*, int);
extern bool __cdecl shouldUpdate(Player*, int);
extern char propertyDescriptor;

void Player::change(Object* value)
{
    if (value == current.object)
        return;

    if (current.object)
    {
        connection.disconnect();
        Object* oldObject = current.object;
        removed.notify(makeShared(oldObject));
        if (shouldDetach(this, 0))
            current.object->set(0);
        current.reset();
    }

    if (value)
    {
        current = makeShared(value);
        Object* newObject = current.object;
        added.notify(makeShared(newObject));
        if (shouldUpdate(this, 0))
            update();
    }

    notify(&propertyDescriptor);
}
