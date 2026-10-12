// from server: 76% by king_originala
extern "C"
{
    extern long (__thiscall *InterlockedIncrement)(volatile long *);
    extern long (__stdcall *InterlockedDecrement)(volatile long *);
}

struct Vec3
{
    float x, y, z;

    Vec3();
    Vec3(const Vec3 &);
};

inline Vec3::Vec3(const Vec3 &v)
{
    x = v.x;
    y = v.y;
    z = v.z;
}

inline const float &minimum(const float &a, const float &b)
{
    return b < a ? b : a;
}

struct Mesh
{
    virtual ~Mesh();
    volatile long references;
    void *data;
    unsigned char padding[28];

    Mesh(int);
    void dispose();
};

struct Ref
{
    Mesh *p;

    Ref(Mesh *);
    Ref(const Ref &);
    ~Ref();
};

inline Ref::Ref(Mesh *q) : p(0)
{
    if (q)
    {
        p = q;
        InterlockedIncrement(&q->references);
    }
}

inline Ref::Ref(const Ref &r) : p(r.p)
{
    if (p)
        InterlockedIncrement(&p->references);
}

inline Ref::~Ref()
{
    Mesh *q = p;
    if (q && InterlockedDecrement(&q->references) == 0)
    {
        q->dispose();
        delete q;
    }
}

struct Holder
{
    void assign(const Ref &);
};

struct Base
{
    virtual ~Base();
    unsigned char padding[8];
    Holder mesh;

    Base();
};

struct Work
{
    unsigned char padding[20];
    Mesh *p;
    unsigned char tail[4];
    Vec3 position;

    void initialize(void *, int);
    ~Work();
};

inline Work::~Work()
{
    if (p && InterlockedDecrement(&p->references) == 0)
    {
        p->dispose();
        if (p)
            delete p;
    }
}

struct HeadBuilder : Base
{
    HeadBuilder(const Vec3 &, void *);
    virtual ~HeadBuilder();
};

extern const float scale;
extern void __stdcall buildMesh(Mesh *, Ref, Vec3, int, int, float);

HeadBuilder::HeadBuilder(const Vec3 &size, void *arg)
{
    float radius = minimum(size.x, size.z) * scale;
    Mesh *created = new Mesh(5);

    {
        Ref reference(created);
        mesh.assign(reference);
    }

    buildMesh(created, Ref(0), size, 0, 9, radius);

    Work work;
    work.initialize(arg, 1);
}
