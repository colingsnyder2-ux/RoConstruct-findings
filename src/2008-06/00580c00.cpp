// from server: 91% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_groupvaluetemporary21f3823bbe4bba0c.cpp

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

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* invalid_parameter_noinfo_import)();

struct RefCount {
    virtual void unused() = 0;
    virtual void releaseObject() = 0;
    virtual void releaseCounter() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    RefCount* counter;
    ~Shared(){
    if (counter) {
        RefCount* count = counter;
        volatile long* strong = &count->strong;
        if (_InterlockedDecrement(strong) == 0) {
            count->releaseObject();
            volatile long* weak = &count->weak;
            if (_InterlockedDecrement(weak) == 0)
                count->releaseCounter();
        }
    }

    }
};

struct Sequence {
    void* owner;
    unsigned reserved[2];
    unsigned first;
    unsigned last;
};

struct Document {
    unsigned char reserved[0x154];
    Sequence* sequence;
    void select(void*);
};

struct Tool {
    void setMode(int);
};

struct Context {
    Document* getDocument();
    Tool* getTool();
};

struct Manager {
    Shared makeShared(void*, unsigned, void*, unsigned);
};

struct StringData {
    unsigned reserved;
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned length;
    unsigned capacity;
};

struct Name {
    unsigned reserved;
    StringData text;
};

struct Argument {
    virtual void finish(int) = 0;
};

extern void __cdecl handle(const char*, Manager*);

struct S {
    unsigned reserved0;
    Name* name;
    unsigned reserved8;
    Manager* manager;
    unsigned reserved10[4];
    Context* context;

    void prepare();
    void f(Argument*);
};

void S::f(Argument* argument)
{
    RBX::checkPermissions(reinterpret_cast<RBX::Instance*>(context));

    Context* source = context;
    Document* document = source ? source->getDocument() : 0;

    Sequence* sequence = document->sequence;
    unsigned last = sequence->last;
    if (sequence->first > last)
        invalid_parameter_noinfo_import();
    void* lastOwner = sequence->owner;

    sequence = document->sequence;
    unsigned first = sequence->first;
    if (first > sequence->last)
        invalid_parameter_noinfo_import();
    void* firstOwner = sequence->owner;

    void* object = manager->makeShared(firstOwner, first, lastOwner, last).object;

    document->select(object);

    Tool* tool = context ? context->getTool() : 0;
    tool->setMode(8);

    StringData* text = &name->text;
    handle(text->capacity >= 16 ? text->pointer : text->buffer, manager);

    return argument->finish(1);
}
