// from server: 87% by king_originala
struct String
{
    void* data;
    ~String() throw();
    int value() const;
};

extern String __cdecl make_exception();
extern String __cdecl combine(const String&, const char*);
extern const char path[];

typedef void (__thiscall *DestroyString)(String*);
typedef int (__thiscall *StringValue)(const String*);

extern DestroyString destroyString;
extern StringValue stringValue;

inline String::~String() throw()
{
    destroyString(this);
}

inline int String::value() const
{
    return stringValue(this);
}

struct Primary
{
    virtual void primary();
    char padding[112];
};

struct Secondary
{
    virtual void secondary();
};

struct Base : Primary, Secondary
{
    Base(int, int, int);
};

struct CPublishAsPlaceDialog : Base
{
    CPublishAsPlaceDialog(int, int);
    virtual void primary();
    virtual void secondary();
};

CPublishAsPlaceDialog::CPublishAsPlaceDialog(int first, int second)
    : Base(first, combine(make_exception(), path).value(), second)
{
}
