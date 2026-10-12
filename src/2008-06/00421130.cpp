// from server: 83% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);
extern "C" unsigned long (__stdcall *GetCurrentThreadId)();
unsigned long __cdecl getValue();

struct Storage;

struct Proxy {
    Storage* storage;
    Proxy(Storage*);
};

struct Owner {
    Proxy* pointer;
    Owner(Storage*);
    ~Owner();
};

struct Storage {
    Owner owner;
    unsigned long reserved[2];
    unsigned long first;
    unsigned long second;
    unsigned long third;

    Storage();
    ~Storage();
};

struct EventDataBase {
    virtual ~EventDataBase();
    Storage storage;
    unsigned long threadId;
    unsigned long value;

    EventDataBase();
};

__forceinline Proxy::Proxy(Storage* p)
    : storage(p)
{
}

__forceinline Owner::Owner(Storage* p)
    : pointer(new Proxy(p))
{
}

__forceinline Storage::Storage()
    : owner(this), first(0), second(0), third(0)
{
}

EventDataBase::EventDataBase()
{
    threadId = GetCurrentThreadId();
    value = getValue();
}
