// from server: 70% by king_originala
typedef unsigned int size_t;
void* __cdecl operator new(size_t);

struct String;
typedef String* (__thiscall *StringConstructor)(String*, const char*);
typedef void (__thiscall *StringDestructor)(String*);
extern StringConstructor stringConstructor;
extern StringDestructor stringDestructor;

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

inline String::String(const char* text)
{
    stringConstructor(this, text);
}

inline String::~String()
{
    stringDestructor(this);
}

struct Root;

struct Proxy {
    Root* owner;
    Proxy(Root*);
};

inline Proxy::Proxy(Root* p) : owner(p)
{
}

struct Storage {
    unsigned int unused;
    unsigned int first;
    unsigned int last;
    unsigned int count;

    Storage();
    ~Storage();
};

inline Storage::Storage() : first(0), last(0), count(0)
{
}

struct Root {
    Proxy* proxy;
    unsigned int unused;
    Storage storage;

    Root();
    ~Root();
};

inline Root::Root() : proxy(new Proxy(this))
{
}

struct Transform {
    float data[12];
};

struct Argument {
    char data[48];
};

struct Part {
    void detach(int);
};

struct Context {
    void* get();
    Transform calculate(const Argument&, const String&);
};

struct Receiver {
    char data[40];
    void assign(void*, Part*, const Transform&);
};

struct Resettable {
    void reset();
};

struct S {
    char padding0[0x104];
    void* context;
    char padding1[0x28];
    Receiver receiver;
    Argument argument;
    Resettable resettable;

    Part* getPart();
    void f();
};

void __cdecl initialize(S*, Root*);
void __cdecl finish(void*);
Context* __cdecl getContext(void*);

void S::f()
{
    resettable.reset();
    Root root;
    initialize(this, &root);
    finish(&root.storage);

    Context* c = getContext(context);
    void* value = c->get();
    Part* part = getPart();
    if (part)
        part->detach(0);

    String name("HeadWeld");
    receiver.assign(value, part, c->calculate(argument, name));
}
