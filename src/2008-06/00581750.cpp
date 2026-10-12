// from server: 86% by king_originala
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

struct ActionTarget {
    void apply(int);
};

struct Context {
    SelectionOwner* getSelection();
    ActionTarget* getTarget();
};

struct UpdateState {
    char storage[44];
    UpdateState(int, Selection*, void*);
    ~UpdateState();
    void begin();
    Vector3 transform(const Vector3&);
    void finish();
};

struct Notification {
    virtual void notify(int);
};

struct Name {
    char padding[8];
    union {
        char buffer[16];
        char* pointer;
    } text;
    unsigned length;
    unsigned capacity;
};

struct UpdateFlag {
    bool value;
};

struct ModelPart {
    void update(UpdateFlag);
};

struct Model {
    char padding[0x344];
    ModelPart part;
};

extern const float direction;
extern void __cdecl handle(const char*, Model*);

struct S {
    char padding0[4];
    Name* name;
    char padding1[4];
    Model* model;
    char padding2[16];
    Context* context;

    void prepare();
    void execute(Notification*);
};

void S::execute(Notification* notification)
{
    Context* saved = *reinterpret_cast<Context* volatile*>(&context);
    prepare();

    SelectionOwner* owner = context ? context->getSelection() : 0;
    Selection* selection = &owner->selection;

    if (static_cast<unsigned>(selection->last - selection->first) > 0) {
        UpdateState state(0, selection, model);
        state.begin();

        Vector3 directionVector;
        directionVector.x = 0.0f;
        directionVector.y = direction;
        directionVector.z = 0.0f;

        Vector3 result = state.transform(directionVector);
        state.finish();

        int action = 4;
        if (!result.y)
            action = 1;

        ActionTarget* target = context ? context->getTarget() : 0;
        target->apply(action);

        UpdateFlag flag;
        flag.value = false;
        model->part.update(flag);

        Model* currentModel = model;
        Name* currentName = name;
        const char* text = currentName->capacity >= 16
            ? currentName->text.pointer
            : currentName->text.buffer;
        handle(text, currentModel);
        notification->notify(1);
    }
}
