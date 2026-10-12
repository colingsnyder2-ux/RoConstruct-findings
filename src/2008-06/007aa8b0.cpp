// from server: 99% by king_originala
extern "C" long (__stdcall *InterlockedDecrement)(volatile long *);

struct Ref
{
    virtual ~Ref();
    volatile long count;
    void release();
};

struct Ptr
{
    Ref *p;
    ~Ptr();
};

inline Ptr::~Ptr()
{
    if (p && InterlockedDecrement(&p->count) == 0)
    {
        p->release();
        delete p;
    }
}

struct Handle
{
    Ref *p;
    Handle &assign(Ref *);
};

struct Maker
{
    char storage[0x14];
    Ptr create(float, float, bool, float, Handle *, void *, void *);
};

struct S
{
    char pad0[0x24];
    float x;
    float y;
    char pad1[0x2c8];
    Maker maker;
    Handle first;
    Handle second;
    bool enabled;
    char pad2[3];
    float scale;
    char pad3[0x88];
    char data[0xf8];
    char other;

    void f(const Ptr &);
};

void S::f(const Ptr &value)
{
    first.assign(value.p);
    second.assign(maker.create(x, y, enabled, scale, &first, data, &other).p);
}
