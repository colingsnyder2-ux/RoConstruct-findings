// from server: 59% by king_originala
struct String;

extern String* (__thiscall* copyString)(String*, const String&);
extern void (__thiscall* destroyString)(String*);

struct Payload;

struct String {
    unsigned char storage[28];
    String(const String&);
    ~String();
    const Payload* get();
};

struct Payload {
    String text;
    int value;
};

struct Product {
    int identifier;
    Payload payload;
    Product(int, const Payload&);
};

inline String::String(const String& source)
{
    copyString(this, source);
}

inline String::~String()
{
    destroyString(this);
}

inline Product::Product(int id, const Payload& source)
    : identifier(id), payload(source)
{
}

Product makeProduct(int identifier, String input)
{
    String temporary(input);
    return Product(identifier, *temporary.get());
}
