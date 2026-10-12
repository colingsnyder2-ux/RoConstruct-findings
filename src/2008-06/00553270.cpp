// from server: 63% by king_originala
#pragma optimize("y", off)

struct String;

typedef void (__thiscall *StringConstructor)(String *, const char *);
typedef void (__thiscall *StringDestructor)(String *);

extern StringConstructor stringConstructor;
extern StringDestructor stringDestructor;

struct String {
    unsigned char storage[28];
    String(const char *);
    ~String();
};

inline String::String(const char *text)
{
    stringConstructor(this, text);
}

inline String::~String()
{
    stringDestructor(this);
}

struct Error {
    unsigned char storage[32];
    Error(const String &);
};

extern unsigned char errorThrowInfo;

void raiseVectorTooLong()
{
    String message("vector<T> too long");
    Error error(message);
    _CxxThrowException(&error, reinterpret_cast<_ThrowInfo *>(&errorThrowInfo));
}
