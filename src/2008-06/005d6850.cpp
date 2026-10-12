// from server: 98% by king_originala
void* __cdecl operator new(unsigned int);

struct Link {
    void* object;
    Link(void*);
};

inline Link::Link(void* value)
{
    object = value;
}

struct Owner {
    Link* pointer;
    unsigned int unused[2];

    Owner();
    ~Owner();
};

inline Owner::Owner()
{
    pointer = new Link(this);
}

struct Temporary {
    Owner owner;
    unsigned int first;
    unsigned int last;
    unsigned int limit;

    Temporary();
    ~Temporary();
};

inline Temporary::Temporary()
{
    first = 0;
    last = 0;
    limit = 0;
}

struct String;
extern String* (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

inline String::String(const char* text)
{
    stringConstruct(this, text);
}

inline String::~String()
{
    stringDestroy(this);
}

struct Member {
    char storage[24];
    Member(const Temporary&);
    ~Member();
};

extern char table00;
extern char table10;
extern char table14;
extern char table20;
extern char table24;
extern char table44;
extern char table64;
extern char table84;
extern char tableA4;
extern char tableC4;
extern const char teamsName[];

struct Base {
    unsigned int words[0x130 / 4];
    Base();
    ~Base();
    void setValue(const String&);
};

struct S : Base {
    Member member;
    S();
};

S::S()
    : member((
        words[0x00 / 4] = reinterpret_cast<unsigned int>(&table00),
        words[0x10 / 4] = reinterpret_cast<unsigned int>(&table10),
        words[0x14 / 4] = reinterpret_cast<unsigned int>(&table14),
        words[0x20 / 4] = reinterpret_cast<unsigned int>(&table20),
        words[0x24 / 4] = reinterpret_cast<unsigned int>(&table24),
        words[0x44 / 4] = reinterpret_cast<unsigned int>(&table44),
        words[0x64 / 4] = reinterpret_cast<unsigned int>(&table64),
        words[0x84 / 4] = reinterpret_cast<unsigned int>(&table84),
        words[0xa4 / 4] = reinterpret_cast<unsigned int>(&tableA4),
        words[0xc4 / 4] = reinterpret_cast<unsigned int>(&tableC4),
        Temporary()))
{
    setValue(String(teamsName));
}
