// from server: 73% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct RefCount {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    void release();
};

__forceinline void RefCount::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Count {
    RefCount *value;
    Count();
    Count(const Count&);
    ~Count();
};

__forceinline Count::Count() : value(0)
{
}

__forceinline Count::Count(const Count& other) : value(other.value)
{
    if (value)
        _InterlockedExchangeAdd(&value->strong, 1);
}

__forceinline Count::~Count()
{
    if (value)
        value->release();
}

struct Object;

struct RawShared {
    Object *object;
    RefCount *count;
};

struct Shared {
    Object *object;
    Count count;
    Shared();
    Shared(const Shared&);
};

__forceinline Shared::Shared() : object(0), count()
{
}

__forceinline Shared::Shared(const Shared& other)
    : object(other.object), count(other.count)
{
}

struct Transform {
    char data[36];
};

struct Object {
    Transform *transform();
    RawShared *clone(RawShared *);
};

extern Shared __cdecl convert(const RawShared *);

struct Collection {
    char data[24];
    Collection();
    ~Collection();
    void insert(const Shared&);
};

extern void __stdcall apply(Collection *, Object *, int, int);

struct Service {
    void notify(int);
};

extern Service *__cdecl findService(Object *);
extern void *__cdecl operator new(unsigned int);
extern void __cdecl operator delete(void *);

struct Tool {
    virtual void unused();
    virtual int run(void *);
    Tool(Object *, void *, Object *, Shared);
    char data[64];
};

struct CloneTool {
    char padding[24];
    Object *context;
    Object *source;
    int execute(void *);
};

int CloneTool::execute(void *argument)
{
    if (source) {
        source->transform();

        RawShared temporary;
        Shared copy = convert(source->clone(&temporary));
        RefCount *p = temporary.count;
        if (p)
            p->release();

        Collection collection;
        Object *cloned = copy.object;
        collection.insert(Shared(copy));
        apply(&collection, context, 1, 1);
        findService(context)->notify(8);

        Tool *tool = new Tool(
            cloned,
            reinterpret_cast<char *>(cloned->transform()) + 36,
            context,
            Shared());
        return tool->run(argument);
    }
    return 0;
}
