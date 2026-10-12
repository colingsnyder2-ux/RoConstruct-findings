// from server: 70% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Owner {
    void* p;
    Owner() : p(0) {}
    Owner(Owner& other) : p(other.p) { other.p = 0; }
    ~Owner();
};

extern void* __cdecl metadata();

struct Callback {
    virtual void invoke();
    void* owner;
    void* object;
    int unused;
    int first;
    int second;

    Callback(void* o, void* p, int a, int b)
        : owner(o), object(p), first(a), second(b) {}
};

struct Base {
    virtual void dispatch();
    int storage[5];
    Callback* callback;

    Base(void*, int, int, Owner, Owner);
    ~Base();
};

struct S : Base {
    virtual void dispatch();
    S(int, int, void*, int, int, Owner);
};

S::S(int a, int b, void* object, int first, int second, Owner owner)
    : Base(metadata(), a, b, Owner(), owner)
{
    Callback* replacement = new Callback(this, object, first, second);
    if (replacement != callback) {
        if (callback)
            delete callback;
    }
    callback = replacement;
}
