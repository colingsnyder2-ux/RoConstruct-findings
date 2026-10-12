// from server: 88% by king_originala
struct String;

extern void (__thiscall *string_copy)(String*, const String&);
extern void (__thiscall *string_destroy)(String*);

struct String {
    unsigned char storage[28];

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

struct ExceptionObject {
    unsigned long words[10];

    ExceptionObject();
    ~ExceptionObject();
};

extern "C" __declspec(noreturn) void __cdecl raise_exception(const void*);

struct Dispatch {
    void* reserved;
    void (__cdecl *invoke)(void*, String);
};

struct Holder {
    Dispatch* dispatch;
    unsigned long reserved;
    unsigned char storage[1];

    void operator()(String value);
};

void Holder::operator()(String value)
{
    if (!dispatch) {
        ExceptionObject exception;
        raise_exception(&exception);
    }

    dispatch->invoke(storage, value);
}
