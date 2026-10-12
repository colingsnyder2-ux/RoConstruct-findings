// from server: 79% by king_originala
#pragma float_control(precise, off)

struct Vector2 {
    float x, y;
};

struct Vector3 {
    float x, y, z;
    Vector2* xy(Vector2*) const;
};

struct Rect {
    float x0, y0, x1, y1;
};

struct Frame {
    float rotation[9];
    Vector3 position;
};

struct Camera {
    Vector3* project(Vector3*, const Vector3&, const Rect&) const;
};

struct RenderDevice {
    char padding[0x130];
    Camera camera;
};

struct DeviceProvider {
    virtual void unused();
    virtual RenderDevice* getDevice();
};

struct Location {
    virtual Frame* getFrame(Frame*) const;
};

struct Selectable {
    virtual void unused();
};

struct Instance;

struct Entry {
    Instance* object;
    void* control;
};

struct Children {
    char padding[12];
    Entry* first;
    Entry* last;
};

struct Instance {
    virtual void unused();
    char padding[0x104];
    Children* children;
    char reserved[0x17c];
    DeviceProvider provider;
};

struct Event {
    char padding[0x10];
    short x, y;
};

struct Iterator {
    void* container;
    void* proxy;
    void* node;
};

struct Selection {
    Iterator* insert(Iterator*, Instance* const&);
};

extern Rect* __cdecl makeRect(Rect*, float, float, float, float);
extern bool __cdecl excluded(Instance*);
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Command {
    char padding[0x18];
    Instance* owner;
    void select(Selection*, const Event*, const Rect*);
};

void Command::select(Selection* output, const Event* event, const Rect* bounds)
{
    RenderDevice* device = owner->provider.getDevice();
    Rect viewport;
    makeRect(&viewport, 0.0f, 0.0f, float(event->x), float(event->y));

    for (unsigned i = 0; ; ++i) {
        Children* children = owner->children;
        if (!children)
            break;
        if (i >= unsigned(
                ((const volatile Children*)children)->last -
                ((const volatile Children*)children)->first))
            break;

        if (i >= unsigned(children->last - children->first))
            _invalid_parameter_noinfo();

        Location* location =
            dynamic_cast<Location*>(children->first[i].object);

        children = owner->children;
        if (i >= unsigned(children->last - children->first))
            _invalid_parameter_noinfo();

        Selectable* selectable =
            dynamic_cast<Selectable*>(children->first[i].object);

        if (!location || !selectable)
            continue;

        children = owner->children;
        if (i >= unsigned(children->last - children->first))
            _invalid_parameter_noinfo();

        Instance* object = children->first[i].object;
        if (excluded(object))
            continue;

        Frame frame;
        const Vector3& source = location->getFrame(&frame)->position;
        Vector3 position;
        position.x = source.x;
        position.y = source.y;
        position.z = source.z;

        Vector3 projected;
        device->camera.project(&projected, position, viewport);

        Vector2 pointStorage;
        const Vector2* point = projected.xy(&pointStorage);
        const volatile Rect* rectangle = bounds;

        if (rectangle->x0 <= point->x &&
            rectangle->y0 <= point->y &&
            rectangle->x1 >= point->x &&
            rectangle->y1 >= point->y) {
            Iterator result;
            output->insert(&result, object);
        }
    }
}
