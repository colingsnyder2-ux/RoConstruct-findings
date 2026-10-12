// from server: 86% by king_originala
struct TypeInfo
{
    unsigned char storage[8];
};

extern TypeInfo textureType;
extern bool (__thiscall *equalType)(const TypeInfo *, const TypeInfo &);
extern void (__thiscall *stringCopy)(void *, const void *);

struct String
{
    unsigned char storage[28];
    String(const String &);
    ~String();
};

inline String::String(const String &other)
{
    stringCopy(this, &other);
}

struct Texture
{
    String name;
    int value;
};

struct Holder
{
    virtual ~Holder();
    virtual const TypeInfo &type() const;
    virtual Holder *clone() const;
};

struct Descriptor
{
    unsigned char storage[8];
    const TypeInfo *type;
};

extern const Texture &__cdecl extractTexture(Holder **);

struct Product
{
    const Descriptor *descriptor;
    Holder *holder;

    Product(const Product &);
    ~Product();
    const Texture &convert();
    Texture get();
};

inline Product::Product(const Product &other)
{
    Holder *p = other.holder;
    descriptor = other.descriptor;
    holder = p ? p->clone() : 0;
}

inline Product::~Product()
{
    if (holder)
        delete holder;
}

Texture Product::get()
{
    if (equalType(&textureType, *descriptor->type))
        return extractTexture(&holder);

    Product temporary(*this);
    return temporary.convert();
}
