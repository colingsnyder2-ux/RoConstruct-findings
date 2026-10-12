// from server: 97% by king_originala
struct ErrorBase {
    ErrorBase();
    virtual void describe(char *, unsigned int, int);
    unsigned int reserved;
};

struct Error : ErrorBase {
    int code;
    virtual void describe(char *, unsigned int, int);
    ~Error();
};

inline Error::~Error()
{
}

struct String {
    char *data;
    String();
    ~String();
};

extern void (__thiscall *stringConstruct)(String *);
extern void (__cdecl *stringFormat)(String *, const char *, ...);
extern const char *(__thiscall *stringData)(String *);
extern void (__thiscall *stringDestroy)(String *);

inline String::String()
{
    stringConstruct(this);
}

inline String::~String()
{
    stringDestroy(this);
}

extern void __cdecl report(const char *, const char *);

void __cdecl reportError(const char *destination, int code,
                         const char *detail, const char *context)
{
    Error error;
    char buffer[1024];
    error.code = code;
    error.Error::describe(buffer, 1024, 0);

    String text;
    stringFormat(&text, "HRESULT = %d: %s", code, buffer, detail, context);
    report(destination, stringData(&text));
}
