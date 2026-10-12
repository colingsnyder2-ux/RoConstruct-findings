// from server: 73% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Value {
    unsigned int words[4];
};

struct Object {
    unsigned char storage[40];
    Object();
};

struct Owner {
    void* object;
    void* control;

    Owner();
    ~Owner();
    void reset(Object*);
};

inline Owner::Owner() : object(0), control(0)
{
}

struct Product {
    Product(Value, unsigned int);
    ~Product();
};

struct Service : Owner {
    Product product;

    Service(const Value&);
    void initialize();
};

Service::Service(const Value& value)
    : product(value, 0)
{
    reset(new Object);
    initialize();
}
