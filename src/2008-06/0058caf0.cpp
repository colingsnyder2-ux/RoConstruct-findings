// from server: 49% by king_originala
struct StreamBuf {
    int sbumpc();
    int sgetc();
};

typedef int (StreamBuf::*StreamCall)();
extern StreamCall sbumpc_ptr;
extern StreamCall sgetc_ptr;

struct String;
typedef void (String::*StringDefaultCall)();
typedef void (String::*StringTextCall)(const char*);
typedef String& (String::*StringAppendCall)(char);

extern StringDefaultCall string_default_ptr;
extern StringTextCall string_text_ptr;
extern StringAppendCall string_append_ptr;

struct String {
    char storage[28];
    String();
    String(const char*);
    String(const String&);
    ~String();
    String& operator+=(char);
};

inline String::String()
{
    (this->*string_default_ptr)();
}

inline String::String(const char* text)
{
    (this->*string_text_ptr)(text);
}

inline String& String::operator+=(char c)
{
    return (this->*string_append_ptr)(c);
}

struct Error {
    char storage[40];
    Error(const String&);
    Error(const Error&);
    ~Error();
};

struct Verb {
    char pad[4];
    StreamBuf* stream;
    void skipWhitespace();
    String readTag();
};

String Verb::readTag()
{
    int count = 0;
    skipWhitespace();

    for (;;) {
        if (count++ > 4)
            throw Error(String("tag expected after Byte-Order-Mark"));

        char c = static_cast<char>((stream->*sgetc_ptr)());
        if ((stream->*sbumpc_ptr)() == -1)
            throw Error(String("Expected '<' but got EOF in Xml stream"));

        if (c == '<')
            break;
    }

    String tag;
    tag += '<';

    char c;
    do {
        c = static_cast<char>((stream->*sgetc_ptr)());
        if ((stream->*sbumpc_ptr)() == -1)
            throw Error(String("Expected '>' but got EOF in Xml stream"));
        tag += c;
    } while (c != '>');

    return tag;
}
