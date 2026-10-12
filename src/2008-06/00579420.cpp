// from server: 53% by king_originala
struct String {
    char storage[28];
    String(const String&);
    ~String();
};

extern void (__thiscall *stringCopy)(String*, const String&);
extern void (__thiscall *stringDestroy)(String*);

__forceinline String::String(const String& other) {
    stringCopy(this, other);
}

__forceinline String::~String() {
    stringDestroy(this);
}

struct Value {
    virtual ~Value();
};

struct Holder {
    Value* value;
    Holder(const String&);
    ~Holder();
    void swap(Holder&);
};

__forceinline Holder::~Holder() {
    if (value)
        delete value;
}

__forceinline void Holder::swap(Holder& other) {
    if (this != &other) {
        Value* old = other.value;
        other.value = value;
        value = old;
    }
}

struct Result {
    void* type;
    Holder owner;
};

struct Input {
    const String& get(unsigned char);
};

struct Selector {
    const unsigned char* get();
};

extern void* __cdecl getType();

struct Base1 {};
struct Base2 {};
struct Object : Base1, Base2 {};

struct S {
    char padding[56];
    String (Object::*method)(String);
    void f(Object*, Result*, Input*, Selector*);
};

void S::f(Object* object, Result* result, Input* input, Selector* selector) {
    String returned = (object->*method)(input->get(*selector->get()));
    result->type = getType();
    Holder(returned).swap(result->owner);
}
