// from server: 64% by king_originala
struct String;
extern String (__cdecl *append)(const String &, const char *);
extern String (__cdecl *prepend)(const char *, const String &);
extern void (__thiscall *copyString)(String *, const String &);
extern void (__thiscall *destroyString)(String *);

struct String {
    unsigned int allocator;
    char storage[16];
    unsigned int length;
    unsigned int capacity;

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

struct Content {
    String name;
    unsigned int flags;

    Content(const Content &);
    ~Content();
};

inline Content::Content(const Content &other)
    : name(other.name), flags(other.flags)
{
}

inline Content::~Content()
{
}

extern Content __cdecl convert(const String &);

struct S {
    void set(const Content &);
    void f(const String &);
};

void S::f(const String &value)
{
    Content content(convert(prepend("Textures\\", append(value, ".png"))));
    set(content);
}
