// from server: 79% by king_originala
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
    Selection* volatile selection;

    void prepare();
    void execute(Event*);
};

void Command::execute(Event* event)
{
    Selection* oldSelection = selection;
    prepare();

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
