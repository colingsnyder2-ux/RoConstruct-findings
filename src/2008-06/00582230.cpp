// from server: 76% by king_originala
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

    const char* c_str() const;
};

const char* String::c_str() const
{
    if (capacity >= 16)
        return text.allocated;
    return text.local;
}

struct Property {
    unsigned unknown;
    String name;
};

struct Completion {
    virtual int finish(int);
};

extern void __cdecl apply(
    unsigned*, unsigned char*, unsigned, unsigned char*, unsigned,
    Property*, bool);

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
    int run(Completion*);
};

int S::run(Completion* completion)
{
    int unused = context;
    prepare();

    Property* savedProperty;
    bool value = !state();
    savedProperty = property;

    Range* endRange = reference.get(1)->range;
    unsigned end = endRange->last;
    if (endRange->first > end)
        _invalid_parameter_noinfo();
    unsigned char* endStorage = endRange->storage;

    Range* beginRange = reference.get(1)->range;
    unsigned begin = beginRange->first;
    if (begin > beginRange->last)
        _invalid_parameter_noinfo();

    unsigned result;
    apply(&result, beginRange->storage, begin, endStorage, end,
          savedProperty, value);

    RBX::handle(reinterpret_cast<int>(property->name.c_str()), context);
    return completion->finish(1);
}
