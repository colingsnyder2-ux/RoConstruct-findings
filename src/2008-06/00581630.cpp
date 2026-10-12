// from server: 79% by king_originala
struct Vector3 {
    float x, y, z;
};

struct Selection {
    char padding[12];
    void** first;
    void** last;
};

struct SelectionOwner {
    char padding[0x13c];
    Selection selection;
};

struct History {
    void mark(int);
};

struct Context {
    SelectionOwner* getSelection();
    History* getHistory();
};

struct Flag {
    bool value;
};

struct NotificationList {
    void notify(Flag);
};

struct DataModel {
    char padding[0x344];
    NotificationList notifications;
};

struct Name {
    char padding[8];
    union {
        char text[16];
        char* pointer;
    };
    unsigned size;
    unsigned capacity;
};

struct Operation {
    char storage[44];
    Operation(int, Selection*, DataModel*);
    ~Operation();
    void begin();
    Vector3 translate(const Vector3&);
    void finish();
};

struct Callback {
    virtual void complete(bool);
};

extern void __cdecl handle(const char*, DataModel*);

struct MoveUpSelectionVerb {
    void* vtable;
    Name* name;
    char padding0[4];
    DataModel* model;
    char padding1[16];
    Context* context;
    float distance;

    void prepare();
    void execute(Callback*);
};

void MoveUpSelectionVerb::execute(Callback* callback)
{
    Context* savedContext = *reinterpret_cast<Context* volatile*>(&context);
    prepare();

    SelectionOwner* owner = context ? context->getSelection() : 0;
    Selection* selection = &owner->selection;

    if (static_cast<unsigned>(selection->last - selection->first) > 0) {
        Operation operation(0, selection, model);
        operation.begin();

        Vector3 displacement;
        displacement.y = distance;
        displacement.x = 0.0f;
        displacement.z = 0.0f;
        operation.translate(displacement);
        operation.finish();

        History* history = context ? context->getHistory() : 0;
        history->mark(4);

        Flag flag;
        flag.value = false;
        model->notifications.notify(flag);

        DataModel* currentModel = model;
        Name* currentName = name;
        const char* text;
        if (currentName->capacity >= 16)
            text = currentName->pointer;
        else
            text = currentName->text;

        handle(text, currentModel);
        callback->complete(true);
    }
}
