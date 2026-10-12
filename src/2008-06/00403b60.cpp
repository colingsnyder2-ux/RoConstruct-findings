// from server: 70% by king_originala
typedef unsigned short WCHAR;

extern void (__stdcall *SysFreeString)(WCHAR *);
extern "C" int __cdecl function(void *, int);
extern "C" int __cdecl logMessage(int, const char *, int);

extern const int errorContext;
extern const char failedSiteUrl[];
extern const char untrustedSite[];
extern const unsigned char siteIID[];

struct Unknown;

struct UnknownTable {
    int (__stdcall *query)(Unknown *, const void *, void **);
    unsigned long (__stdcall *addRef)(Unknown *);
    unsigned long (__stdcall *release)(Unknown *);
};

struct Unknown {
    UnknownTable *table;
};

struct Site;

struct SiteTable {
    void *unused[4];
    int (__stdcall *getSite)(Site *, const void *, Unknown **);
};

struct Site {
    SiteTable *table;
};

struct ComPtr {
    Unknown *value;
    ComPtr();
    ~ComPtr();
};

inline ComPtr::ComPtr() : value(0) {}

inline ComPtr::~ComPtr()
{
    if (value)
        value->table->release(value);
}

struct Bstr {
    WCHAR *value;
    Bstr();
    ~Bstr();
};

inline Bstr::Bstr() : value(0) {}

inline Bstr::~Bstr()
{
    SysFreeString(value);
}

struct String {
    char *value;
    String();
    String(const WCHAR *, String *&);
    ~String();
};

extern void (__thiscall *stringConstruct)(String *);
extern String *(__thiscall *stringConvert)(String *, const WCHAR *);
extern void (__thiscall *stringDestroy)(String *);
extern const char *(__thiscall *stringText)(const String *);
extern void (__cdecl *stringFormat)(String *, const char *, ...);

inline String::String()
{
    stringConstruct(this);
}

inline String::String(const WCHAR *s, String *&result)
{
    result = stringConvert(this, s);
}

inline String::~String()
{
    stringDestroy(this);
}

struct S {
    unsigned char storage[8];
    int checkSite();
    int getSiteUrl(WCHAR **, int *);
};

struct Owner {
    unsigned char storage[8];
    S object;
    Site site;
};

int S::checkSite()
{
    Owner *owner = this
        ? reinterpret_cast<Owner *>(reinterpret_cast<char *>(this) - 8)
        : 0;

    ComPtr site;
    if (owner->site.table->getSite(&owner->site, siteIID, &site.value) != 0 ||
        !site.value)
        return 0;

    Bstr url;
    String *convertedResult;
    int kind;
    int result = owner->object.getSiteUrl(&url.value, &kind);
    if (result)
        return logMessage(reinterpret_cast<int>(&errorContext),
                          failedSiteUrl, result);

    result = function(url.value, kind);
    if (result) {
        String message;
        {
            String converted(url.value, convertedResult);
            stringFormat(&message, untrustedSite, convertedResult->value);
        }
        return logMessage(reinterpret_cast<int>(&errorContext),
                          stringText(&message), result);
    }

    return 0;
}
