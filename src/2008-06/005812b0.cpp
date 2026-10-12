// from server: 81% by king_originala
struct Matrix {
    float value[9];
};

struct Flag {
    bool value;
};

struct Completion {
    virtual void finish(int value) = 0;
};

struct RotationTarget {
    void setMode(int mode);
};

struct Object {
    char* getFrame();
    RotationTarget* getRotationTarget();
};

struct State {
    void setFlag(Flag flag);
};

struct DataModel {
    char padding[0x344];
    State state;
};

struct String {
    unsigned padding;
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned length;
    unsigned capacity;
};

struct Name {
    unsigned padding;
    String text;
};

extern void __cdecl handle(const char* name, Object* object);

struct RotateAxisCommand {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void slot3() = 0;
    virtual void slot4() = 0;
    virtual Matrix rotate(const Matrix& frame) = 0;

    Name* name;
    unsigned padding08;
    DataModel* dataModel;
    char padding10[16];
    Object* volatile object;

    void prepare();
    void apply(const Matrix& rotation);
    void execute(Completion* completion);
};

void RotateAxisCommand::execute(Completion* completion)
{
    Object* savedObject = object;
    prepare();

    Object* currentObject = object;
    char* frame = currentObject ? currentObject->getFrame() : 0;
    apply(rotate(*reinterpret_cast<Matrix*>(frame + 0x13c)));

    currentObject = object;
    RotationTarget* target =
        currentObject ? currentObject->getRotationTarget() : 0;
    target->setMode(4);

    Flag flag;
    flag.value = false;
    dataModel->state.setFlag(flag);

    String* text = &name->text;
    const char* characters =
        text->capacity >= 16 ? text->pointer : text->buffer;
    handle(characters, object);

    completion->finish(1);
}
