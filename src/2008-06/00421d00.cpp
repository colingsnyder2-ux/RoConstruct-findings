// from server: 73% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);
extern "C" void __cdecl _invalid_parameter_noinfo();

namespace RBX {
class Instance {
public:
    virtual ~Instance();
    char pad[0x100];
    Instance* next;
};

class ServiceProvider;
}

struct Iterator {
    void* proxy;
    RBX::Instance** position;
};

namespace RBX {
class ServiceProvider : public Instance {
public:
    ServiceProvider* finish();
    void apply(Iterator first, Iterator last);
};
}

RBX::ServiceProvider* __cdecl func_00421cb0(RBX::Instance*);

struct Vector;

struct Proxy {
    Vector* owner;
    Proxy(Vector*);
};

struct Vector {
    Proxy* proxy;
    char allocator1;
    char padding1[3];
    char allocator2;
    char padding2[3];
    RBX::Instance** first;
    RBX::Instance** last;
    RBX::Instance** limit;

    Vector();
    ~Vector();
    void insert(Iterator*, Iterator, const RBX::Instance* const*);
};

inline Proxy::Proxy(Vector* p) : owner(p) {}

inline Vector::Vector()
    : proxy(new Proxy(this)), first(0), last(0), limit(0) {}

inline Vector::~Vector()
{
    if (first)
        operator delete(first);
    first = 0;
    last = 0;
    limit = 0;
    operator delete(proxy);
}

struct Value {
    char padding[0x54];
    RBX::Instance* instance;
};

struct Item;
struct ItemTable {
    void* padding[24];
    Value* (__thiscall* get)(Item*);
};

struct Item {
    ItemTable* table;
};

struct List {
    void* head();
    Item* next(void**);
};

struct Window {
    char padding[0x128];
    List* list;
};

struct S;
struct STable {
    void* padding[101];
    Window* (__thiscall* get)(S*);
};

struct S {
    STable* table;
    char padding[0x3bc];
    RBX::Instance* instance;
    void f(unsigned int, unsigned int);
};

void S::f(unsigned int, unsigned int)
{
    RBX::ServiceProvider* service = func_00421cb0(instance);
    Vector values;
    List* list = table->get(this)->list;
    void* position = list->head();

    while (position) {
        Item* item = list->next(&position);
        RBX::Instance* value = item->table->get(item)->instance;
        size_t capacity = values.first
            ? size_t(values.limit - values.first)
            : 0;
        size_t count = size_t(values.last - values.first);

        if (count < capacity) {
            *values.last = value;
            ++values.last;
        } else {
            RBX::Instance** end = values.last;
            if (values.first > end)
                _invalid_parameter_noinfo();
            Iterator result;
            Iterator where;
            where.proxy = values.proxy;
            where.position = end;
            values.insert(&result, where, &value);
        }
    }

    RBX::Instance** end = values.last;
    RBX::Instance** begin = values.first;
    if (begin > end) {
        _invalid_parameter_noinfo();
        begin = values.first;
    }

    Iterator first;
    first.proxy = values.proxy;
    first.position = begin;
    if (begin > values.last)
        _invalid_parameter_noinfo();

    Iterator last;
    last.proxy = values.proxy;
    last.position = end;
    service->apply(first, last);
}
