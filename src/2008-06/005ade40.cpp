// from server: 66% by king_originala
struct String;

extern void (__thiscall *string_construct)(String *, const char *);
extern void (__thiscall *string_copy)(String *, const String &);
extern void (__thiscall *string_destroy)(String *);

struct String
{
    unsigned char allocator[4];
    union
    {
        char buffer[16];
        char *pointer;
    };
    unsigned int length;
    unsigned int capacity;

    String(const char *);
    String(const String &);
    ~String();
    const char *c_str() const;
};

__forceinline String::String(const char *s)
{
    string_construct(this, s);
}

__forceinline String::String(const String &s)
{
    string_copy(this, s);
}

__forceinline String::~String()
{
    string_destroy(this);
}

__forceinline const char *String::c_str() const
{
    const char *s = pointer;
    if (capacity < 16)
        s = buffer;
    return s;
}

struct Name;
extern const Name &__cdecl sub_554270();

struct Guid
{
    String text;
    const Name *scope;

    Guid(const char *);
};

__forceinline Guid::Guid(const char *s)
    : text(s), scope(&sub_554270())
{
}

struct Bridge
{
    void sub_489810();
};

extern Bridge *__stdcall sub_493760(int, const char *);

namespace RBX
{
    class Instance;

    class ServiceProvider
    {
    public:
        String sub_561e30(Guid);
    };
}

extern RBX::ServiceProvider *__cdecl func_00465210(RBX::Instance *);
extern const char *__cdecl sub_61c7b0(void *, int);
extern void __cdecl sub_612410(void *, int);
extern void __cdecl sub_612460(void *, int);
extern RBX::Instance *__cdecl sub_612120(void *, int);
extern void __cdecl sub_611c20(void *, int);
extern int __cdecl sub_611270(void *, const char *);
extern void __cdecl sub_6121e0(void *);
extern void __cdecl sub_611cc0(void *, int);

int __cdecl sub_5ade40(void *state)
{
    sub_493760(1, "loadfile")->sub_489810();

    Guid id(sub_61c7b0(state, -1));
    RBX::Instance *instance;

    String source = func_00465210(
        (sub_612410(state, 67),
         sub_612460(state, -10002),
         instance = sub_612120(state, -1),
         sub_611c20(state, -2),
         instance))->sub_561e30(id);

    int result;
    if (sub_611270(state, source.c_str()) != 0)
    {
        result = 1;
    }
    else
    {
        sub_6121e0(state);
        sub_611cc0(state, -2);
        result = 2;
    }
    return result;
}
