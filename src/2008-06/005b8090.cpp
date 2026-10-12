// from server: 91% by king_originala
struct TypeInfo {
    bool operator==(const TypeInfo&) const;
};

struct Descriptor {
    char padding[8];
    TypeInfo* type;
};

extern TypeInfo expectedType;

struct String {
    char storage[28];
    ~String();
};

struct Argument {
    char storage[32];
    Argument(const String*);
    ~Argument();
};

struct Product {
    virtual ~Product();
    char storage[32];
};

struct FactoryProduct {
    Product* product;
    FactoryProduct(void* arg);
    ~FactoryProduct() { delete product; }

    void swap(FactoryProduct& other)
    {
        if (this != &other) {
            Product* old = product;
            product = other.product;
            other.product = old;
        }
    }
};

String __cdecl makeString(Product* const*);
Descriptor* __cdecl getDescriptor();

struct S {
    Descriptor* descriptor;
    Product* product;

    void refresh();
    void finish();
};

void S::refresh()
{
    if (expectedType == *descriptor->type) {
        FactoryProduct(&Argument(&makeString(&product))).swap(
            *reinterpret_cast<FactoryProduct*>(&product));
        descriptor = getDescriptor();
    }
    finish();
}
