// from server: 86% by king_originala
typedef void (__thiscall *StringDestroy)(void *);
typedef int (__thiscall *StringConvert)(void *, int);

extern StringDestroy string_destroy;
extern StringConvert string_convert;

struct String
{
    unsigned long value;
    ~String() { string_destroy(this); }
    int convert(int n) { return string_convert(this, n); }
};

extern String __cdecl make_string();
extern String __cdecl operator+(const String &, const char *);

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
    Base(int, int);
};

struct Document : Base
{
    Document(int, int);
    virtual void primary();
    virtual void secondary();
};

Document::Document(int first, int second)
    : Base(second, (make_string() + "/IDE/Upload.aspx").convert(first))
{
}
