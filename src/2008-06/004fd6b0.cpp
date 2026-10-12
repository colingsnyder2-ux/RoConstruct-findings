// from server: 72% by king_originala
extern "C" long (__stdcall * const InterlockedIncrement)(long *) throw();
extern "C" long (__stdcall * const InterlockedDecrement)(long *) throw();

void * __cdecl operator new(unsigned int);
void __cdecl operator delete(void *);

struct Vector3
{
    float x, y, z;
    Vector3(const Vector3 &) throw();
};

inline Vector3::Vector3(const Vector3 &v) throw()
    : x(v.x), y(v.y), z(v.z)
{
}

struct Resource
{
    virtual ~Resource();
    long references;
    void *owner;
    char storage[28];

    Resource(int);
    void releaseOwner();
};

struct ResourcePtr
{
    Resource *const value;

    ResourcePtr(Resource *);
    ~ResourcePtr();
};

inline ResourcePtr::ResourcePtr(Resource *p) : value(p)
{
    if (p)
        InterlockedIncrement(&p->references);
}

inline ResourcePtr::~ResourcePtr()
{
    if (value && InterlockedDecrement(&value->references) == 0)
    {
        value->releaseOwner();
        delete value;
    }
}

struct ResourceList
{
    Resource **data;
    int count;

    void append(const ResourcePtr &);
};

struct Base
{
    virtual ~Base();
    char prefix[8];
    ResourceList resources;
    char suffix[112];

    Base();
};

struct TemporaryBuilder
{
    char prefix[20];
    Resource *resource;
    char suffix[8];

    TemporaryBuilder(Resource **, Vector3, void *, int);
    void build(int);
    ~TemporaryBuilder();
};

inline TemporaryBuilder::~TemporaryBuilder()
{
    if (resource && InterlockedDecrement(&resource->references) == 0)
    {
        resource->releaseOwner();
        if (resource)
            delete resource;
    }
}

struct CylinderBuilder : Base
{
    int kind;

    CylinderBuilder(const Vector3 &, void *);
    virtual ~CylinderBuilder();
};

CylinderBuilder::CylinderBuilder(const Vector3 &size, void *context)
    : Base()
{
    kind = 3;
    {
        ResourcePtr resource(new Resource(5));
        resources.append(resource);
    }

    Resource **last = resources.data + resources.count - 1;
    TemporaryBuilder builder(last, size, context, 12);
    builder.build(0);
}
