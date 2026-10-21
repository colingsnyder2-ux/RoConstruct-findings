// from server: 82% by EspClaude
// from server: 80% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espclaude_591afcf031e1552a.cpp

// Candidate translation unit (score above; library headers required).
#include <string>
#include <exception>
namespace RBX {
class Instance;
bool checkA(Instance* instance, int role);
bool checkB(Instance* instance, int role);
class runtime_error : public std::exception
{
    std::string message;
public:
    runtime_error(const std::string& m);
};
static __declspec(noinline) void checkPermissions(Instance* instance)
{
    if (checkA(instance, 1) && !checkB(instance, 1))
    {
        std::string msg("Insufficinet permissions");
        throw runtime_error(msg);
    }
}
void verify(Instance* instance)
{
    checkPermissions(instance);
}
}

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
struct Functor {
    void (__cdecl *function)();
    void* context;
};
extern Iterator* __cdecl apply(
    Iterator*, void*, unsigned int, void*, unsigned int, Functor);
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
    int run(Argument*);
};

__forceinline void weldSelection(Accessor& accessor)
{
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

    Functor functor = { operation, result.context };
    apply(&result, beginSequence->owner, first, result.owner, last, functor);

}

int S::run(Argument* argument)
{
    RBX::checkPermissions(reinterpret_cast<RBX::Instance*>(object));

    if (object)
        object->release();

    weldSelection(accessor);

    Object* target = object ? object->get() : 0;
    target->notify(8);

    unsigned int argumentValue = value;
    Text* text = &name->text;
    const char* characters =
        text->capacity >= 16 ? text->large : text->small;
    handle(characters, argumentValue);

    return argument->finish(1);
}

