// from server: 80% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Owner {
    void* p;
    explicit Owner(void* q) : p(q) {}
    Owner(Owner& q) : p(q.p) { q.p = 0; }
    ~Owner() { if (p) operator delete(p); }
};

inline void* release(void*& p)
{
    void* q = p;
    p = 0;
    return q;
}

struct Name;
const Name& __cdecl getName();

struct Product;

struct Handler {
    virtual void invoke();
    Product* product;
    int first;
    int unused;
    int second;
    int third;

    Handler(Product*, const int&, const int&, const int&);
};

inline Handler::Handler(Product* p, const int& a, const int& b,
                        const int& c)
    : product(p), first(a), second(b), third(c)
{
}

struct Base {
    unsigned int reserved[5];
    Handler* handler;
    Base(const Name&, int, int, Owner, void*);
    virtual ~Base();
};

struct Product : Base {
    Product(int, int, int, int, int, Owner);
    virtual ~Product();
};

Product::Product(int a, int b, int c, int d, int e, Owner owner)
    : Base(getName(), a, b, Owner(0), release(owner.p))
{
    Handler* q = new Handler(this, c, d, e);
    if (q != handler && handler)
        operator delete(handler);
    handler = q;
}
