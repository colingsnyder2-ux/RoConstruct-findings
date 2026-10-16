// from server: 60% by colin
struct RefCounted {
    void* value;
    RefCounted();
    ~RefCounted();
};

struct Object {
    char padding[0x198];
    void* value;
};

struct Holder {
    char padding[0x18];
    void* object;
};

struct Interface {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual float slot2(void*) = 0;
};

struct Item {
    char padding[0x128];
    Object* provider;
    Holder* holder;

    float f(void* argument);
};

float Item::f(void* argument)
{
    RefCounted guard;
    guard.value = provider->value;
    void* value = argument ? (char*)argument + 0x14 : 0;
    Holder* active = holder;
    Interface* object = (Interface*)active->object;
    float result = object->slot2(value);
    return result;
}
