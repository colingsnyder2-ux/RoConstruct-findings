// from server: 84% by king_originala
void __cdecl operator delete(void *);
extern "C" void __cdecl release(void *);

struct Storage {
    void *allocation;
    unsigned int reserved[2];
    void *begin;
    void *end;
    void *capacity;

    ~Storage();
};

struct EventData {
    Storage storage;
    unsigned int reserved;
    void *reference;

    void disconnect();
    virtual ~EventData();
};

__forceinline Storage::~Storage()
{
    if (begin)
        operator delete(begin);

    begin = 0;
    end = 0;
    capacity = 0;
    operator delete(allocation);
}

EventData::~EventData()
{
    disconnect();
    release(reference);
}
