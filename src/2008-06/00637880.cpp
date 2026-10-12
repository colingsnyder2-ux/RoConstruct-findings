// from server: 69% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Owner {
    void* p;
    Owner(void* value = 0) : p(value) {}
    Owner(Owner& other) : p(other.p) { other.p = 0; }
    ~Owner() { if (p) operator delete(p); }
};

extern void* __cdecl getType();

struct Callback;

struct Base {
    virtual void invoke();
    unsigned char data[20];
    Callback* callback;

    Base(void*, int, int, Owner, Owner);
    ~Base();
};

struct Object;

struct Callback {
    virtual void invoke();
    Object* object;
    int first;
    int unused;
    int second;
    int third;

    Callback(Object*, int, int, int);
};

struct Object : Base {
    virtual void invoke();
    Object(int, int, int, int, int, Owner);
};

inline Callback::Callback(Object* value, int a, int b, int c)
    : object(value), first(a), second(b), third(c)
{
}

Object::Object(int a, int b, int c, int d, int e, Owner owner)
    : Base(getType(), a, b, Owner(), owner)
{
    Callback* replacement = new Callback(this, c, d, e);
    if (replacement != callback) {
        if (callback)
            operator delete(callback);
    }
    callback = replacement;
}
