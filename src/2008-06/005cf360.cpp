// from server: 80% by king_originala
struct Ref {
    virtual ~Ref();
    volatile long count;
    void dispose();
};

extern "C" long (__stdcall *InterlockedDecrement)(volatile long *);

struct Handle {
    Ref *p;
    ~Handle();
};

inline Handle::~Handle()
{
    if (p) {
        if (InterlockedDecrement(&p->count) == 0) {
            p->dispose();
            if (p)
                delete p;
        }
        p = 0;
    }
}

struct StringBase {
    char storage[32];
    ~StringBase();
};

extern void (__thiscall *string_destroy)(StringBase *);

inline StringBase::~StringBase()
{
    string_destroy(this);
}

struct S : StringBase {
    Handle a;
    Handle b;
    Handle c;
    Handle d;
    ~S();
};

S::~S()
{
}
