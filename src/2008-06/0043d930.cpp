// from server: 93% by king_originala
struct Text;
extern const char* (__thiscall* text_data)(const Text*);
extern void (__thiscall* text_destroy)(Text*) throw();

struct Text {
    int value;
    const char* c_str() const;
    ~Text() throw();
};

inline const char* Text::c_str() const
{
    return text_data(this);
}

inline Text::~Text() throw()
{
    text_destroy(this);
}

struct String;
extern void (__thiscall* string_construct)(String*, const char*);
extern void (__thiscall* string_destroy)(String*) throw();

struct String {
    char storage[28];
    String(const char*);
    ~String() throw();
};

inline String::String(const char* text)
{
    string_construct(this, text);
}

inline String::~String() throw()
{
    string_destroy(this);
}

extern bool __cdecl parse_component(const String&, float*);

struct Vector {
    float x, y, z;
    Vector() {}
    Vector(float, float, float);
};

inline Vector::Vector(float a, float b, float c)
    : x(a), y(b), z(c)
{
}

struct Vector3ComponentItem {
    char padding[0x130];
    int component;
    Vector value;

    Text copy();
    Vector getValue();
};

Vector Vector3ComponentItem::getValue()
{
    Vector result;
    result.x = value.x;
    result.y = value.y;
    result.z = value.z;
    bool valid = parse_component(String(copy().c_str()),
                                 &result.x + component);
    if (valid)
        return Vector(result.x, result.y, result.z);
    return Vector(value.x, value.y, value.z);
}
