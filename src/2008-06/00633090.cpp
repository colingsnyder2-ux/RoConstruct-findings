// from server: 96% by king_originala
#pragma float_control(precise, off)

struct Vector3 {
    float x, y, z;
};

struct Object {
    void notify(void* property);
};

typedef void (__thiscall *Callback)(void*, void*);

struct Property {
    void* reserved;
    void* descriptor;
    int valueOffset;
    int reservedOffset;
    Callback callback;
    int callbackOffset;

    void set(void* instance, const Vector3& value);
};

void Property::set(void* instance, const Vector3& value)
{
    char* object = instance ? static_cast<char*>(instance) - 20 : 0;
    Vector3* destination = reinterpret_cast<Vector3*>(object + valueOffset);

    if (destination->x != value.x ||
        destination->y != value.y ||
        destination->z != value.z) {
        destination->x = value.x;
        destination->y = value.y;
        destination->z = value.z;

        if (callback)
            callback(object + callbackOffset, descriptor);

        reinterpret_cast<Object*>(object)->notify(descriptor);
    }
}
