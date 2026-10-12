// from server: 86% by king_originala
namespace RBX {
struct Instance {
    virtual ~Instance();
    char pad[0x100];
    Instance* next;
};

struct ServiceProvider : Instance {
    ServiceProvider* finish();
};

struct HopperBin : Instance {};
struct Tool : Instance {};
}

extern RBX::ServiceProvider* __cdecl func_00590d80(RBX::Instance*);
extern "C" int (__stdcall *MessageBoxA)(void*, const char*, const char*, unsigned int);

struct Vector3 {
    float x, y, z;
};

struct Bounds {
    Vector3 minimum;
    Vector3 maximum;
};

struct Collection {
    char pad[12];
    RBX::Instance** first;
    RBX::Instance** last;
};

struct UpdateTarget {
    void update();
};

struct PositionProperty {
    virtual void unused();
    virtual UpdateTarget* set(const Vector3&);
};

struct Item : RBX::Instance {
    void assign(RBX::ServiceProvider*);
};

extern void __cdecl getBounds(Bounds*, Collection*);
extern const float midpointScale;
extern const char insertionCaption[];
extern const char insertionQuestion[];

struct RootInstance : RBX::Instance {
    char reserved[0x180];
    PositionProperty position;

    void insert(Collection*, Collection*, int);
    void process(Collection*, RootInstance*, Collection*);
    void prepare(Collection*);
};

void RootInstance::insert(Collection* input, Collection* output, int suppressPrompt)
{
    if (((unsigned int)((char*)input->last - (char*)input->first) & ~7U) == 8) {
        RBX::Instance* item = *input->first;
        if (dynamic_cast<RBX::HopperBin*>(item)) {
            ((Item*)item)->assign(func_00590d80(this));
            return;
        }
        if (dynamic_cast<RBX::Tool*>(item) && !suppressPrompt) {
            if (MessageBoxA(0, insertionQuestion, insertionCaption, 4) == 6) {
                ((Item*)item)->assign(func_00590d80(this));
                return;
            }
        }
    }

    process(input, this, output);
    if (((unsigned int)((char*)output->last - (char*)output->first) & ~7U) != 0) {
        prepare(output);
        Bounds bounds;
        getBounds(&bounds, output);

        float x = bounds.minimum.x + bounds.maximum.x;
        float y = bounds.minimum.y + bounds.maximum.y;
        float z = bounds.minimum.z + bounds.maximum.z;

        Vector3 center;
        center.x = x * midpointScale;
        center.y = y * midpointScale;
        center.z = z * midpointScale;
        position.set(center)->update();
    }
}
