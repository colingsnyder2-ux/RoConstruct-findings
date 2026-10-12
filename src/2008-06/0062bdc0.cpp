// from server: 75% by king_originala
struct Vector3
{
    float x, y, z;

    Vector3() {}
    Vector3(float a, float b, float c) : x(a), y(b), z(c) {}
};

struct Frame
{
    float rotation[9];
    Vector3 position;

    Frame& initialize();
};

struct Object
{
    void setFrame(const Frame& value);
    void setPosition(Vector3 value);
    void activate();
};

struct Argument
{
    void assign(unsigned int value);
    Object* getObject();
};

struct Interface;
typedef Frame* (__thiscall *FrameGetter)(Interface*, Frame*);

struct InterfaceTable
{
    FrameGetter getFrame;
};

struct Interface
{
    InterfaceTable* table;
};

extern float positionOffset;

struct S
{
    char padding0[0x104];
    unsigned int value;
    char padding1[0x2c];
    int* baseOffsets;

    int check();
    void update(Argument* argument);
};

void S::update(Argument* argument)
{
    if (check())
        return;

    argument->assign(value);
    Object* object = argument->getObject();
    if (!object)
        return;

    Frame temporary;
    object->setFrame(temporary.initialize());

    Interface* interfaceObject = reinterpret_cast<Interface*>(
        reinterpret_cast<char*>(&baseOffsets) + baseOffsets[2]);

    Frame* frame = interfaceObject->table->getFrame(interfaceObject, &temporary);
    object->setPosition(Vector3(
        frame->position.x,
        frame->position.y + positionOffset,
        frame->position.z));
    object->activate();
}
