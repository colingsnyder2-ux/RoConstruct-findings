// from server: 76% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

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
    Shared* makeShared(Shared*, void*, unsigned, void*, unsigned);
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
    Context* source = context;
    prepare();

    source = context;
    Document* document = source ? source->getDocument() : 0;

    Sequence* sequence = document->sequence;
    unsigned last = sequence->last;
    if (sequence->first > last)
        _invalid_parameter_noinfo();
    void* lastOwner = sequence->owner;

    sequence = document->sequence;
    unsigned first = sequence->first;
    if (first > sequence->last)
        _invalid_parameter_noinfo();
    void* firstOwner = sequence->owner;

    Shared temporary;
    void* object = manager->makeShared(
        &temporary, firstOwner, first, lastOwner, last)->object;

    if (temporary.counter) {
        RefCount* counter = temporary.counter;
        volatile long* strong = &counter->strong;
        if (_InterlockedExchangeAdd(strong, -1) == 1) {
            counter->releaseObject();
            volatile long* weak = &counter->weak;
            if (_InterlockedExchangeAdd(weak, -1) == 1)
                counter->releaseCounter();
        }
    }

    document->select(object);

    Tool* tool = context ? context->getTool() : 0;
    tool->setMode(8);

    StringData* text = &name->text;
    handle(text->capacity >= 16 ? text->pointer : text->buffer, manager);

    return argument->finish(1);
}
