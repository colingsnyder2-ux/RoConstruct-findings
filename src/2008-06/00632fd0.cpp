// from server: 78% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Counted {
    virtual ~Counted();
    virtual void dispose();
    virtual void destroy();
    long use;
    long weak;
};

struct Handle {
    Counted* pn;
    Handle& operator=(const Handle&);
    ~Handle();
};

inline Handle::~Handle()
{
    if (pn) {
        if (_InterlockedExchangeAdd(&pn->use, -1) == 0) {
            pn->dispose();
            if (_InterlockedExchangeAdd(&pn->weak, -1) == 0)
                pn->destroy();
        }
    }
}

struct Pair {
    void* px;
    Handle pn;
};

Pair __cdecl lookup(void*);
extern char property;

struct Rocket {
    char storage[0x14c];
    Pair value;
    char padding[0x10];
    bool flag;

    void notify(const void*);
    void set(void*);
};

void Rocket::set(void* p)
{
    if (value.px != p) {
        value = lookup(p);
        flag = false;
        notify(&property);
    }
}
