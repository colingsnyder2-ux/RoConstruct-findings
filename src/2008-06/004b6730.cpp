// from server: 77% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Object {
    unsigned char storage[0x2a24];
    Object();
};

struct CountBase {
    virtual ~CountBase();
    virtual void dispose();
    virtual void destroy();
    long useCount;
    long weakCount;
};

struct Count {
    CountBase* pointer;
    Count(Object*);
    Count& operator=(const Count&);
};

void __cdecl initializeShared(Count*, Object*, Object*);

struct Shared {
    Object* pointer;
    Count count;
    Shared(Object*);
    ~Shared();
};

inline Shared::Shared(Object* p) : pointer(p), count(p)
{
    initializeShared(&count, p, p);
}

inline Shared::~Shared()
{
    CountBase* p = count.pointer;
    if (p) {
        if (_InterlockedDecrement(&p->useCount) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weakCount) == 0)
                p->destroy();
        }
    }
}

struct Node {
    unsigned char padding[0x10];
    Shared value;
};

struct Map;

struct Iterator {
    Map** owner;
    Node* node;
};

struct Map {
    Map** proxy;
    unsigned char padding[0x14];
    Node* head;
    Iterator find(const int&);
    Shared& operator[](const int&);
};

struct S {
    unsigned char padding[0x2b90];
    Map objects;
    Object* get(int);
};

Object* S::get(int key)
{
    int savedKey = key;
    Map& map = objects;
    key = savedKey;
    Iterator position = map.find(key);
    Map** owner = position.owner;
    Node* end = map.head;
    Map** proxy = map.proxy;

    if (!owner || owner != proxy)
        _invalid_parameter_noinfo();

    if (position.node == end) {
        Shared value(new Object);
        key = savedKey;
        Shared& destination = map[key];
        destination.pointer = value.pointer;
        destination.count = value.count;
        return value.pointer;
    }

    Map* container;
    if (!owner) {
        _invalid_parameter_noinfo();
        container = reinterpret_cast<Map*>(owner);
    } else {
        container = *owner;
    }

    if (position.node == container->head)
        _invalid_parameter_noinfo();

    return position.node->value.pointer;
}
