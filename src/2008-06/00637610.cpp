// from server: 69% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Owner {
    void* pointer;

    Owner() : pointer(0) {}
    Owner(Owner& other) : pointer(other.pointer) {
        other.pointer = 0;
    }
    ~Owner() {
        if (pointer)
            operator delete(pointer);
    }
};

void* __cdecl descriptor();

struct Base {
    virtual void invoke();
    unsigned char storage[20];
    void* owned;

    Base(void*, int, int, Owner, Owner);
    ~Base();
};

struct Product;

struct Adapter {
    virtual void invoke();
    Product* object;
    int first;
    unsigned __int64 second;

    Adapter(Product* p, int a, unsigned __int64 b)
        : object(p), first(a), second(b) {}
};

struct Product : Base {
    virtual void invoke();
    Product(int, int, int, unsigned __int64, Owner);
};

Product::Product(int a, int b, int c, unsigned __int64 d, Owner e)
    : Base(descriptor(), a, b, Owner(), e)
{
    Adapter* replacement = new Adapter(this, c, d);
    if (replacement != owned && owned)
        operator delete(owned);
    owned = replacement;
}
