// from server: 55% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

template<class T> struct Shared {
    T* p;
    Control* control;

    Shared(const Shared& other);
    ~Shared();
    Shared copy() const;
};

template<class T>
Shared<T>::Shared(const Shared& other)
    : p(other.p), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

template<class T>
Shared<T>::~Shared()
{
    if (control && _InterlockedExchangeAdd(&control->strong, -1) == 1) {
        control->dispose();
        if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
            control->destroy();
    }
}

struct S;
struct Vector;

struct Proxy {
    Vector* owner;
};

struct Vector {
    Proxy* proxy;
    unsigned reserved[2];
    Shared<S>* begin;
    Shared<S>* end;
};

typedef void (__cdecl *Visitor)(Shared<S>, void*);

struct S {
    unsigned char reserved[0x108];
    Shared<Vector> children;

    void visit(Visitor callback, void* context);
};

void S::visit(Visitor callback, void* context)
{
    if (children.p) {
        Shared<Vector> snapshot = children.copy();
        Vector* vector = snapshot.p;
        Shared<S>* finish = vector->end;

        if (vector->begin > finish)
            _invalid_parameter_noinfo();

        Shared<S>* cursor = vector->begin;
        Proxy* expected = vector->proxy;

        if (cursor > vector->end)
            _invalid_parameter_noinfo();

        Proxy* proxy = vector->proxy;

        for (;;) {
            if (!proxy || proxy != expected)
                _invalid_parameter_noinfo();

            if (cursor == finish)
                break;

            if (!proxy)
                _invalid_parameter_noinfo();
            if (cursor >= (proxy ? proxy->owner : 0)->end)
                _invalid_parameter_noinfo();

            callback(*cursor, context);

            if (!proxy)
                _invalid_parameter_noinfo();
            if (cursor >= (proxy ? proxy->owner : 0)->end)
                _invalid_parameter_noinfo();

            cursor->p->visit(callback, context);

            if (!proxy)
                _invalid_parameter_noinfo();
            if (cursor >= (proxy ? proxy->owner : 0)->end)
                _invalid_parameter_noinfo();

            ++cursor;
        }
    }
}
