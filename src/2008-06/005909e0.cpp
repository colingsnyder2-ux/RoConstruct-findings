// from server: 76% by king_originala
struct Vec
{
    float x, y, z;

    Vec() {}
    Vec(float a, float b, float c) : x(a), y(b), z(c) {}
    Vec(const Vec &v) : x(v.x), y(v.y), z(v.z) {}
};

struct Frame
{
    float rotation[9];
    Vec position;
};

struct Value
{
    char data[44];
    Value(const void *);
    ~Value();
};

extern "C" void __cdecl release_memory(void *);
extern void __cdecl convert_vector(Vec *, const Vec *);

struct Resource
{
    void *storage;
    unsigned int size;
    unsigned int capacity;
    void *auxiliary;
    unsigned int auxiliarySize;
    unsigned int auxiliaryCapacity;

    Resource();
    ~Resource();
    void assign(const Vec *);
};

inline Resource::~Resource()
{
    if (auxiliary)
        release_memory(auxiliary);
    auxiliary = 0;
    auxiliarySize = 0;
    auxiliaryCapacity = 0;
    release_memory(storage);
}

struct S;
struct FrameBase;
struct ValueBase;

struct FrameTable
{
    Frame *(__thiscall *get)(FrameBase *, Frame *);
};

struct ValueTable
{
    const void *(__thiscall *get)(ValueBase *, Resource *, S *);
};

struct FrameBase
{
    FrameTable *table;
};

struct ValueBase
{
    ValueTable *table;
};

struct S
{
    char padding[0x134];
    int *baseOffsets;

    bool contains(S *);
    void apply(Value *, Vec, int);
    void func_005909e0(S *, Vec);
};

void S::func_005909e0(S *child, Vec position)
{
    if (contains(child))
    {
        Resource resource;
        resource.assign(&position);

        Frame temporary;
        FrameBase *frameBase = reinterpret_cast<FrameBase *>(
            reinterpret_cast<char *>(child) + 0x134 +
            child->baseOffsets[2]);
        Frame *frame = frameBase->table->get(frameBase, &temporary);
        const Vec &origin = frame->position;

        Vec difference(position.x - origin.x,
                       position.y - origin.y,
                       position.z - origin.z);
        Vec converted;
        convert_vector(&converted, &difference);

        ValueBase *valueBase = reinterpret_cast<ValueBase *>(
            reinterpret_cast<char *>(child) + 0x134 +
            child->baseOffsets[1]);
        Value value(valueBase->table->get(valueBase, &resource, this));
        apply(&value, converted, 1);
    }
}
