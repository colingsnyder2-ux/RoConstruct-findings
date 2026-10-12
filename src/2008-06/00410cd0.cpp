// from server: 93% by king_originala
typedef void (__thiscall *StringDestructor)(void*);
typedef void (__thiscall *StringAssignment)(void*, const void*);

extern StringDestructor destroy_string;
extern StringAssignment assign_string;

struct String {
    void* data;
    ~String();
};

inline String::~String()
{
    destroy_string(this);
}

extern "C" String __cdecl make_exception();
String __cdecl append_string(const String&, const char*);

struct BrowserBase {
    char padding[0x2c8];

    BrowserBase();
    virtual ~BrowserBase();
};

struct CBrowserView : BrowserBase {
    void* location;

    CBrowserView();
    virtual ~CBrowserView();
};

CBrowserView::CBrowserView()
    : BrowserBase()
{
    assign_string(&location, &append_string(make_exception(), "/Start.aspx"));
}
