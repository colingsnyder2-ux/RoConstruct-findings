// from server: 89% by king_originala
extern "C" long __stdcall InterlockedIncrement(volatile long *);
extern "C" long __stdcall InterlockedDecrement(volatile long *);

struct Ref {
    virtual ~Ref();
    volatile long count;
    void *owner;
    void cleanup();
};

struct OtherPtr {
    Ref *p;
    ~OtherPtr()
    {
        if (p) {
            if (InterlockedDecrement(&p->count) == 0) {
                p->cleanup();
                delete p;
            }
            p = 0;
        }
    }
};

struct Ptr {
    Ref *p;

    Ptr() : p(0) {}
    Ptr(const Ptr &v) : p(0) { assign(v.p); }
    Ptr(const OtherPtr &v) : p(0)
    {
        if (v.p) {
            p = v.p;
            InterlockedIncrement(&p->count);
        }
    }
    ~Ptr()
    {
        if (p) {
            if (InterlockedDecrement(&p->count) == 0) {
                p->cleanup();
                delete p;
            }
            p = 0;
        }
    }
    Ptr &assign(Ref *);
};

struct TextureProxyBase : Ref {
};

struct TextureProxy : TextureProxyBase {
    OtherPtr get();
};

struct LevelBase {
    virtual ~LevelBase();
};

struct Level : LevelBase {
    bool enabled;
    Ptr texture;
    Ptr proxy;
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;
    float g;

    Level(Ptr, float, float, float, float, float, float, float);
    virtual ~Level();
};

Level::Level(Ptr value, float aa, float bb, float cc, float dd,
             float ee, float ff, float gg)
    : enabled(false), texture(), proxy(value),
      a(aa), b(bb), c(cc), d(dd), e(ee), f(ff), g(gg)
{
    if (value.p) {
        texture.assign(
            Ptr(dynamic_cast<TextureProxy *>(
                static_cast<TextureProxyBase *>(value.p))->get()).p);
    }
    if (g > 0.0f)
        f = 0.0f;
}
