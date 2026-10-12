// from server: 72% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Owner {
    void* p;
    explicit Owner(void*);
    Owner(Owner&);
    ~Owner();
};

inline Owner::Owner(void* q) : p(q) {}

inline Owner::Owner(Owner& q) : p(q.p) {
    q.p = 0;
}

inline Owner::~Owner() {
    if (p)
        operator delete(p);
}

void* __cdecl getMetadata();

struct Base {
    virtual ~Base();
    unsigned char data[20];
    Base(void*, int, int, Owner, Owner);
};

struct Product;

struct Setter {
    int first;
    int second;
};

struct Handler {
    virtual ~Handler();
    Product* object;
    int getter;
    int unused;
    Setter setter;

    Handler(Product*, int, const Setter&);
};

inline Handler::Handler(Product* p, int g, const Setter& s)
    : object(p), getter(g), setter(s) {}

struct Product : Base {
    Handler* handler;

    Product(int, int, int, Setter, Owner);
    virtual ~Product();
};

Product::Product(int a, int b, int getter, Setter setter, Owner owner)
    : Base(getMetadata(), a, b, Owner(0), owner) {
    Handler* replacement = new Handler(this, getter, setter);
    if (replacement != handler && handler)
        operator delete(handler);
    handler = replacement;
}
