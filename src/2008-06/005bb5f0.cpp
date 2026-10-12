// from server: 66% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct String {
    unsigned char data[28];
    String(const String&);
    ~String();
};

struct Key {
    String text;
    int value;
};

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Channel {
    unsigned char data[48];
    Channel(void*, Key, bool);
};

struct Reference {
    Control* control;
    Reference(Channel*);
    Reference& operator=(const Reference&);
    ~Reference();
};

__forceinline Reference::~Reference()
{
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

void __cdecl func_0047d410(Reference*, Channel*, Channel*);

struct Shared {
    Channel* pointer;
    Reference reference;
    Shared(Channel*);
    Shared(const Shared&);
    Shared(Channel*, const Reference&);
};

__forceinline Shared::Shared(Channel* p) : pointer(p), reference(p)
{
    func_0047d410(&reference, p, p);
}

__forceinline Shared::Shared(const Shared& p)
    : pointer(p.pointer), reference(p.reference)
{
    Control* c = reference.control;
    if (c)
        _InterlockedExchangeAdd(&c->strong, 1);
}

__forceinline Shared::Shared(Channel* p, const Reference& r)
    : pointer(p), reference(r)
{
    Control* c = reference.control;
    if (c)
        _InterlockedExchangeAdd(&c->strong, 1);
}

struct Node {
    unsigned char data[44];
    Shared value;
};

struct Map;

struct Proxy {
    Map* map;
};

struct Iterator {
    Proxy* proxy;
    Node* node;
};

struct Map {
    Proxy* proxy;
    unsigned char data[20];
    Node* head;
    unsigned int size;
    void find(Iterator*, const Key*);
    Shared* insert(const Key*);
};

struct S {
    unsigned char prefix[0x134];
    void* owner;
    unsigned char middle[0x48];
    Map first;
    Map second;
    Shared f(Key, bool);
};

Shared S::f(Key key, bool flag)
{
    Map* map = flag ? &second : &first;
    {
        Iterator it;
        map->find(&it, &key);

        Proxy* proxy = it.proxy;
        Node* end = map->head;
        Proxy* expected = map->proxy;

        if (!proxy || proxy != expected)
            _invalid_parameter_noinfo();

        Node* node = it.node;
        if (node != end) {
            if (!proxy)
                _invalid_parameter_noinfo();
            else
                proxy = reinterpret_cast<Proxy*>(proxy->map);

            if (node == reinterpret_cast<Map*>(proxy)->head)
                _invalid_parameter_noinfo();

            return Shared(node->value.pointer, node->value.reference);
        }
    }

    Shared result(new Channel(owner, key, flag));
    Shared* value = map->insert(&key);
    value->pointer = result.pointer;
    value->reference = result.reference;
    return result;
}
