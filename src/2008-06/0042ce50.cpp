// from server: 98% by king_originala
struct String;

extern String* (__thiscall* string_copy)(String*, const String&);
extern void (__thiscall* string_destroy)(String*);

struct String {
    char data[28];
    String(const String&);
    ~String();
};

inline String::String(const String& source)
{
    string_copy(this, source);
}

inline String::~String()
{
    string_destroy(this);
}

struct Result {
    void* value;
    Result();
};

struct Receiver {
    Result apply(String);
};

struct Object {
    char padding[16];
    Receiver receiver;
};

struct Binder {
    Object* lookup(void*);
    void invoke(void*, String);
};

void Binder::invoke(void* value, String text)
{
    Object* object = lookup(value);
    if (object)
        object->receiver.apply(text);
}
