// from server: 91% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_espeon_movepointnativevector4f3b484e9e17e78c.cpp

// Candidate translation unit (score above; library headers required).
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

struct S;
#include <vector>
typedef std::vector<S*> Resource;
struct Value
{
    char data[44];
    Value(const void *,const Resource&, S*);
    ~Value();
};

extern "C" void __cdecl release_memory(void *);
extern void __cdecl convert_vector(Vec *, const Vec *);

struct S;
struct FrameBase;
struct ValueBase;

struct FrameTable
{
    Frame *(__thiscall *get)(FrameBase *, Frame *);
};

struct ValueTable
{
    const void *(__thiscall *get)(ValueBase *);
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
        resource.push_back(child);

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
        Value value(valueBase->table->get(valueBase), resource, this);
        apply(&value, converted, 1);
    }
}