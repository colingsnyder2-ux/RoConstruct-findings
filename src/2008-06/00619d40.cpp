// from server: 83% by king_originala
struct Vector3 {
    float x, y, z;
};

struct Instance {
    void* getCastObject();
    const float* getMatrix();
};

struct Model {
    void setDirection(const Vector3&);
};

struct Argument {
    Instance* instance;
    int face;
};

extern unsigned char sourceType;
extern unsigned char destinationType;

extern "C" void* __cdecl runtimeCast(
    void*, long, void*, void*, int);

void __stdcall setFront(Argument* argument)
{
    Instance* instance = argument->instance;
    Model* model = static_cast<Model*>(runtimeCast(
        instance->getCastObject(), 0,
        &sourceType, &destinationType, 0));

    if (model) {
        int face = argument->face;
        const float* matrix = instance->getMatrix();
        int axis = face % 3;

        Vector3 result = {
            matrix[axis],
            matrix[axis + 3],
            matrix[axis + 6]
        };
        float scale = static_cast<float>(1 - 2 * (face / 3));
        result.x *= scale;
        result.y *= scale;
        result.z *= scale;
        model->setDirection(result);
    }
}
