// from server: 99% by king_originala
typedef unsigned int size_t;

struct String
{
    char storage[28];
    String(const char *);
    String(const String &);
    ~String();
};

extern String *(__thiscall *constructString)(String *, const char *);

inline String::String(const char *text)
{
    constructString(this, text);
}

extern String __cdecl makeString(const char *);
void *__cdecl operator new(size_t);
void __cdecl operator delete(void *);

struct Resource
{
    virtual ~Resource();
    char storage[120];
    Resource(String);
};

extern Resource *current;

struct Command
{
    void *table;
    String text;
    Command(const char *);
};

Command::Command(const char *value)
    : table((void *)0x81cb74), text(value)
{
    if (!current)
    {
        Resource *replacement =
            new Resource(makeString((const char *)0x81cb78));
        if (replacement != current && current)
            delete current;
        current = replacement;
    }
}
