// from server: 76% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;

    void addRef();
    void release();
};

inline void Control::addRef()
{
    _InterlockedExchangeAdd(&strong, 1);
}

inline void Control::release()
{
    if (_InterlockedExchangeAdd(&strong, -1) == 0) {
        dispose();
        if (_InterlockedExchangeAdd(&weak, -1) == 0)
            destroy();
    }
}

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        control->addRef();
}

inline Shared::~Shared()
{
    Control* p = control;
    if (p)
        p->release();
}

Shared __cdecl convert(const Shared&);

struct Node {
    Shared value;
    unsigned char storage[72];

    Node(Shared);
};

struct Iterator {
    void* node;
};

struct Header {
    unsigned long unused;
    void* end;
    unsigned long remaining;
};

struct Search {
    unsigned char storage[5];
    unsigned char flag1;
    unsigned char flag2;

    void find(Iterator*, const Shared*, unsigned char*, unsigned char*);
};

struct Tree : Header, Search {
    void insert(Iterator*, const Node&);
};

struct S {
    unsigned long unused;
    Tree tree;

    void f(Shared);
};

void S::f(Shared argument)
{
    Shared value = convert(argument);
    Search* search = static_cast<Search*>(&tree);
    Iterator position;

    search->find(&position, &value, &search->flag1, &search->flag2);

    if (position.node == static_cast<Tree*>(search)->end)
        static_cast<Tree*>(search)->insert(&position, Node(value));
}
