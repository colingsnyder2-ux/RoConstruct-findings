// from server: 95% by king_originala
struct String;
typedef void (__thiscall *StringCopy)(String *, const String &);
extern StringCopy stringCopy;

struct String {
    char storage[28];
    String(const String &);
    ~String();
};

inline String::String(const String &other)
{
    stringCopy(this, other);
}

struct Receiver {
    void accept(String);
};

struct Argument {
    char reserved[16];
    char *object;
};

struct S {
    String *value;
    void *f(void *, Argument *);
};

void *S::f(void *result, Argument *argument)
{
    Receiver *receiver =
        reinterpret_cast<Receiver *>(argument->object + 8);
    receiver->accept(*value);
    return result;
}
