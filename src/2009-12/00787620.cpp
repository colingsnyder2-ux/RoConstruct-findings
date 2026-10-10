// from server: 67% by atomic.potato
typedef const char *LPCSTR;

struct String
{
    String(const char *);
};

extern "C" String * __stdcall string_ctor(String *, LPCSTR);

struct S
{
    int f(String *);
};

int S::f(String *p)
{
    String *s = p;
    string_ctor(s, "ArrowFarCursor");
    return (int)s;
}
