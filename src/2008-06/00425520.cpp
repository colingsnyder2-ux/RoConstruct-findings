// from server: 63% by king_originala
typedef unsigned int size_t;
void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

extern "C" {
extern void (__cdecl *_invalid_parameter_noinfo)();
extern long (__stdcall *SendMessageA)(void*, unsigned int, unsigned int, long);
}

typedef void (__cdecl *ErrorFunction)();

struct Item {
    char padding[0x80];
    long handle;
};

struct Vector;

struct Proxy {
    Vector* container;
    Proxy(Vector*);
};

struct ProxyOwner {
    Proxy* pointer;
    unsigned int reserved[2];
    ProxyOwner(Vector*);
    ~ProxyOwner();
};

struct VectorIterator {
    Proxy* proxy;
    Item** current;
    bool different(const VectorIterator&, ErrorFunction) const;
    Item* get(ErrorFunction) const;
    void advance(ErrorFunction);
};

struct Vector : ProxyOwner {
    Item** first;
    Item** last;
    Item** limit;
    Vector();
    ~Vector();
    VectorIterator begin(ErrorFunction);
    VectorIterator end(ErrorFunction);
};

struct TreeNode {
    TreeNode* left;
    TreeNode* parent;
    TreeNode* right;
};

struct TreeIterator {
    void* proxy;
    TreeNode* node;
};

struct Tree {
    void* proxy;
    char padding[0x14];
    TreeNode* head;
    unsigned int size;
    void erase(TreeNode*);
    void clear();
};

struct Lock {
    void* handle;
    bool criticalSection;
    unsigned int count;
    void lock();
    void unlock();
};

struct Guard {
    Lock* mutex;
    bool locked;
    Guard(Lock*);
    ~Guard();
};

struct Owner {
    char padding[0x20];
    void* window;
    char reserved[0xA0];
    Lock mutex;
};

struct S {
    char padding[0x34];
    Tree tree;
    char reserved[4];
    Owner* owner;
    void f();
};

void __cdecl callback();
TreeIterator* __cdecl collect(
    TreeIterator*, TreeIterator, TreeIterator, void (__cdecl*)(), Vector*);

__forceinline Proxy::Proxy(Vector* p)
{
    container = p;
}

__forceinline ProxyOwner::ProxyOwner(Vector* p)
{
    pointer = new Proxy(p);
}

__forceinline ProxyOwner::~ProxyOwner()
{
    operator delete(pointer);
}

__forceinline Vector::Vector() : ProxyOwner(this)
{
    first = 0;
    last = 0;
    limit = 0;
}

__forceinline Vector::~Vector()
{
    if (first)
        operator delete(first);
    first = 0;
    last = 0;
    limit = 0;
}

__forceinline VectorIterator Vector::begin(ErrorFunction error)
{
    VectorIterator result;
    result.current = first;
    if (first > last)
        error();
    result.proxy = pointer;
    return result;
}

__forceinline VectorIterator Vector::end(ErrorFunction error)
{
    VectorIterator result;
    result.current = last;
    if (first > last)
        error();
    result.proxy = pointer;
    return result;
}

__forceinline bool VectorIterator::different(
    const VectorIterator& other, ErrorFunction error) const
{
    if (!proxy || proxy != other.proxy)
        error();
    return current != other.current;
}

__forceinline Item* VectorIterator::get(ErrorFunction error) const
{
    if (!proxy)
        error();
    Vector* container = proxy ? proxy->container : 0;
    if (current >= container->last)
        error();
    return *current;
}

__forceinline void VectorIterator::advance(ErrorFunction error)
{
    if (!proxy)
        error();
    Vector* container = proxy ? proxy->container : 0;
    if (current >= container->last)
        error();
    ++current;
}

__forceinline Guard::Guard(Lock* p)
{
    mutex = p;
    mutex->lock();
    locked = true;
}

__forceinline Guard::~Guard()
{
    if (locked)
        mutex->unlock();
}

__forceinline void Tree::clear()
{
    erase(head->parent);
    head->parent = head;
    size = 0;
    head->left = head;
    head->right = head;
}

void S::f()
{
    Vector values;
    {
        Guard guard(&owner->mutex);
        Tree* t = &tree;
        TreeIterator first;
        first.proxy = t->proxy;
        first.node = t->head->left;
        TreeIterator last;
        last.proxy = t->proxy;
        last.node = t->head;
        TreeIterator result;
        collect(&result, first, last, callback, &values);
        t->clear();
    }

    ErrorFunction error = _invalid_parameter_noinfo;
    for (VectorIterator i = values.begin(error);
         i.different(values.end(error), error); i.advance(error))
        SendMessageA(owner->window, 0x1101, 0, i.get(error)->handle);
}
