// from server: 89% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_cannotselectpermissionedcf99141bdb7cc3.cpp

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

extern "C" void (__cdecl *invalidParameter)();

struct Item;
struct Range {
    Item** data;
    unsigned reserved[2];
    unsigned first;
    unsigned last;
};

struct Collection {
    char reserved[0x154];
    Range* range;
};

struct Access {
    Collection* get(int);
};

struct Service {
    void update();
};

struct Context {
    char reserved[0x134];
    Service* service;
};

struct Selection {
    Context* getContext();
};

struct Event {
    virtual void respond(int);
};

struct Text {
    unsigned reserved;
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned size;
    unsigned capacity;
};

struct Name {
    unsigned reserved;
    Text text;
};

extern bool __cdecl compareItems(Item*, Item*);
extern void __cdecl processRange(
    Item**, unsigned, Item**, unsigned,
    bool (__cdecl *)(Item*, Item*));
extern void __cdecl handle(const char*, unsigned);

struct Command {
    unsigned reserved0;
    Name* name;
    unsigned reserved8;
    unsigned value;
    unsigned reserved16;
    Access access;
    unsigned reserved24;
    unsigned reserved28;
    Selection* selection;

    void prepare();
    void execute(Event*);
};

void Command::execute(Event* event)
{
    RBX::checkPermissions(reinterpret_cast<RBX::Instance*>(selection));

    Context* context;
    Selection* current = selection;
    if (current)
        context = current->getContext();
    else
        context = 0;

    Access* accessor = &access;
    Range* range = accessor->get(1)->range;
    unsigned last = range->last;
    if (range->first > last)
        invalidParameter();
    Item** data = range->data;

    range = accessor->get(1)->range;
    unsigned first = range->first;
    if (first > range->last)
        invalidParameter();
    Item** firstData = range->data;

    processRange(firstData, first, data, last, &compareItems);
    context->service->update();

    Text* text = &name->text;
    unsigned argument = value;
    const char* characters;
    if (text->capacity >= 16)
        characters = text->pointer;
    else
        characters = text->buffer;

    handle(characters, argument);
    event->respond(1);
}
