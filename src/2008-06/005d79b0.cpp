// from server: 98% by king_originala
struct Vector {
    float x, y, z;
    const Vector& value() const;
};

struct Object {
    Vector transform(const Vector& input);
};

struct S {
    char padding[0x1bc];
    Object* object;
    char gap[4];
    Vector input;

    bool f(Vector* output);
};

extern int __cdecl checkControl(S*);
extern bool __cdecl checkObject(Object*);

bool S::f(Vector* output)
{
    if (object && checkControl(this) && checkObject(object)) {
        Object* receiver = object;
        Vector* source = &input;
        const Vector& result = receiver->transform(*source).value();
        output->x = result.x;
        output->y = result.y;
        output->z = result.z;
        return true;
    }
    return false;
}
