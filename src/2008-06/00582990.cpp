// from server: 62% by king_originala
extern "C" void (__cdecl* invalid_parameter_noinfo)();

struct Result {
    __declspec(nothrow) virtual void destroy(int);
};

struct Action {
    void apply(int);
};

struct Context {
    void update();
    Action* action();
};

struct Selection {
    unsigned char* data;
    unsigned reserved[2];
    unsigned first;
    unsigned last;
};

struct Model {
    char reserved[0x154];
    Selection* selection;
};

struct Access {
    Model* get(int);
    char reserved[12];
};

struct String {
    unsigned reserved;
    union {
        char text[16];
        char* pointer;
    } storage;
    unsigned length;
    unsigned capacity;

    const char* data() const;
};

inline const char* String::data() const
{
    if (capacity >= 16)
        return storage.pointer;
    return storage.text;
}

struct Name {
    unsigned reserved;
    String text;
};

extern void __cdecl callback(unsigned char*);
extern void __cdecl traverse(
    unsigned*, unsigned char*, unsigned, unsigned,
    unsigned, void (__cdecl*)(unsigned char*), unsigned char*);
extern void __cdecl handle(const char*, unsigned);

struct S {
    unsigned reserved0;
    Name* name;
    unsigned reserved8;
    unsigned value;
    unsigned reserved10;
    Access access;
    Context* volatile context;

    void prepare();
    void __cdecl run(Result*);
};

void S::run(Result* result)
{
    Context* saved = context;
    prepare();

    Context* current = context;
    if (current)
        current->update();

    struct Locals {
        unsigned temporary;
        unsigned char* data;
    } local;

    Selection* begin = access.get(1)->selection;
    unsigned first = begin->last;
    if (begin->first > first)
        invalid_parameter_noinfo();
    local.data = begin->data;

    Selection* end = access.get(1)->selection;
    unsigned last = end->first;
    if (last > end->last)
        invalid_parameter_noinfo();

    traverse(&local.temporary, end->data, last, local.temporary,
             first, &callback, local.data);

    current = context;
    Action* action = current ? current->action() : 0;
    action->apply(8);

    unsigned argument = value;
    const String* text = &name->text;
    handle(text->data(), argument);

    result->destroy(1);
}
