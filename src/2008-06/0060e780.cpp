// from server: 85% by colin
// from server: 78% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
extern "C" __declspec(dllimport) void __cdecl _invalid_parameter_noinfo();

struct Iterator {
    void* owner;
    void* position;
};

struct Container {
    void* owner;
    char reserved[8];
    void* first;
    void* last;
    void* limit;

    Iterator erase(Iterator first, Iterator last);
};

struct Bounds {
    float minimum[3];
    float maximum[3];
};

struct Data {
    char reserved[24];
};

extern void __cdecl prepare(Data*);
extern bool __cdecl valid(Data*);
extern Bounds* __cdecl getBounds(Bounds*, Data*);

struct Object {
    char reserved[0x28c];
    Container container;

    void setVector(const float*);
};

struct BlockBlockContact {
    char reserved[8];
    Data data;
    unsigned char updated;
    char padding[3];
    Object* object;

    void update();
};

void BlockBlockContact::update()
{
    Container* container = &object->container;

    Iterator last;
    last.position = container->last;
    if (container->first > last.position)
        _invalid_parameter_noinfo();

    Iterator first;
    first.position = container->first;
    last.owner = container->owner;
    if (first.position > container->last)
        _invalid_parameter_noinfo();
    first.owner = container->owner;

    container->erase(first, last);

    Data* value = &data;
    prepare(value);
    if (valid(value)) {
        Bounds storage;
        Bounds* bounds = getBounds(&storage, value);
        float center[3];
        center[0] = (bounds->maximum[0] + bounds->minimum[0]) * 0.5f;
        center[1] = (bounds->maximum[1] + bounds->minimum[1]) * 0.5f;
        center[2] = (bounds->maximum[2] + bounds->minimum[2]) * 0.5f;
        center[1] = bounds->maximum[1];
        object->setVector(center);
    }
    updated = 1;
}
