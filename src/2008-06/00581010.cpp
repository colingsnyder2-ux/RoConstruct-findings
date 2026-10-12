// from server: 98% by king_originala
struct String;

extern void (__thiscall *copyString)(String*, const String&);
extern void (__thiscall *destroyString)(String*);

struct String
{
    unsigned char storage[28];

    String(const String&);
    ~String();
};

inline String::String(const String& other)
{
    copyString(this, other);
}

inline String::~String()
{
    destroyString(this);
}

struct Base
{
    unsigned char storage[32];

    Base(void*, String, void*);
    virtual ~Base();
};

struct DuplicateSelectionVerb : Base
{
    bool flag;

    DuplicateSelectionVerb(void*, void*, String);
    virtual ~DuplicateSelectionVerb();
};

DuplicateSelectionVerb::DuplicateSelectionVerb(
    void* first, void* second, String text)
    : Base(first, text, second)
{
    flag = false;
}
