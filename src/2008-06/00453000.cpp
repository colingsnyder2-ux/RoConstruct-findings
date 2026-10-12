// from server: 97% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Document;

struct Product {
    void attach(Document*);
};

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Reference {
    Control* control;
    Reference& operator=(const Reference&);

    ~Reference()
    {
        Control* p = control;
        if (p) {
            if (_InterlockedDecrement(&p->strong) == 0) {
                p->dispose();
                if (_InterlockedDecrement(&p->weak) == 0)
                    p->destroy();
            }
        }
    }
};

struct Entry {
    Product* value;
    Reference reference;
};

extern Entry __cdecl createEntry();
extern unsigned int __cdecl getIndex();
extern void __cdecl registerValue(void (__cdecl*)(), void*);
extern void __cdecl initializeType();
extern unsigned char typeStorage;
extern void (__cdecl *invalidParameter)();

struct Document {
    unsigned char padding[0x19c];
    Entry* first;
    Entry* last;

    Product* findProduct();
    Product* getProduct();
};

Product* Document::getProduct()
{
    Product* result = findProduct();
    if (result)
        return result;

    Entry temporary = createEntry();
    result = temporary.value;
    registerValue(initializeType, &typeStorage);

    unsigned int index = getIndex();
    if (index >= static_cast<unsigned int>(last - first))
        invalidParameter();

    Entry& destination = first[index];
    destination.value = temporary.value;
    destination.reference = temporary.reference;
    result->attach(this);
    return result;
}
