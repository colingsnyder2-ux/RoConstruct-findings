// from server: 88% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_espeon_hatdropgetcolumn_4fa0705359af426f.cpp

// Candidate translation unit (score above; library headers required).
#pragma float_control(precise, off)
#include "G3D/CoordinateFrame.h"
#include "G3D/Vector3.h"
typedef G3D::Vector3 Vec3;
typedef G3D::CoordinateFrame Frame;
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

struct Model {
    char padding[0x134];
    int* baseOffsets;
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

struct S {
    char padding[0x134];
    LinkHolder link;
    char gap[0x14];
    int* valueBaseOffsets;

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
        FrameInterface* frameInterface =
            reinterpret_cast<FrameInterface*>(
                reinterpret_cast<char*>(model) + 0x134 +
                model->baseOffsets[2]);

        Frame frame = frameInterface->getFrame();
        Vec3 position=frame.translation;
        position.y+=verticalOffset;
        float distance=horizontalOffset;
        position+=frame.rotation.getColumn(2)*distance*distanceMultiplier;

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

    FloatInterface* valueInterface =
        reinterpret_cast<FloatInterface*>(
            reinterpret_cast<char*>(this) + 0x150 +
            valueBaseOffsets[2]);
    valueInterface->setValue(finalValue);
    finish();
}
