// from server: 99% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl * const invalidParameter)();

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Product {
    unsigned int value;
    Control* control;
};

extern Product* __cdecl getProduct(Product*, void*);

struct Entry {
    unsigned int value;
    unsigned int data;
};

struct Container {
    void* owner;
    unsigned char padding[8];
    Entry* first;
    Entry* last;
};

struct Iterator {
    void* owner;
    Entry* position;
};

struct S {
    unsigned char padding[0x154];
    Container* container;
    bool f(void*);
};

bool S::f(void* argument)
{
    Iterator savedEnd;
    Product product;
    Product* key = getProduct(&product, argument);

    Container* original = container;
    savedEnd.position = original->last;
    if (original->first > savedEnd.position)
        invalidParameter();

    Container* c = container;
    Entry* end = c->last;
    savedEnd.owner = original->owner;
    if (c->first > end)
        invalidParameter();

    c = container;
    Entry* current = c->first;
    if (current > c->last)
        invalidParameter();

    Iterator begin;
    begin.owner = c->owner;
    *(Entry* volatile*)&begin.position = current;

    while (current != end) {
        if (current->value == key->value)
            break;
        ++current;
    }

    if (!begin.owner || begin.owner != savedEnd.owner)
        invalidParameter();

    bool result = current != savedEnd.position;
    Control* control = product.control;
    if (control) {
        if (_InterlockedDecrement(&control->strong) == 0) {
            control->dispose();
            if (_InterlockedDecrement(&control->weak) == 0)
                control->destroy();
        }
    }
    return result;
}
