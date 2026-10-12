// from server: 83% by king_originala
void* __cdecl operator new(unsigned int);
extern "C" unsigned long (__stdcall *GetCurrentThreadId)();
extern unsigned long __cdecl queryValue();
extern unsigned char captionTable[];

struct Base {
    void* table;

    Base();
    ~Base();
};

struct ProxyBase {
    ProxyBase** proxy;
    unsigned long reserved[2];

    ProxyBase();
    ~ProxyBase();
};

struct Container : ProxyBase {
    void* first;
    void* last;
    void* limit;

    Container();
    ~Container();
};

struct S : Base {
    Container data;
    unsigned long threadId;
    unsigned long value;

    S();
};

__forceinline Base::Base()
    : table(captionTable)
{
}

__forceinline ProxyBase::ProxyBase()
    : proxy(new ProxyBase*(this))
{
}

__forceinline Container::Container()
    : first(0), last(0), limit(0)
{
}

S::S()
    : Base(),
      data(),
      threadId(GetCurrentThreadId()),
      value(queryValue())
{
}
