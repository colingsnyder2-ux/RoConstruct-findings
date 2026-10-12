// from server: 78% by king_originala
struct String
{
    char data[28];
    String(const String&);
    ~String();
};

extern void (__thiscall *stringCopy)(String*, const String&);
extern void (__thiscall *stringDestroy)(String*);

__forceinline String::String(const String& value)
{
    stringCopy(this, value);
}

__forceinline String::~String()
{
    stringDestroy(this);
}

struct Key
{
    int first;
    int second;
};

struct Item
{
    int first;
    int second;
    int third;
    String text;

    Item(int, int, int, String);
};

struct Result
{
    Key key;
    Item item;

    Result(const Key&, const Item&);
};

__forceinline Result::Result(const Key& k, const Item& value)
    : key(k), item(value)
{
}

Result f(Key key, int a, int b, int c, String text)
{
    return Result(key, Item(a, b, c, text));
}
