// from server: 95% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client-dll roc_espeon_forcefieldnativecoloredbece6a51790b32.cpp

// Candidate translation unit (score above; library headers required).
#include <G3D/Color4.h>
#include <boost/shared_ptr.hpp>
struct Instance {
    virtual void anchor();
};

struct Part;
struct PartInstance : Instance {
 const Part& getPart();
    unsigned char padding[804];
    volatile float value;
};

typedef boost::shared_ptr<Instance> Shared;

typedef G3D::Color4 Color;

extern const float scale;
extern const float alpha;
extern void __cdecl submit(const Part&,void*,const Color&);

void __cdecl render(Shared object, void* context, int phase)
{
    PartInstance* part = dynamic_cast<PartInstance*>(object.get());
    if (part && part->value != 0.0f) {
        float t = (phase < 15 ? phase : 30 - phase) * scale;
        Color color(t, 0.0f, 1.0f - t, alpha);
        submit(part->getPart(),context,color);
    }
}
