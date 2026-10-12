// from server: 69% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Owner {
    void* p;
    Owner();
    Owner(Owner&);
    ~Owner();
};

__forceinline Owner::Owner() : p(0) {}
__forceinline Owner::Owner(Owner& other) : p(other.p) {
    other.p = 0;
}
__forceinline Owner::~Owner() {
    if (p)
        operator delete(p);
}

void* __cdecl getDescriptor();

struct Base {
    virtual ~Base();
    unsigned char padding[20];
    void* handler;

    Base(void*, int, int, Owner, Owner);
};

struct Product;

struct Handler {
    virtual void invoke();
    Product* object;
    int first;
    int unused;
    int second;
    int third;

    Handler(Product*, int, int, int);
};

__forceinline Handler::Handler(Product* object_, int first_,
                               int second_, int third_)
    : object(object_), first(first_), second(second_), third(third_) {}

struct Product : Base {
    virtual ~Product();
    Product(int, int, int, int, int, Owner);
};

Product::Product(int a, int b, int c, int d, int e, Owner owner)
    : Base(getDescriptor(), a, b, Owner(), owner) {
    Handler* replacement = new Handler(this, c, d, e);
    if (replacement != handler && handler)
        operator delete(handler);
    handler = replacement;
}
