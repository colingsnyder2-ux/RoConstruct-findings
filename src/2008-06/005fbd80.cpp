// from server: 65% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl* invalid_parameter_noinfo)();

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

template<class T> struct Shared {
    T* ptr;
    Control* control;
    __forceinline ~Shared();
    __forceinline Shared& operator=(const Shared& other);
};

template<class T> __forceinline Shared<T>::~Shared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

template<class T>
__forceinline Shared<T>& Shared<T>::operator=(const Shared& other)
{
    if (this != &other)
        ptr = other.ptr;
    Control* old = control;
    control = other.control;
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
    if (old && _InterlockedExchangeAdd(&old->strong, -1) == 0) {
        old->dispose();
        if (_InterlockedExchangeAdd(&old->weak, -1) == 0)
            old->destroy();
    }
    return *this;
}

struct Object {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void finish();
    virtual void detach();
};

struct Child {
    char padding[0x148];
    Object* object;
};

struct Vector;

struct Proxy {
    Vector* owner;
};

struct Iterator {
    Proxy* proxy;
    Shared<Child>* current;
    __forceinline Shared<Child>& operator*() const;
    __forceinline Iterator& operator++();
    __forceinline bool operator!=(const Iterator& other) const;
};

struct Vector {
    Proxy* proxy;
    char padding[8];
    Shared<Child>* first;
    Shared<Child>* last;
    __forceinline Iterator begin();
    __forceinline Iterator end();
};

__forceinline Iterator Vector::begin()
{
    Shared<Child>* p = first;
    if (p > last)
        invalid_parameter_noinfo();
    Iterator result = { proxy, p };
    return result;
}

__forceinline Iterator Vector::end()
{
    Shared<Child>* p = last;
    if (first > p)
        invalid_parameter_noinfo();
    Iterator result = { proxy, p };
    return result;
}

__forceinline bool Iterator::operator!=(const Iterator& other) const
{
    if (!proxy || proxy != other.proxy)
        invalid_parameter_noinfo();
    return current != other.current;
}

__forceinline Shared<Child>& Iterator::operator*() const
{
    if (!proxy)
        invalid_parameter_noinfo();
    Vector* owner = proxy ? proxy->owner : 0;
    if (current >= owner->last)
        invalid_parameter_noinfo();
    return *current;
}

__forceinline Iterator& Iterator::operator++()
{
    if (!proxy)
        invalid_parameter_noinfo();
    Vector* owner = proxy ? proxy->owner : 0;
    if (current >= owner->last)
        invalid_parameter_noinfo();
    ++current;
    return *this;
}

struct Holder {
    Shared<Vector> get();
};

struct S {
    char padding0[0x108];
    Holder children;
    char padding1[0x1a0 - 0x108 - sizeof(Holder)];
    Shared<Object> active;
    void f();
};

void S::f()
{
    if (active.ptr) {
        Shared<Vector> list = children.get();
        if (list.ptr) {
            for (Iterator i = list.ptr->begin(); i != list.ptr->end(); ++i) {
                Object* object = (*i).ptr->object;
                if (object != active.ptr)
                    object->detach();
            }
        }
        active.ptr->finish();
        Shared<Object> empty = { 0, 0 };
        active = empty;
    }
}
