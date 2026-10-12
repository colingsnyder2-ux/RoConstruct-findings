// from server: 80% by king_originala
extern "C" void (__stdcall *_invalid_parameter_noinfo)();

struct Range {
    unsigned char* storage;
    unsigned char padding[8];
    unsigned first;
    unsigned last;
};

struct Object {
    unsigned char padding[0x154];
    Range* range;
};

struct Reference {
    Object* get(int);
    unsigned char padding[12];
};

struct String {
    unsigned unknown;
    union {
        char local[16];
        char* allocated;
    } text;
    unsigned length;
    unsigned capacity;
};

struct Property {
    unsigned unknown;
    String name;
};

struct Completion {
    virtual void finish(int);
};

struct Operation {
    Property* property;
    bool value;

    Operation(Property*, bool);
};

inline Operation::Operation(Property* p, bool v)
    : property(p), value(v)
{
}

extern Operation __cdecl apply(
    unsigned char*, unsigned, unsigned char*, unsigned, Operation);

namespace RBX {
    void __cdecl handle(int, int);
}

struct S {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual bool state();

    unsigned char padding[16];
    Reference reference;
    volatile int context;
    Property* property;

    void prepare();
    void run(Completion*);
};

void S::run(Completion* completion)
{
    int unused = context;
    prepare();

    Operation operation(property, !state());

    Range* endRange = reference.get(1)->range;
    unsigned end = endRange->last;
    if (endRange->first > end)
        _invalid_parameter_noinfo();
    unsigned char* endStorage = endRange->storage;

    Range* beginRange = reference.get(1)->range;
    unsigned begin = beginRange->first;
    if (begin > beginRange->last)
        _invalid_parameter_noinfo();

    apply(beginRange->storage, begin, endStorage, end, operation);

    String* name = &property->name;
    const char* text;
    if (name->capacity >= 16)
        text = name->text.allocated;
    else
        text = name->text.local;

    RBX::handle(reinterpret_cast<int>(text), context);
    completion->finish(1);
}
