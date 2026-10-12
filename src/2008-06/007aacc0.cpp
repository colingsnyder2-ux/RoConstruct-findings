// from server: 80% by king_originala
extern "C" long __stdcall InterlockedDecrement(long *);

struct Vector3 {
    float x, y, z;
};

struct Transform {
    float data[12];
};

struct Parameters {
    char prefix[36];
    Vector3 color;
    char gap[12];
    Transform transform;
    char remainder[140];
    float values[6];
};

struct Light {
    char data[80];
};

struct LightList {
    char data[12];
    void append(const Light &);
};

struct Object {
    virtual ~Object();
    long references;
    void *resource;
    char padding[12];
    float values[6];
    char unused[28];
    LightList lights;
    void dispose();
};

struct Reference {
    Object *pointer;
    ~Reference();
};

inline Reference::~Reference()
{
    if (pointer && InterlockedDecrement(&pointer->references) == 0) {
        pointer->dispose();
        if (pointer)
            delete pointer;
    }
}

struct LocalReference {
    Object *pointer;
    ~LocalReference();
};

inline LocalReference::~LocalReference()
{
    Object *p = pointer;
    if (p && InterlockedDecrement(&p->references) == 0) {
        p->dispose();
        delete p;
    }
}

struct ParameterStore {
    ParameterStore &assign(const Parameters &);
};

extern void createLighting(LocalReference *);
extern void createLight(Light *, const Transform &, const Vector3 &, bool, bool);

struct Scene {
    char padding[0x3a0];
    ParameterStore parameters;
    void submit(const LocalReference &);
    void configure(Reference reference, Parameters input);
};

void Scene::configure(Reference reference, Parameters input)
{
    parameters.assign(input);

    LocalReference lighting;
    createLighting(&lighting);
    Object *p = lighting.pointer;

    p->values[0] = input.values[0];
    p->values[1] = input.values[1];
    p->values[2] = input.values[2];
    p->values[3] = input.values[3];
    p->values[4] = input.values[4];
    p->values[5] = input.values[5];

    Vector3 color;
    color.x = input.color.x * 0.5f;
    color.y = input.color.y * 0.5f;
    color.z = input.color.z * 0.5f;

    Light light;
    createLight(&light, input.transform, color, true, true);
    p->lights.append(light);
    submit(lighting);
}
