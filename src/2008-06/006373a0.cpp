// from server: 65% by king_originala
typedef unsigned int Word;

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

extern "C" void* __stdcall getDescriptor(Word, Word);

struct Owner {
    void* pointer;

    Owner() : pointer(0) {}
    Owner(Owner& other) : pointer(other.pointer) {
        other.pointer = 0;
    }
    ~Owner() {
        if (pointer)
            operator delete(pointer);
    }
};

struct Base {
    virtual ~Base();
    Word storage[5];
    void* owned;

    Base(void*, Owner, Owner);
};

struct S;

struct Callback {
    virtual void invoke();
    S* object;
    Word method;
    double value;

    Callback(S* objectArg, Word methodArg, double valueArg)
        : object(objectArg), method(methodArg), value(valueArg) {}
};

struct S : Base {
    S(Word, Word, Word, double, Owner);
    virtual ~S();
};

S::S(Word first, Word second, Word method, double value, Owner owner)
    : Base(getDescriptor(first, second), Owner(), owner)
{
    Callback* replacement = new Callback(this, method, value);
    if (replacement != owned && owned)
        operator delete(owned);
    owned = replacement;
}
