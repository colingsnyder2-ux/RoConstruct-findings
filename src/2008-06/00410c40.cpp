// from server: 92% by king_originala
struct String;

typedef void (__thiscall *StringCopy)(String *, const String &);
typedef void (__thiscall *StringDestroy)(String *);

extern StringCopy copyString;
extern StringDestroy destroyString;

struct String {
    void *data;
    String(const String &);
    ~String();
};

inline String::String(const String &other)
{
    copyString(this, other);
}

inline String::~String()
{
    destroyString(this);
}

struct TemporaryString : String {
};

extern "C" String __cdecl make_exception();
TemporaryString __cdecl concatenate(const String &, const char *);

struct Base {
    char storage[0x2c8];
    Base();
    ~Base();
    virtual void virtualFunction();
};

struct CBrowserView : Base {
    String address;
    CBrowserView();
    virtual void virtualFunction();
};

CBrowserView::CBrowserView()
    : address(concatenate(make_exception(), "/IDE/Start.aspx"))
{
}
