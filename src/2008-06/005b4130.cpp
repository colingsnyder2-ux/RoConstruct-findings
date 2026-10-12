// from server: 57% by king_originala
extern void (__cdecl* const invalid_parameter_noinfo)();
extern "C" double __cdecl fabs(double);
#pragma intrinsic(fabs)

struct Vec3 {
    float x, y, z;
    Vec3(const Vec3& v) : x(v.x), y(v.y), z(v.z) {}
};

struct ColorLookup {
    Vec3* find(const int*);
};

struct IndexLookup {
    int* find(const int*);
};

struct VectorStorage;

struct VectorProxy {
    VectorStorage* container;
};

struct VectorStorage {
    VectorProxy* proxy;
    unsigned char reserved[8];
    int* first;
    int* last;
    int* limit;
};

struct S {
    unsigned char reserved0[0x18];
    VectorStorage colors;
    unsigned char reserved1[0x20];
    ColorLookup colorLookup;
    unsigned char reserved2[0x3f];
    IndexLookup indexLookup;

    void f(int color);
};

void S::f(int color)
{
    float best = 3.402823466e38F;
    int result = 0;
    Vec3 target(*colorLookup.find(&color));

    int* current = colors.first;
    if (current > colors.last)
        invalid_parameter_noinfo();

    int* finish = colors.last;
    VectorProxy* owner = colors.proxy;
    if (colors.first > finish)
        invalid_parameter_noinfo();

    VectorProxy* finishOwner = colors.proxy;

    for (;;) {
        if (!owner || owner != finishOwner)
            invalid_parameter_noinfo();

        if (current == finish)
            break;

        VectorStorage* storage;
        if (owner)
            storage = owner->container;
        else {
            invalid_parameter_noinfo();
            storage = 0;
        }
        if (current >= storage->last)
            invalid_parameter_noinfo();

        if (color == *current) {
            int* first = colors.first;
            if (first > colors.last)
                invalid_parameter_noinfo();
            VectorProxy* proxy = colors.proxy;
            if (!owner || owner != proxy)
                invalid_parameter_noinfo();
            result = current - first;
            break;
        }

        if (owner)
            storage = owner->container;
        else {
            invalid_parameter_noinfo();
            storage = 0;
        }
        if (current >= storage->last)
            invalid_parameter_noinfo();

        const Vec3* value = colorLookup.find(current);
        float x = value->x;
        float y = value->y;
        float z = value->z;
        double dx = fabs(target.x - x);
        double dy = fabs(target.y - y);
        double dz = fabs(target.z - z);
        float distance = dx + dy + dz;

        if (distance < best) {
            int* first = colors.first;
            if (first > colors.last)
                invalid_parameter_noinfo();
            VectorProxy* proxy = colors.proxy;
            if (!owner || owner != proxy)
                invalid_parameter_noinfo();

            result = current - first;
            if (0.0F == distance)
                break;
            best = distance;
        }

        if (owner)
            storage = owner->container;
        else {
            invalid_parameter_noinfo();
            storage = 0;
        }
        if (current >= storage->last)
            invalid_parameter_noinfo();

        ++current;
    }

    *indexLookup.find(&color) = result;
}
