// from server: 96% by king_originala
struct Matrix;
extern const Matrix& __cdecl identityMatrix();

struct Matrix {
    float elements[9];
    Matrix(const Matrix& source = identityMatrix());
};

struct Vector {
    float x, y, z;
};

struct Frame {
    Matrix rotation;
    Vector position;
};

struct Part {
    const Frame& getFrame();
};

extern char sourceType;
extern char targetType;

extern "C" void* __cdecl runtimeCast(
    void* object, long displacement, const void* sourceType,
    const void* targetType, int isReference);

struct Renderer {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual void setFrame(const Frame&);
    virtual void slot15();
    virtual void slot16();
    virtual void slot17();
    virtual void slot18();
    virtual void finish();
};

struct S {
    char reserved[20];
    bool enabled;
    void draw(Renderer* renderer);
};

void S::draw(Renderer* renderer)
{
    Part* part = static_cast<Part*>(runtimeCast(
        *reinterpret_cast<void**>(reinterpret_cast<char*>(this) - 44),
        0, &sourceType, &targetType, 0));

    if (part && enabled) {
        const Vector& position = part->getFrame().position;
        Frame frame;
        frame.position.x = position.x;
        frame.position.y = position.y;
        frame.position.z = position.z;
        renderer->setFrame(frame);
        renderer->finish();
    }
}
