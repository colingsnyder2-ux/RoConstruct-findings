// from server: 99% by king_originala
struct String;

typedef void (__thiscall *StringCtor)(String*);
typedef void (__thiscall *StringCopyCtor)(String*, const String&);
typedef void (__thiscall *StringDtor)(String*);
typedef String& (__thiscall *StringAppend)(String*, int);

extern StringCtor string_ctor;
extern StringCopyCtor string_copy_ctor;
extern StringDtor string_dtor;
extern StringAppend string_append;

struct String {
    char storage[28];
    String();
    String(const String&);
    ~String();
    String& operator+=(int);
};

inline String::String() {
    string_ctor(this);
}

inline String::String(const String& other) {
    string_copy_ctor(this, other);
}

inline String::~String() {
    string_dtor(this);
}

inline String& String::operator+=(int c) {
    return string_append(this, c);
}

struct StreamBuf {
    int sbumpc();
    int sgetc();
};

typedef int (__thiscall *StreamGet)(StreamBuf*);
extern StreamGet stream_sbumpc;
extern StreamGet stream_sgetc;

inline int StreamBuf::sbumpc() {
    return stream_sbumpc(this);
}

inline int StreamBuf::sgetc() {
    return stream_sgetc(this);
}

String __cdecl decode(String);

struct Verb {
    char pad[4];
    StreamBuf* stream;
    void skipWhitespace();
    String readText(bool);
};

String Verb::readText(bool escaped) {
    skipWhitespace();
    String text;
    while ((char)stream->sgetc() != '<')
        text += stream->sbumpc();
    if (escaped)
        return decode(text);
    return text;
}
