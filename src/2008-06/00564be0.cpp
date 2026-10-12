// from server: 93% by king_originala
extern void* __cdecl G_006a0920(unsigned int);

struct Tag
{
    Tag();
};

__forceinline Tag::Tag()
{
}

struct Base
{
    unsigned int storage[11];
    Base(const char*, const void*);
    virtual ~Base();
};

struct Map
{
    unsigned int storage[8];
    Map(const Tag&, const Tag&);
    ~Map();
};

struct Vector;

struct Proxy
{
    Vector** value;
    Proxy(Vector*);
    ~Proxy();
};

struct Vector : Proxy
{
    unsigned int unused[2];
    void* first;
    void* last;
    void* limit;

    Vector();
    ~Vector();
};

struct S : Base
{
    Map map1;
    Map map2;
    Vector vector1;
    Vector vector2;
    Vector vector3;
    Vector vector4;
    Vector vector5;

    S();
    virtual ~S();
    void G_0064d530(int, const char*);
};

__forceinline Proxy::Proxy(Vector* owner)
{
    Vector** p = static_cast<Vector**>(G_006a0920(4));
    if (p)
        *p = owner;
    else
        p = 0;
    value = p;
}

__forceinline Vector::Vector() : Proxy(this)
{
    first = 0;
    last = 0;
    limit = 0;
}

S::S()
    : Base(reinterpret_cast<const char*>(0x82e364),
           reinterpret_cast<const void*>(0x9452a0)),
      map1(Tag(), Tag()),
      map2(Tag(), Tag()),
      vector1(),
      vector2(),
      vector3(),
      vector4(),
      vector5()
{
    G_0064d530(0, reinterpret_cast<const char*>(0x82e358));
    G_0064d530(1, reinterpret_cast<const char*>(0x82e34c));
    G_0064d530(2, reinterpret_cast<const char*>(0x82e344));
    G_0064d530(3, reinterpret_cast<const char*>(0x82e33c));
}
