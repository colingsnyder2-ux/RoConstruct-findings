// from server: 84% by king_originala
struct Url
{
    char data[0x1226];
    unsigned short port;
    int scheme;
    int flags;
    char tail[0x14];

    void Init();
    void f(int, unsigned int);
};

struct Text
{
    void *data;

    Text(const char *);
    ~Text() throw();
    void lower();
    const char *c_str() const;
};

struct String
{
    char data[28];

    String();
    String(const char *);
    ~String() throw();
    const char *c_str() const;
};

struct Stream
{
    char data[56];

    Stream(const char *);
    ~Stream();
    void read(String *);
};

extern int sourceCode;
extern const char suffix[];
extern const char trueText[];

extern int (__cdecl *copyText)(char *, unsigned int, const char *, unsigned int);
extern void __cdecl checkResult(int);

extern void (__thiscall *textConstruct)(Text *, const char *);
extern void (__thiscall *textDestroy)(Text *);
extern void (__thiscall *textLower)(Text *);
extern const char *(__thiscall *textChars)(const Text *);

extern void (__thiscall *stringConstruct)(String *, const char *);
extern void (__thiscall *stringDefault)(String *);
extern void (__thiscall *stringDestroy)(String *);
extern const char *(__thiscall *stringChars)(const String *);

extern Text __cdecl getBase();
extern Text __cdecl appendText(const Text &, const char *);
extern String __cdecl formatText(const char *, const char *);
extern bool (__cdecl *equalText)(const String &, const char *);

inline Text::Text(const char *p)
{
    textConstruct(this, p);
}

inline Text::~Text() throw()
{
    textDestroy(this);
}

inline void Text::lower()
{
    textLower(this);
}

inline const char *Text::c_str() const
{
    return textChars(this);
}

inline String::String()
{
    stringDefault(this);
}

inline String::String(const char *p)
{
    stringConstruct(this, p);
}

inline String::~String() throw()
{
    stringDestroy(this);
}

inline const char *String::c_str() const
{
    return stringChars(this);
}

bool __cdecl isAdSyndicator(int value)
{
    Url url;
    url.Init();
    url.scheme = 2;
    url.flags = 4;
    url.port = 80;
    checkResult(copyText(url.data, 33,
                        reinterpret_cast<const char *>(sourceCode), 4));
    url.f(value, 0);

    if (url.scheme != 0 && (url.scheme <= 1 || url.scheme > 3))
        return false;

    Text site(url.data + 33);
    site.lower();

    static String endpoint(appendText(getBase(), suffix).c_str());

    Stream response(formatText(endpoint.c_str(), site.c_str()).c_str());
    try
    {
        String result;
        response.read(&result);
        return equalText(result, trueText);
    }
    catch (...)
    {
        return false;
    }
}
