// from server: 67% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Instance;
struct Children;

extern const unsigned char instanceType[];
extern const unsigned char partType[];
extern "C" void* __cdecl castObject(void*, long, const void*, const void*, int);
extern void (__cdecl *invalidParameter)();

struct RefCount {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Child {
    Instance* object;
    RefCount* count;
};

struct Proxy {
    Children* container;
};

struct Children {
    Proxy* proxy;
    unsigned char padding[8];
    Child* first;
    Child* last;
};

struct SharedChildren {
    Children* object;
    RefCount* count;
    ~SharedChildren();
};

struct ChildrenHolder {
    SharedChildren get();
};

struct Instance {
    unsigned char padding[264];
    ChildrenHolder children;
};

struct Part {
    char blocked();
};

struct Iterator {
    Proxy* proxy;
    Child* position;

    Child& value() const;
    void advance();
    bool different(const Iterator& other) const;
};

inline SharedChildren::~SharedChildren()
{
    if (count) {
        if (_InterlockedExchangeAdd(&count->strong, -1) == 0) {
            count->dispose();
            if (_InterlockedExchangeAdd(&count->weak, -1) == 0)
                count->destroy();
        }
    }
}

inline Child& Iterator::value() const
{
    if (!proxy)
        invalidParameter();
    Children* container = proxy ? proxy->container : 0;
    if (position >= container->last)
        invalidParameter();
    return *position;
}

inline void Iterator::advance()
{
    if (!proxy)
        invalidParameter();
    Children* container = proxy ? proxy->container : 0;
    if (position >= container->last)
        invalidParameter();
    ++position;
}

inline bool Iterator::different(const Iterator& other) const
{
    if (!proxy || proxy != other.proxy)
        invalidParameter();
    return position != other.position;
}

Instance* __cdecl findUnlocked(Instance* object)
{
    Part* part = static_cast<Part*>(
        castObject(object, 0, instanceType, partType, 0));

    if (part && !part->blocked())
        return reinterpret_cast<Instance*>(part);

    SharedChildren children = object->children.get();

    if (children.object) {
        Children* list = children.object;

        if (list->first > list->last)
            invalidParameter();

        Iterator end;
        end.proxy = list->proxy;
        end.position = list->last;

        if (list->first > list->last)
            invalidParameter();

        Iterator current;
        current.proxy = list->proxy;
        current.position = list->first;

        for (; current.different(end); current.advance()) {
            if (findUnlocked(current.value().object))
                return current.value().object;
        }
    }

    return 0;
}
