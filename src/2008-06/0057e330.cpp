// from server: 98% by king_originala
struct String
{
    char storage[28];

    String(const String&);
    ~String();
};

extern String* (__thiscall * const stringCopy)(String*, const String&);
extern void (__thiscall * const stringDestroy)(String*);

__forceinline String::String(const String& other)
{
    stringCopy(this, other);
}

__forceinline String::~String()
{
    stringDestroy(this);
}

struct Base
{
    unsigned char storage[8];

    Base(void*, String);
    virtual ~Base();
};

struct ClearBackpack : Base
{
    void* volatile owner;
    void* volatile target;
    volatile unsigned int state;
    volatile unsigned int flags;

    ClearBackpack(String, void*);
    virtual ~ClearBackpack();
};

ClearBackpack::ClearBackpack(String name, void* object)
    : Base(object ? static_cast<char*>(object) + 0x1c8 : 0, name),
      owner(object),
      target(object),
      state(0),
      flags(0)
{
}
