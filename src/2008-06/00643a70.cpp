// from server: 75% by king_originala
struct Six {
    float x, y, z, a, b, c;
    Six(double, double, double, double, double, double);
};

__forceinline Six::Six(double X, double Y, double Z,
                       double A, double B, double C)
    : x((float)X), y((float)Y), z((float)Z),
      a((float)A), b((float)B), c((float)C)
{
}

struct ZeroSix {
    float x, y, z, a, b, c;
    ZeroSix() throw();
};

struct Transform {
    Six apply(const Six&);
};

struct DataSource {
    char reserved[0x94];
    Transform transform;
    const void* get();
};

struct Attachment {
    char reserved[0xA0];
    DataSource* source;
};

struct Object {
    char reserved[0x228];
    Attachment attachment;
};

struct Scale {
    char reserved[0x80];
    float value;
};

struct Owner {
    char reserved[0x21C];
    Scale* scale;
};

struct S {
    char reserved0[8];
    Owner* owner;
    char reserved1[0x18];
    Object* object;
    char reserved2[4];
    Six local;
    Six f(int);
};

Six S::f(int)
{
    Attachment* attachment = object ? &object->attachment : 0;
    if (attachment) {
        Scale* scale = owner->scale;
        DataSource* source = attachment->source;
        source->get();
        Six transformed = source->transform.apply(local);
        double factor = scale->value;
        return Six(transformed.x * factor,
                   transformed.y * factor,
                   transformed.z * factor,
                   transformed.a * factor,
                   transformed.b * factor,
                   transformed.c * factor);
    }

    static ZeroSix zero;
    return Six(zero.x, zero.y, zero.z, zero.a, zero.b, zero.c);
}
