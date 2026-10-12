// from server: 94% by king_originala
struct String {};
typedef const char* (__thiscall *StringAccessor)(const String*);
extern StringAccessor string_c_str;

struct Source {
    virtual void slot0();
    virtual bool getValue();

    struct Name {
        char pad[4];
        String text;
    };

    Name* name;
};

struct Base {
    char pad[0xfc];
    int flag;
    char tail[12];

    Base(const char*, int, int);
    ~Base();
    void SetValue(int);
};

struct Binding {
    char pad[0x20];

    Binding(Source*, void*);
    ~Binding();
};

struct Item : Base {
    Binding binding;
    Source* source;

    Item(Source*, void*);
};

Item::Item(Source* value, void* context)
    : Base(string_c_str(&value->name->text), 0, 0),
      binding(value, context)
{
    flag = 1;
    *(void**)this = (void*)0x813984;
    *(void**)((char*)this + 0x20) = (void*)0x813924;
    *(void**)&binding = (void*)0x81391c;
    source = value;
    SetValue(value->getValue());
}
