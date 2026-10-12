// from server: 94% by king_originala
struct Prefix {
    char padding[20];
};

struct Interface {
    char padding[4];
};

struct Object : Prefix, Interface {
    void notify(void* property);
};

struct BoundProp {
    void* vtable;
    void* property;
    int offset;
    int unused;
    void (Object::*changed)(void*);

    void set(Interface* instance, const float& value);
};

#pragma float_control(precise, off, push)

void BoundProp::set(Interface* instance, const float& value)
{
    Object* object = instance ? static_cast<Object*>(instance) : 0;
    float* destination = reinterpret_cast<float*>(
        reinterpret_cast<char*>(object) + offset);

    if (*destination != value) {
        *destination = value;
        if (changed)
            (object->*changed)(property);
        object->notify(property);
    }
}

#pragma float_control(pop)
