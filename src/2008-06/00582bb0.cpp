// from server: 60% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Resource {
    void destroy();
};

Resource* __cdecl acquireResource();
void __cdecl prepareResource(Resource*);
void __cdecl duplicateItem();
void __cdecl recordAction(const char*, void*);

struct ResourceGuard {
    Resource* value;
    ~ResourceGuard();
};

ResourceGuard::~ResourceGuard()
{
    if (value) {
        value->destroy();
        operator delete(value);
    }
}

struct Iterator {
    void* owner;
    void* position;
};

void __cdecl copySelection(
    Iterator*, void*, void*, void*, void*,
    void (__cdecl*)(), Resource*);

struct SelectionStorage {
    void* owner;
    unsigned int unused[2];
    void* begin;
    void* end;
};

struct Selection {
    char unused[0x154];
    SelectionStorage* storage;
    void replace(void*, void*, void*, void*);
};

struct SelectionHandle {
    Selection* get(int);
};

struct Result {
    Result** owner;
    unsigned int unused[2];
    void* begin;
    void* end;
    void* capacity;
    Result();
    ~Result();
};

Result::Result()
{
    owner = static_cast<Result**>(operator new(4));
    if (owner)
        *owner = this;
    begin = 0;
    end = 0;
    capacity = 0;
}

struct Action {
    virtual void dispose(int) = 0;
};

struct Recorder {
    void apply(Resource*, Result*, int, int);
    void mark(int);
};

struct Context {
    void prepare();
    Recorder* recorder();
};

struct Name {
    unsigned int unused[2];
    union {
        char text[16];
        char* pointer;
    };
    unsigned int length;
    unsigned int capacity;
};

struct S {
    unsigned int unused0;
    Name* name;
    unsigned int unused8;
    Recorder* sink;
    unsigned int unused10;
    SelectionHandle selection;
    unsigned int unused18;
    unsigned int unused1c;
    Context* context;

    void initialize();
    void execute(Action*);
};

void S::execute(Action* action)
{
    initialize();
    ResourceGuard resource;
    resource.value = acquireResource();

    if (context)
        context->prepare();

    SelectionStorage* lastStorage = selection.get(1)->storage;
    void* last = lastStorage->end;
    if (lastStorage->begin > last)
        _invalid_parameter_noinfo();
    void* lastOwner = lastStorage->owner;

    SelectionStorage* firstStorage = selection.get(1)->storage;
    void* first = firstStorage->begin;
    if (first > firstStorage->end)
        _invalid_parameter_noinfo();
    void* firstOwner = firstStorage->owner;

    Iterator copied;
    copySelection(&copied, firstOwner, first, lastOwner, last,
                  duplicateItem, resource.value);
    prepareResource(resource.value);

    Result result;
    sink->apply(resource.value, &result, 2, 0);

    void* finish = result.end;
    void* start = result.begin;
    if (start > finish) {
        _invalid_parameter_noinfo();
        finish = result.end;
        start = result.begin;
    }

    void* finishOwner = result.owner;
    void* position = start;
    if (start > finish)
        _invalid_parameter_noinfo();
    void* startOwner = result.owner;

    selection.get(1)->replace(startOwner, position, finishOwner, finish);

    Recorder* recorder = context ? context->recorder() : 0;
    recorder->mark(8);

    const char* text = name->capacity >= 16 ? name->pointer : name->text;
    recordAction(text, context);
    action->dispose(1);
}
