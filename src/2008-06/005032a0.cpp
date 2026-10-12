// from server: 98% by king_originala
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
#pragma float_control(precise, off)

struct Vector3 {
    float x, y, z;
    Vector3();
    Vector3(float, float, float);
};

__forceinline Vector3::Vector3() {}
__forceinline Vector3::Vector3(float a, float b, float c)
    : x(a), y(b), z(c) {}

struct Stopwatch {
    unsigned char storage[0x108];
    void start();
    void stop();
};

struct VectorArray {
    void clear(int, int);
    void append(const Vector3&);
};

struct OtherArray {
    void clear(int, int);
};

struct Camera {
    const Vector3& direction(Vector3&);
};

struct Entry;

struct Processor {
    void process(Entry*, const Vector3&, OtherArray*, VectorArray*, void*);
};

struct Entry {
    unsigned char storage[0x40];
    Processor* processor;
};

struct Scene {
    unsigned char padding[0x190];
    Stopwatch stopwatch;
    Entry* entries;
    int count;

    void render(OtherArray*, VectorArray*, Camera*, void*, float);
};

void Scene::render(OtherArray* other, VectorArray* vectors,
                   Camera* camera, void* context, float distance)
{
    stopwatch.start();
    vectors->clear(0, 0);
    other->clear(0, 0);

    Vector3 temporary;
    {
        const Vector3& direction = camera->direction(temporary);
        float inverseLength = (float)(1.0 / sqrt(
            direction.x * direction.x +
            direction.y * direction.y +
            direction.z * direction.z));

        Vector3 normalized(direction.x * inverseLength,
                           direction.y * inverseLength,
                           direction.z * inverseLength);
        Vector3 negative(-normalized.x, -normalized.y, -normalized.z);
        Vector3 displacement(negative.x * distance,
                             negative.y * distance,
                             negative.z * distance);
        vectors->append(displacement);
    }

    const Vector3& direction = camera->direction(temporary);
    float inverseLength = (float)(1.0 / sqrt(
        direction.x * direction.x +
        direction.y * direction.y +
        direction.z * direction.z));

    Vector3 unitDirection(direction.x * inverseLength,
                          direction.y * inverseLength,
                          direction.z * inverseLength);

    for (int i = 0; i < count; ++i) {
        Entry* entry = entries + i;
        entry->processor->process(entry, unitDirection, other, vectors, context);
    }

    stopwatch.stop();
}
