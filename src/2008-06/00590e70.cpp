// from server: 95% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_espeon_rootinsertvector8fe752572c1105fc.cpp

// Candidate translation unit (score above; library headers required).
#pragma float_control(precise, off)
#include "G3D/Vector3.h"
namespace RBX {
class Instance { public:
    virtual ~Instance();
    char pad[0x100];
    Instance* next;
};

struct ServiceProvider : Instance {
    ServiceProvider* finish();
};

class HopperBin : public Instance {};
class Tool : public Instance {};
}

extern RBX::ServiceProvider* __cdecl func_00590d80(RBX::Instance*);
extern "C" int (__stdcall *messageBox)(void*, const char*, const char*, unsigned int);

struct RawVector {
    float x, y, z;
    G3D::Vector3 operator+(const RawVector& b) const { return G3D::Vector3(x+b.x,y+b.y,z+b.z); }
};

struct Bounds {
    RawVector minimum;
    RawVector maximum;
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
    virtual UpdateTarget* set(const G3D::Vector3&);
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
            if (messageBox(0, insertionQuestion, insertionCaption, 4) == 6) {
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

        G3D::Vector3 center = (bounds.minimum + bounds.maximum) * 0.5f;
        position.set(center)->update();
    }
}
