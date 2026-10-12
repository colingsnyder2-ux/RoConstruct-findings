// from server: 92% by king_originala
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

struct Arg
{
    int value;
    Arg(const int&);
    Arg(const Arg&);
};

__forceinline Arg::Arg(const int& other)
{
    value = other;
}

__forceinline Arg::Arg(const Arg& other)
{
    value = other.value;
}

struct Item
{
    Arg first;
    int second;
    int third;
    String text;

    Item(Arg, int, int, String);
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
    return Result(key, Item(Arg(a), b, c, text));
}
