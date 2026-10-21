// from server: 89% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_espclaude_55d42ad2b2b14cc6.cpp

// Candidate translation unit (score above; library headers required).
#pragma float_control(precise, off)
#include "G3D/CoordinateFrame.h"
#include "G3D/Vector3.h"
typedef G3D::Vector3 Vec3;
typedef G3D::CoordinateFrame Frame;
struct VBase0 { virtual void v0(); };
struct FrameInterface {
    virtual Frame getFrame();
};

struct FloatInterface {
    virtual void unused();
    virtual void setValue(float value);
};

struct Parent {
    char padding[0x104];
    void* instance;
};

struct Link {
    Parent* get();
    void setParent(void* parent);
};

struct LinkHolder {
    Link* pointer;
    void* control;
    void reset();
};

struct ModelBase { virtual ~ModelBase(); char padding[0x130]; };
struct Model : ModelBase, virtual VBase0, virtual FrameInterface {
};

struct Part {
    void setValue(int value);
    void setPosition(Vec3 position);
    void setSize(const Vec3& size);
};

extern "C" void* __cdecl castObject(
    void* object, int displacement, const void* sourceType,
    const void* targetType, int reference);

extern "C" int __cdecl usable(Model* model);

extern const char instanceType;
extern const char modelType;
extern const float verticalOffset;
extern const float horizontalOffset;
extern const float distanceMultiplier;
extern const float finalValue;

struct SBase {
    virtual ~SBase();
    char padding[0x130];
    LinkHolder link;
    char gap[0x14];
};
struct S : SBase, virtual VBase0, virtual FloatInterface {

    Part* getPart();
    void finish();
    void update();
};

void S::update()
{
    Model* model = 0;

    if (link.pointer) {
        Parent* parent = link.pointer->get();
        if (parent)
            model = static_cast<Model*>(
                castObject(parent->instance, 0,
                           &instanceType, &modelType, 0));

        link.pointer->setParent(0);
        link.reset();
    }

    if (usable(model)) {
Frame frame = model->getFrame();
        Vec3 position=frame.translation;
        position.y+=4.0f;
        float distance=horizontalOffset;
        Vec3 look = frame.rotation.getColumn(2)*distance;
        position+=look*distanceMultiplier;

        Part* part = getPart();
        if (part) {
            part->setValue(1);
            part->setPosition(position);
            position.x = 1.0f;
            position.y = 1.0f;
            position.z = 1.0f;
            part->setSize(position);
        }
    }

    setValue(finalValue);
    finish();
}

