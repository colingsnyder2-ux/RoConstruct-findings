// from server: 90% by colin
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

extern "C" unsigned long (__stdcall *GetCurrentThreadId)();
unsigned long __cdecl getContext();

struct ListenerData;

struct BackLink
{
    ListenerData* owner;
    BackLink(ListenerData*);
};

struct LinkHolder
{
    BackLink* link;

    LinkHolder(ListenerData*);
    ~LinkHolder();
};

struct Storage
{
    void* first;
    void* last;
    void* limit;

    Storage();
    ~Storage();
};

struct ListenerData
{
    LinkHolder holder;
    unsigned long reserved[2];
    Storage storage;

    ListenerData();
    ~ListenerData();
};

struct S
{
    virtual ~S();

    ListenerData data;
    unsigned long thread;
    unsigned long context;

    S();
};

__forceinline BackLink::BackLink(ListenerData* value)
    : owner(value)
{
}

__forceinline LinkHolder::LinkHolder(ListenerData* value)
    : link(new BackLink(value))
{
}

__forceinline Storage::Storage()
    : first(0), last(0), limit(0)
{
}

__forceinline ListenerData::ListenerData()
    : holder(this)
{
}

S::S()
{
    volatile int guard = 1;
    thread = GetCurrentThreadId();
    context = getContext();
    (void)guard;
}
