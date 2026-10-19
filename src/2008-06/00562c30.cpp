// from server: 94% by king_originala
typedef unsigned int size_t;
void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

extern const unsigned long table0[], table10[], table14[], table20[];
extern const unsigned long table24[], table44[], table64[], table84[];
extern const unsigned long tableA4[], tableC4[];
extern const char contentName[];

struct Base {
    unsigned long words[76];
    Base();
    ~Base();
};

struct Small {
    char data[8];
    Small();
    Small(int);
    void initialize();
    ~Small();
};

inline Small::Small(int)
{
    initialize();
}

struct First {
    char data[28];
    First();
    ~First();
};

struct Second {
    char data[28];
    Second();
    ~Second();
};

struct Tag {
    Tag();
};

inline Tag::Tag() {}

struct Container {
    char data[32];
    Container(const Tag&, const Tag&);
    ~Container();
};

struct S;
typedef void (__cdecl *Callback)();
extern void __cdecl callback();

struct Binding {
    Callback function;
    unsigned long zero;
    S* object;
    unsigned long extra;
    Binding(S*);
};

inline Binding::Binding(S* p)
{
    function = callback;
    zero = 0;
    object = p;
}

struct Function {
    typedef void (__cdecl *Manager)(void*, void*, int);
    Manager* manager;
    unsigned long reserved;
    char storage[16];
    unsigned long padding[2];

    Function(Binding, int);
    ~Function();
};

inline Function::~Function()
{
    if (manager) {
        Manager m = *manager;
        if (m)
            m(storage, storage, 1);
    }
}

struct Resource {
    char data[20];
    Resource(const Function&, const char*);
    ~Resource();
};

struct Owner {
    Resource* pointer;
    Owner();
    ~Owner();
    void reset(Resource*);
};

inline Owner::Owner() : pointer(0) {}

inline Owner::~Owner()
{
    if (pointer)
        delete pointer;
}

inline void Owner::reset(Resource* p)
{
    Resource* old = pointer;
    pointer = p;
    if (old)
        delete old;
}

struct S : Base {
    Small first;
    First second;
    Second third;
    Small fourth;
    Container fifth;
    Owner resource;
    S();
};

S::S()
    : Base(),
      first((
          words[0] = reinterpret_cast<unsigned long>(table0),
          words[4] = reinterpret_cast<unsigned long>(table10),
          words[5] = reinterpret_cast<unsigned long>(table14),
          words[8] = reinterpret_cast<unsigned long>(table20),
          words[9] = reinterpret_cast<unsigned long>(table24),
          words[17] = reinterpret_cast<unsigned long>(table44),
          words[25] = reinterpret_cast<unsigned long>(table64),
          words[33] = reinterpret_cast<unsigned long>(table84),
          words[41] = reinterpret_cast<unsigned long>(tableA4),
          words[49] = reinterpret_cast<unsigned long>(tableC4),
          0)),
      second(), third(), fourth(),
      fifth(Tag(), Tag()), resource()
{
    resource.reset(new Resource(Function(Binding(this), 0), contentName));
}
