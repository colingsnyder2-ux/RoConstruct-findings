// from server: 75% by king_originala
struct Vector {
    float x, y, z;
    Vector();
    Vector(float a, float b, float c);
};

inline Vector::Vector() {}
inline Vector::Vector(float a, float b, float c) : x(a), y(b), z(c) {}

struct Matrix {
    float data[9];
    Vector column(int index) const;
};

struct Frame {
    Matrix rotation;
    Vector position;
};

struct FrameProvider {
    virtual Frame getFrame();
};

struct Parent {
    char padding[0x104];
    void* instance;
};

struct Attachment {
    Parent* getParent();
    void setParent(Parent*);
};

struct AttachmentPtr {
    Attachment* pointer;
    void* control;
    void reset();
};

struct Part {
    void setValue(bool);
    void setPosition(Vector);
    void setSize(const Vector&);
};

struct Model {
    char padding[0x134];
    int* virtualBaseTable;
};

extern "C" void* __cdecl func_006a17c6(
    void*, int, const void*, const void*, int);
extern int __cdecl func_005d9a20(Model*);

extern char type_0092907c[];
extern char type_00932a40[];
extern const float constant_00826e6c;
extern const float constant_00828b60;
extern const float constant_0082ca40;

struct Tool {
    char padding[0x1a4];
    AttachmentPtr attachment;

    Part* getPart();
    void finish();
    void func_005ff050();
};

void Tool::func_005ff050()
{
    Model* model = 0;
    if (attachment.pointer) {
        Parent* parent = attachment.pointer->getParent();
        if (parent)
            model = static_cast<Model*>(func_006a17c6(
                parent->instance, 0, type_0092907c, type_00932a40, 0));
        attachment.pointer->setParent(0);
        attachment.reset();
    }

    Part* part = getPart();
    if (part) {
        part->setValue(true);
        if (func_005d9a20(model)) {
            FrameProvider* provider = reinterpret_cast<FrameProvider*>(
                reinterpret_cast<char*>(model) + 0x134 +
                model->virtualBaseTable[2]);
            Frame frame = provider->getFrame();
            Vector position;
            position.x = frame.position.x;
            position.z = frame.position.z;
            position.y = frame.position.y + constant_00826e6c;
            float scale = constant_00828b60;
            const Vector& direction = frame.rotation.column(2);
            part->setPosition(Vector(
                direction.x * scale * constant_0082ca40 + position.x,
                direction.y * scale * constant_0082ca40 + position.y,
                direction.z * scale * constant_0082ca40 + position.z));
            position.x = 1.0f;
            position.y = 1.0f;
            position.z = 1.0f;
            part->setSize(position);
        }
    }
    finish();
}
