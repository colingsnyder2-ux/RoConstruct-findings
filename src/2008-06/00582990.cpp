// from server: 74% by colin
//

extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Object {
    void release();
    Object* get();
    void notify(int);
};

struct Sequence {
    void* owner;
    unsigned char padding[8];
    unsigned int first;
    unsigned int last;
};

struct Container {
    unsigned char padding[0x154];
    Sequence* sequence;
};

struct Accessor {
    Container* get(int);
    unsigned char padding[12];
};

struct Text {
    unsigned char padding[4];
    union {
        char small[16];
        char* large;
    };
    unsigned int length;
    unsigned int capacity;
};

struct Name {
    unsigned char padding[4];
    Text text;
};

struct Argument {
    virtual int finish(int) = 0;
};

struct Iterator {
    void* owner;
    void* context;
};

extern void __cdecl operation();
extern Iterator* __cdecl apply(
    Iterator*, void*, unsigned int, void*, unsigned int,
    void (__cdecl *)(), void*);
extern void __cdecl handle(const char*, unsigned int);

struct S {
    unsigned char padding0[4];
    Name* name;
    unsigned int padding8;
    unsigned int value;
    unsigned int padding10;
    Accessor accessor;
    Object* object;

    void prepare();
    int __cdecl run(Argument*);
};

int S::run(Argument* argument)
{
    Object* previous = object;
    prepare();

    if (object)
        object->release();

    Sequence* endSequence = accessor.get(1)->sequence;
    unsigned int last = endSequence->last;
    if (endSequence->first > last)
        invalid_parameter_noinfo();

    Iterator result;
    result.context = endSequence->owner;

    Sequence* beginSequence = accessor.get(1)->sequence;
    unsigned int first = beginSequence->first;
    if (first > beginSequence->last)
        invalid_parameter_noinfo();

    apply(&result, beginSequence->owner, first, result.owner, last,
          operation, result.context);

    Object* target = object ? object->get() : 0;
    target->notify(8);

    unsigned int argumentValue = value;
    Text* text = &name->text;
    const char* characters =
        text->capacity >= 16 ? text->large : text->small;
    handle(characters, argumentValue);

    return argument->finish(1);
}
