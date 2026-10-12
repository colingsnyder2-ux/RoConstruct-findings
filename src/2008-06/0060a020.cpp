// from server: 91% by king_originala
struct Matrix {
    float elements[9];
    void copy(const Matrix&);
};

struct Frame {
    Matrix rotation;
    float x, y, z;
    Frame* initialize();
};

struct InstanceObject {
    virtual void unused();
};

struct PartObject : InstanceObject {
    char padding[0x224];
    char part;
};

struct Instance {
    char padding[0x104];
    InstanceObject* object;
    Frame* getFrame(Frame*);
};

struct Storage {
    virtual void unused0();
    virtual void unused1();
    virtual void unused2();
    virtual void unused3();
    virtual void set(int, void*);
    char padding[8];
    void* entries[1];
    void update(int, const Frame*);
};

struct S {
    char padding[0x150];
    Storage* storage;
    void f(int, Instance*);
};

void S::f(int index, Instance* instance)
{
    volatile int reserved = 0;
    Frame frame;
    Frame instanceFrame;
    Frame defaultFrame;

    void* part;
    PartObject* result;
    if (instance && (result = dynamic_cast<PartObject*>(instance->object)))
        part = &result->part;
    else
        part = 0;

    Frame* source;
    if (instance)
        source = instance->getFrame(&instanceFrame);
    else
        source = defaultFrame.initialize();

    frame.rotation.copy(source->rotation);
    frame.x = source->x;
    frame.y = source->y;
    frame.z = source->z;

    if (storage->entries[index] != part) {
        storage->set(index, part);
        if (part)
            storage->update(index, &frame);
    }
}
