// from server: 94% by king_originala
struct Vector3
{
    float value[3];
};

struct Storage
{
    unsigned int first;
    unsigned int second;

    Storage() : first(0), second(0) {}
    ~Storage();
};

struct Handle : Storage
{
    unsigned int third;

    Handle(void* value) : third(0) { initialize(value); }
    void initialize(void* value);
};

struct Instance
{
    char padding[0x14];
    char object;
};

struct Accessor
{
    virtual void unused0() = 0;
    virtual void unused1() = 0;
    virtual Vector3 get(void* object) = 0;
    virtual void set(void* object, const Vector3& value) = 0;
};

struct Property
{
    char padding[0x18];
    Accessor* accessor;
};

struct Owner
{
    char padding[0x198];
    void* value;
};

struct Vector3ComponentItem
{
    char padding[0x128];
    Owner* owner;
    Property* property;
    unsigned int component;

    void update(Instance* instance, const Vector3& value);
};

void Vector3ComponentItem::update(Instance* instance, const Vector3& value)
{
    Handle handle(owner->value);
    Vector3 result = property->accessor->get(instance ? &instance->object : 0);
    result.value[component] = value.value[component];
    property->accessor->set(instance ? &instance->object : 0, result);
}
