// from server: 65% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
#pragma float_control(precise, off)

struct Vec {
    float x, y, z;
    Vec clamp(const Vec*, const Vec*);
};

struct RefCount {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Force {
    char reserved0[8];
    unsigned char dirty;
    char reserved1[0x7B];
    Vec accumulated;
    void update();
};

struct Node {
    char reserved0[0x2C];
    Force* force;
};

struct Mass {
    float get();
};

struct Source {
    char reserved0[0x10];
    Node* node;
    char reserved1[0x14];
    Mass* mass;
    char reserved2[0x60];
    float fallbackMass;
};

struct Body {
    char reserved0[0x10];
    Source* source;
    char reserved1[0xB0];
    Vec velocity;
    const void* get();
};

struct Owner {
    char reserved0[0x2C8];
    Body* body;
};

struct Shared {
    Owner* object;
    RefCount* count;
};

struct Handle {
    char reserved[8];
    Shared* get(Shared*);
};

struct S {
    char reserved[0x10];
    Handle handle;
    float gain;
    Vec maximum;
    Vec desired;
    Vec result;
    void f(float, float);
};

void S::f(float, float)
{
    Shared shared;
    Body* body = handle.get(&shared)->object->body;
    RefCount* count = shared.count;

    if (count) {
        if (_InterlockedExchangeAdd(&count->strong, -1) == 1) {
            count->dispose();
            if (_InterlockedExchangeAdd(&count->weak, -1) == 1)
                count->destroy();
        }
    }

    body->get();

    Vec scaled;
    scaled.x = (desired.x - body->velocity.x) * gain;
    scaled.y = (desired.y - body->velocity.y) * gain;
    scaled.z = (desired.z - body->velocity.z) * gain;

    Source* source = body->source;
    float mass = source->mass ? source->mass->get() : source->fallbackMass;

    result.x = scaled.x * mass;
    result.y = scaled.y * mass;
    result.z = scaled.z * mass;

    Vec lower;
    lower.x = -maximum.x;
    lower.y = -maximum.y;
    lower.z = -maximum.z;

    Vec clamped = result.clamp(&lower, &maximum);
    result.x = clamped.x;
    result.y = clamped.y;
    result.z = clamped.z;

    Force* force = body->source->node->force;
    if (force) {
        if (force->dirty)
            force->update();
        force->accumulated.x = force->accumulated.x + result.x;
        force->accumulated.y = result.y + force->accumulated.y;
        force->accumulated.z = result.z + force->accumulated.z;
    }
}
