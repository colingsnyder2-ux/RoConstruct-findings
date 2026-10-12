// from server: 97% by king_originala
struct String {
    unsigned char storage[28];
    String(const String &);
    ~String();
};

extern void (__thiscall *stringCopy)(String *, const String &);
extern void (__thiscall *stringDestroy)(String *);

__forceinline String::String(const String &value)
{
    stringCopy(this, value);
}

__forceinline String::~String()
{
    stringDestroy(this);
}

struct S {
    void invoke(String, int);
};

void forward(S *object, String value, int argument)
{
    object->invoke(value, argument);
}
