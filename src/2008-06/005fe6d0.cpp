// from server: 70% by king_originala
typedef unsigned int size_t;
void* __cdecl operator new(size_t);

struct Collection;

struct Allocator {
    ~Allocator();
};

struct Owner {
    Collection** pointer;
    ~Owner();
};

struct Collection : Allocator {
    Owner owner;
    char reserved[8];
    void* first;
    void* last;
    void* end;

    Collection();
    ~Collection();
};

inline Collection::Collection()
{
    Collection** p = new Collection*;
    if (p)
        *p = this;
    owner.pointer = p;
    first = 0;
    last = 0;
    end = 0;
}

struct String;
typedef void (__thiscall *StringConstructor)(String*, const char*);
typedef void (__thiscall *StringDestructor)(String*);
extern StringConstructor constructString;
extern StringDestructor destroyString;

struct String {
    char storage[28];
    String(const char* p) { constructString(this, p); }
    ~String() { destroyString(this); }
};

struct Transform {
    float data[12];
};

struct Connection {
    char storage[4];
    void disconnect();
};

struct Part {
    void setParent(void*);
};

struct Context {
    void* getState();
    Transform getTransform(const Transform*, const String*);
};

struct Grip {
    char storage[4];
    void update(void*, Part*, const Transform&);
};

struct Tool {
    char padding0[0x104];
    void* parent;
    char padding1[0x98];
    Grip grip;
    char padding2[0x28];
    Transform transform;
    char padding3[8];
    Connection connection;

    Part* getPart();
    void updateGrip();
};

extern "C" void __cdecl collect(Tool*, Collection*);
extern "C" void __cdecl prepare(Collection*);
extern "C" Context* __cdecl getContext(void*);

void Tool::updateGrip()
{
    connection.disconnect();
    Collection objects;
    collect(this, &objects);
    prepare(&objects);
    Context* context = getContext(parent);
    void* state = context->getState();
    Part* part = getPart();
    if (part)
        part->setParent(0);
    String name("RightGrip");
    grip.update(state, part, context->getTransform(&transform, &name));
}
