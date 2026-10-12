// from server: 92% by king_originala
struct String;

extern void (__thiscall *stringCopy)(String*, const String&);
extern void (__thiscall *stringDestroy)(String*);

struct String
{
    void* data;

    String(const String&);
    ~String();
};

__forceinline String::String(const String& other)
{
    stringCopy(this, other);
}

__forceinline String::~String()
{
    stringDestroy(this);
}

struct S
{
    typedef bool (__thiscall *Query)(S*);
    Query* vtable;

    void f(String value);
    void set(String value);
    void update(const bool& value);
};

void S::f(String value)
{
    set(value);
    bool result = vtable[60](this);
    update(result);
}
