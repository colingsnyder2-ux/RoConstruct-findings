// from server: 59% by colin
// from server: 54% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" char* __cdecl strncpy(char*, const char*, unsigned int);

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Handle {
    void* pointer;
    Control* count;
    Handle(const Handle&);
    ~Handle();
};

__forceinline Handle::Handle(const Handle& other)
    : pointer(other.pointer), count(other.count)
{
    if (count)
        _InterlockedExchangeAdd(&count->strong, 1);
}

__forceinline Handle::~Handle()
{
    Control* p = count;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

struct Provider {
    void* slots;
};

typedef Handle (__thiscall *Acquire)(Provider*);

struct Guard {
    char storage[12];
    Guard(Handle);
    ~Guard();
};

struct String {
    const char* c_str() const;
};

struct Owner {
    char padding[0x110];
    String text;
};

struct Request {
    char padding0[0x0c];
    unsigned char flags;
    char padding1[0x0f];
    char* destination;
    unsigned int capacity;
    char padding2[8];
    int result;
};

struct Node {
    char padding0[0x0c];
    Owner* owner;
    char padding1[0x48];
    Provider* provider;
    bool query();
    void update(Request*);
};

void Node::update(Request* request)
{
    try {
        if (request->flags & 1) {
            Guard guard(
                ((Acquire)((void**)provider->slots)[0x154 / 4])(provider));
            strncpy(request->destination, owner->text.c_str(),
                    request->capacity);
        }

        if (request->flags & 0x40)
            request->result = query() ? 1 : 0;
    }
    catch (...) {
    }
}
