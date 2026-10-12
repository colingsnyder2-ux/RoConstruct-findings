// from server: 84% by king_originala
void* __cdecl operator new(unsigned int);
extern "C" unsigned long (__stdcall *GetCurrentThreadId)();
extern void* __cdecl getContext();

struct StorageBase
{
    StorageBase** owner;
    void* reserved1;
    void* reserved2;

    StorageBase();
    ~StorageBase();
};

__forceinline StorageBase::StorageBase()
{
    owner = new StorageBase*(this);
}

struct Storage : StorageBase
{
    void* first;
    void* last;
    void* limit;

    Storage();
    ~Storage();
};

__forceinline Storage::Storage()
{
    first = 0;
    last = 0;
    limit = 0;
}

struct S
{
    Storage storage;
    unsigned long threadId;
    void* context;

    S();
    virtual ~S();
};

S::S()
{
    threadId = GetCurrentThreadId();
    context = getContext();
}
