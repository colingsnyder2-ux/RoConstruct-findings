// from server: 93% by king_originala
extern void __cdecl registerType(void (__cdecl*)(), void*);
extern void __cdecl registerIndex();
extern void __cdecl registerKey();
extern char indexRegistration;
extern char keyRegistration;
extern void* __cdecl getIndex();
extern void* __cdecl getKey();
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
    Product(const Product&);
    ~Product();
};

inline Product::Product() : object(0)
{
    reference.control = 0;
}

struct Products
{
    char padding[12];
    Product* first;
    Product* volatile last;
    Product* limit;

    unsigned int size() const;
    Product& at(unsigned int, void (__cdecl*)());
    void resize(unsigned int, Product);
};

inline unsigned int Products::size() const
{
    return static_cast<unsigned int>(last - first);
}

inline Product& Products::at(unsigned int index, void (__cdecl* invalid)())
{
    if (index >= size())
        invalid();
    return first[index];
}

struct Creator
{
    char padding[0x190];
    Products products;

    Product create(void*);
    void* get();
};

void* Creator::get()
{
    registerType(registerIndex, &indexRegistration);
    unsigned int index = reinterpret_cast<unsigned int>(getIndex());
    void (__cdecl* invalid)() = invalidParameter;
    Products& entries = products;

    if (index + 1 > entries.size())
        entries.resize(index + 1, Product());
    else
    {
        void* existing = entries.at(index, invalid).object;
        if (existing)
            return existing;
    }

    registerType(registerKey, &keyRegistration);
    Product result = create(getKey());

    if (!result.object)
        return 0;

    void* object = result.object;
    Product& destination = entries.at(index, invalid);
    destination.object = result.object;
    destination.reference = result.reference;
    return object;
}
