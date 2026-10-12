// from server: 90% by king_originala
struct String;
struct Format;

extern void (__thiscall *string_destroy)(String *);
extern const char *(__thiscall *string_c_str)(const String *);
extern void (__thiscall *format_construct)(Format *);
extern void (__thiscall *format_destroy)(Format *);
extern const char *(__thiscall *format_text)(const Format *);
extern void (__cdecl *format_print)(Format *, const char *, ...);

struct String {
    char storage[28];
    ~String() throw();
    const char *c_str() const;
};

struct Format {
    char storage[4];
    Format();
    ~Format() throw();
    const char *text() const;
};

__forceinline String::~String() throw()
{
    string_destroy(this);
}

__forceinline const char *String::c_str() const
{
    return string_c_str(this);
}

__forceinline Format::Format()
{
    format_construct(this);
}

__forceinline Format::~Format() throw()
{
    format_destroy(this);
}

__forceinline const char *Format::text() const
{
    return format_text(this);
}

extern unsigned int texture_count;
extern String __cdecl sub_5a6bc0(unsigned int);

struct Target;
typedef void (__thiscall *TargetMethod)(Target *, const char *);

struct Target {
    TargetMethod *vtable;
};

struct CWrapperView {
    void func_42edd0(Target *);
};

void CWrapperView::func_42edd0(Target *target)
{
    String value = sub_5a6bc0(texture_count);
    Format output;
    format_print(&output, "TEX %s", value.c_str());
    TargetMethod *table = target->vtable;
    const char *text = output.text();
    table[3](target, text);
}
