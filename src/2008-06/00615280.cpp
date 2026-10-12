// from server: 93% by king_originala
void* __cdecl operator new(unsigned int);

extern const char typeName[];
extern const char typeInfo[];
extern const char value7[];
extern const char value1[];
extern const char value2[];
extern const char value3[];
extern const char value4[];
extern const char value5[];
extern const char value6[];
extern const char value0[];

struct Base {
    char padding[0x2c];

    Base(const char*, const char*);
    virtual ~Base();
    void addValue(int, const char*);
};

struct Empty {
    Empty();
};

inline Empty::Empty()
{
}

struct Map {
    char storage[0x20];

    Map(const Empty&, const Empty&);
    ~Map();
};

struct Proxy {
    void* pointer;

    Proxy(void*);
    ~Proxy();
};

inline Proxy::Proxy(void* owner)
{
    void* p = operator new(4);
    if (p)
        *static_cast<void**>(p) = owner;
    else
        p = 0;
    pointer = p;
}

struct Vector : Proxy {
    char padding[8];
    void* first;
    void* last;
    void* limit;

    Vector();
    ~Vector();
};

inline Vector::Vector()
    : Proxy(this), first(0), last(0), limit(0)
{
}

struct Descriptor : Base {
    Map map1;
    Map map2;
    Vector vector1;
    Vector vector2;
    Vector vector3;
    Vector vector4;
    Vector vector5;

    Descriptor();
    virtual ~Descriptor();
};

Descriptor::Descriptor()
    : Base(typeName, typeInfo),
      map1(Empty(), Empty()),
      map2(Empty(), Empty())
{
    addValue(7, value7);
    addValue(1, value1);
    addValue(2, value2);
    addValue(3, value3);
    addValue(4, value4);
    addValue(5, value5);
    addValue(6, value6);
    addValue(0, value0);
}
