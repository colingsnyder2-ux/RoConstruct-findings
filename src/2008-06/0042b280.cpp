// from server: 100% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Payload {
    ~Payload();
};

struct CountBase {
    int strong;
    int weak;

    CountBase();
    virtual ~CountBase();
    virtual void dispose() = 0;
    virtual void destroy();
    virtual void* get_deleter(const void*) = 0;
};

struct Count : CountBase {
    Payload* pointer;

    Count(Payload*);
    virtual ~Count();
    virtual void dispose();
    virtual void* get_deleter(const void*);
};

struct EventHandler {
    CountBase* count;

    EventHandler(Payload*);
};

__forceinline CountBase::CountBase()
    : strong(1), weak(1)
{
}

__forceinline Count::Count(Payload* p)
    : pointer(p)
{
}

EventHandler::EventHandler(Payload* p)
    : count(0)
{
    try {
        count = new Count(p);
    }
    catch (...) {
        delete p;
        throw;
    }
}
