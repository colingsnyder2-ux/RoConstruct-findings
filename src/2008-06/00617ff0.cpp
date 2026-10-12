// from server: 91% by king_originala
struct Vector3 {
    float x, y, z;
};

struct Instance {
    bool contains(Instance* other);
};

struct Service {
    void apply(const Vector3& position, Instance* target);
};

extern "C" Instance* __cdecl findInstance(void* context);
extern "C" Service* __cdecl findService(Instance* instance);
extern "C" bool __cdecl testTarget(Instance* target, float distance, bool enabled);

struct Tool {
    char padding[24];
    void* context;

    Instance* pick(void* input, Vector3& position);
    float distance(const Vector3& position);
    bool checkPosition(const Vector3& position);
    bool blocked();
    Tool* update(void* input);
};

Tool* Tool::update(void* input)
{
    Vector3 position = { 0.0f, 0.0f, 0.0f };
    Instance* target = pick(input, position);

    if (testTarget(target, distance(position), true))
        return this;
    if (!target)
        return this;
    if (!checkPosition(position))
        return this;
    if (blocked())
        return this;

    Instance* instance = findInstance(context);
    if (instance && !instance->contains(target))
    {
        Service* service = findService(instance);
        if (service)
            service->apply(position, target);
    }

    return this;
}
