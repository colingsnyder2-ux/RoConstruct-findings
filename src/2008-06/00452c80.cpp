// from server: 70% by king_originala
extern "C" void __cdecl initialize(void (__cdecl*)(), void*);
extern "C" void __cdecl initializeIndex();
extern "C" void __cdecl initializeKey();
extern "C" unsigned int __cdecl getIndex();
extern "C" void* __cdecl getKey();

extern char indexState;
extern char keyState;
extern void (__cdecl* invalidParameter)();

struct Reference
{
    void* control;
    Reference& operator=(const Reference&);
};

struct Product
{
    void* object;
    Reference reference;

    Product();
    ~Product();
};

inline Product::Product()
{
    object = 0;
    reference.control = 0;
}

struct ProductArray
{
    char storage[12];
    Product* begin;
    Product* end;
    Product* capacity;

    void resize(unsigned int, Product);
};

struct Creator
{
    char storage[0x190];
    ProductArray products;

    Product create(void*);
    void* get();
};

void* Creator::get()
{
    initialize(initializeIndex, &indexState);
    unsigned int index = getIndex();
    void (__cdecl* invalid)() = invalidParameter;
    ProductArray& array = products;

    if (index + 1 > static_cast<unsigned int>(array.end - array.begin))
    {
        array.resize(index + 1, Product());
    }
    else
    {
        if (index >= static_cast<unsigned int>(array.end - array.begin))
            invalid();

        void* object = array.begin[index].object;
        if (object)
            return object;
    }

    initialize(initializeKey, &keyState);
    Product product = create(getKey());

    if (!product.object)
        return 0;

    void* result = product.object;

    if (index >= static_cast<unsigned int>(array.end - array.begin))
        invalid();

    Product* destination = array.begin + index;
    destination->object = product.object;
    destination->reference = product.reference;

    return result;
}
