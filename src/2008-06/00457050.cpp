// from server: 82% by king_originala
typedef unsigned long DWORD;

extern "C" DWORD (__stdcall *GetCurrentThreadId)();
extern DWORD __cdecl getValue();
void* __cdecl operator new(unsigned int);

struct Storage;

struct Proxy {
    Storage** pointer;

    Proxy(Storage* owner);
    ~Proxy();
};

struct Storage {
    Proxy proxy;
    unsigned int reserved[2];
    unsigned int first;
    unsigned int second;
    unsigned int third;

    Storage();
    ~Storage();
};

struct S {
    virtual ~S();
    Storage storage;
    DWORD threadId;
    DWORD value;

    S();
};

inline Proxy::Proxy(Storage* owner)
{
    pointer = new Storage*(owner);
}

inline Storage::Storage() : proxy(this)
{
    first = 0;
    second = 0;
    third = 0;
}

S::S()
{
    threadId = GetCurrentThreadId();
    value = getValue();
}
