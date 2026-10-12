// from server: 62% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control
{
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* pointer;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Shared::~Shared()
{
    if (control && _InterlockedExchangeAdd(&control->strong, -1) == 1)
    {
        control->dispose();
        if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
            control->destroy();
    }
}

struct Signal
{
    void invoke(int*);
};

struct Entry
{
    char padding[0x10];
    Signal signal;
};

struct Descriptor
{
    void bind(void*, Shared);
    Entry* find(void*);
};

extern Descriptor enteredDescriptor;
extern Descriptor activeDescriptor;
extern Descriptor inactiveDescriptor;
extern Descriptor leftDescriptor;

struct Workspace
{
    void reset();
};

struct S
{
    char padding0[0x14];
    char identity[0x198];
    Workspace* workspace;
    char padding1[0x14];
    int state;
    char padding2[0x38];
    int connected;

    void prepare();
    Shared getShared();
    void setState(int);
};

void S::setState(int value)
{
    const int next = value;

    if (state < 5 && next >= 5)
    {
        prepare();
        const Shared& shared = getShared();
        enteredDescriptor.bind(identity, shared);
    }

    if (next == 6)
    {
        Entry* entry = activeDescriptor.find(identity);
        if (entry)
            entry->signal.invoke(&value);
    }

    if (state == 6)
    {
        Entry* entry = inactiveDescriptor.find(identity);
        if (entry)
            entry->signal.invoke(&value);
    }

    if (state >= 5 && next < 5)
    {
        Entry* entry = leftDescriptor.find(identity);
        if (entry)
            entry->signal.invoke(&value);

        if (connected)
        {
            connected = 0;
            workspace->reset();
            workspace = 0;
        }
    }

    state = next;
}
