// from server: 60% by colin
struct TypeInfo {};

struct Holder;

struct HolderTable {
    void *(__thiscall *destroy)(Holder *, unsigned int);
};

struct Holder {
    const HolderTable *table;
};

extern bool (__thiscall *type_equal)(const TypeInfo *, const TypeInfo &);
extern const TypeInfo int_type;
extern const TypeInfo float_type;
extern const TypeInfo double_type;
extern const double double_zero;

extern Holder *__cdecl make_holder();

struct String {
    unsigned char storage[28];
    String(const String &);
    ~String();
};

extern void (__stdcall *string_copy_ctor)(String *, const String &);
extern void (__stdcall *string_dtor)(String *);

inline String::String(const String &s)
{
    string_copy_ctor(this, s);
}

inline String::~String()
{
    string_dtor(this);
}

struct BoundFuncDesc {
    unsigned char pad[0x38];
    void *(__thiscall *fn)(void *, void *);
    unsigned char *ctx;
    void *invoke(void *, void *, void *);
};

extern void *__cdecl get_type_holder(void *);
extern void *__cdecl get_value_holder(void *);
extern void *__cdecl make_value();

void *BoundFuncDesc::invoke(void *a, void *b, void *c)
{
    void *t = get_type_holder(a);
    unsigned char ch = *(unsigned char *)t;
    void *v = get_value_holder(b);
    String s(*(const String *)v);
    void *result = fn(ctx + (int)c, &s);
    void *holder = make_value();
    *(void **)holder = result;
    void **slot = (void **)((char *)holder + 4);
    void *tmp = &s;
    void *r = (void *)0;
    (void)r;
    return holder;
}
