// from server: 57% by king_originala
extern "C" void (__cdecl *invalidParameter)();
extern "C" void __cdecl alignedFree(void*);
extern "C" void __cdecl releaseMemory(void*);

struct Clump;

struct Buffer {
    void* reserved;
    void* data;
    void* end;
    void* capacity;
    ~Buffer();
};

struct Children {
    Children** proxy;
    unsigned int reserved[2];
    Clump** first;
    Clump** last;
    Clump** limit;
    ~Children();
};

struct Iterator {
    Children** owner;
    Clump** position;
};

extern void __cdecl removeChild(Children*, Clump**);

struct Clump : Buffer {
    bool dirty14;
    char padding15[7];
    int value1c;
    Clump* parent;
    unsigned int reserved24;
    Children children;
    char padding40[20];
    bool dirty54;
    char padding55[20];
    bool dirty69;

    void reset(int);
    void changed();
    void detach(Clump*);
    virtual ~Clump();
};

inline Buffer::~Buffer()
{
    alignedFree(data);
    data = 0;
    end = 0;
    capacity = 0;
}

inline Children::~Children()
{
    if (first)
        releaseMemory(first);
    first = 0;
    last = 0;
    limit = 0;
    releaseMemory(proxy);
}

Clump::~Clump()
{
    reset(value1c);
    dirty14 = true;
    dirty54 = true;
    dirty69 = true;
    if (parent)
        parent->changed();

    while (children.last - children.first != 0) {
        Iterator iterator;
        iterator.position = children.last;
        if (children.first > iterator.position)
            invalidParameter();

        iterator.owner = children.proxy;
        if (!iterator.owner)
            invalidParameter();

        Children* container = iterator.owner ? *iterator.owner : 0;
        if (iterator.position - 1 > container->last ||
            iterator.position - 1 <
                (iterator.owner ? *iterator.owner : 0)->first)
            invalidParameter();

        --iterator.position;
        if (!iterator.owner)
            invalidParameter();
        container = iterator.owner ? *iterator.owner : 0;
        if (iterator.position >= container->last)
            invalidParameter();

        Clump* child = *iterator.position;
        if (child->parent) {
            Clump* item = child;
            removeChild(&child->parent->children, &item);
            Clump* owner = child->parent;
            owner->dirty14 = true;
            owner->dirty54 = true;
            owner->dirty69 = true;
            if (owner->parent)
                owner->parent->changed();

            child->parent = 0;
            child->detach(child);
            child->dirty14 = true;
            child->dirty54 = true;
            child->dirty69 = true;
            if (child->parent)
                child->parent->changed();
        }
    }

    if (parent) {
        Clump* item = this;
        removeChild(&parent->children, &item);
        parent->changed();
        parent = 0;
        detach(this);
        dirty14 = true;
        dirty54 = true;
        dirty69 = true;
        if (parent)
            parent->changed();
    }
}
