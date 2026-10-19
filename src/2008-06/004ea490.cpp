// from server: 79% by colin
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Payload {
    int a, b, c, d;
};

struct Embedded {
    int* state;
    int reserved;
    Payload payload;

    Embedded(Payload, int);
    ~Embedded();
};

struct Object {
    char storage[40];
    Object();
};

struct Control {
    void* pointer;

    Control();
    ~Control();
};

struct Owner {
    Object* object;
    Control control;

    Owner();
    ~Owner();
    void set(Object*);
};

inline Owner::Owner() : object(0), control()
{
}

struct Part {
    Owner owner;
    Embedded embedded;

    Part(const Payload&);
    void finish();
};

Part::Part(const Payload& value)
    : owner(), embedded(value, 0)
{
    owner.set(new Object);
    finish();
}
