// from server: 65% by king_originala
struct String;
struct Text;

extern void (__thiscall *stringConstruct)(String*);
extern void (__thiscall *stringDestroy)(String*);
extern void (__cdecl *stringFormat)(String*, const char*, ...);
extern Text* (__thiscall *stringGet)(String*);
extern const char* (__thiscall *textGet)(Text*);

extern bool __cdecl apply(int, int, int);

struct Text {
    const char* get();
};

struct String {
    char* data;
    String();
    ~String();
    void format(const char*, int, int);
    Text* get();
};

inline String::String()
{
    stringConstruct(this);
}

inline String::~String()
{
    stringDestroy(this);
}

inline void String::format(const char* pattern, int x, int y)
{
    stringFormat(this, pattern, x, y);
}

inline Text* String::get()
{
    return stringGet(this);
}

inline const char* Text::get()
{
    return textGet(this);
}

void reconstruct(int a, int b)
{
    String s;
    register int x;
    register int y;

    s.format("%s_%d", x, y);
    if ((s.get()->get(), apply(a, b, 0))) {
        s.format("%s_%d_D", x, y);
        s.get()->get();
        apply(a, b, 1);
        s.format("%s_%d_H", x, y);
        s.get()->get();
        apply(a, b, 2);
    }
}
