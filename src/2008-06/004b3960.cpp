// from server: 97% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct S;

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Product {
    void attach(S*);
};

struct Shared {
    Product* object;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct ControlSlot {
    Control* control;
    ControlSlot& operator=(const ControlSlot&);
};

struct Entry {
    Product* object;
    ControlSlot owner;
};

Shared __cdecl createProduct();
unsigned int __cdecl getIndex();
void __cdecl callback();
extern char registrationData;
void __cdecl registerCallback(void (__cdecl*)(), void*);

struct S {
    unsigned char storage[0x19c];
    Entry* first;
    Entry* last;

    Product* findProduct();
    Product* getProduct();
};

Product* S::getProduct()
{
    Product* result = findProduct();
    if (result)
        return result;

    Shared value = createProduct();
    result = value.object;
    registerCallback(callback, &registrationData);

    unsigned int index = getIndex();
    if (index >= static_cast<unsigned int>(last - first))
        _invalid_parameter_noinfo();

    Entry* entry = first + index;
    entry->object = value.object;
    entry->owner = *reinterpret_cast<ControlSlot*>(&value.control);
    result->attach(this);
    return result;
}
