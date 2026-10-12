// from server: 67% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCount {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;

    void release();
};

inline void RefCount::release()
{
    if (_InterlockedExchangeAdd(&strong, -1) == 1) {
        dispose();
        if (_InterlockedExchangeAdd(&weak, -1) == 1)
            destroy();
    }
}

struct Object;

struct RawShared {
    Object *object;
    RefCount *count;
};

struct Shared {
    Object *object;
    RefCount *count;

    Shared();
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared() : object(0), count(0)
{
}

inline Shared::Shared(const Shared& other)
    : object(other.object), count(other.count)
{
    RefCount *p = count;
    if (p)
        _InterlockedExchangeAdd(&p->strong, 1);
}

inline Shared::~Shared()
{
    RefCount *p = count;
    if (p)
        p->release();
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
        collection.insert(Shared(copy));
        apply(&collection, context, 1, 1);
        findService(context)->notify(8);

        Tool *tool = new Tool(
            copy.object,
            reinterpret_cast<char *>(copy.object->transform()) + 36,
            context,
            Shared());
        return tool->run(argument);
    }
    return 0;
}
