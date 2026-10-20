// from server: 92% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_espeon_frontvectormultiply804a0f4e30e9029e.cpp

// Candidate translation unit (score above; library headers required).
#pragma float_control(precise, off)
#include "G3D/Vector3.h"
typedef G3D::Vector3 Vector3;
struct Instance {
    void* getCastObject();
    const float* getMatrix();
};

struct Model {
    void setDirection(const Vector3&);
};

struct Argument {
    Instance* instance;
    int face;
};

extern unsigned char sourceType;
extern unsigned char destinationType;

extern "C" void* __cdecl runtimeCast(
    void*, long, void*, void*, int);

void __stdcall setFront(Argument* argument)
{
    Instance* instance = argument->instance;
    Model* model = static_cast<Model*>(runtimeCast(
        instance->getCastObject(), 0,
        &sourceType, &destinationType, 0));

    if (model) {
        int face = argument->face;
        const float* matrix = instance->getMatrix();
        int axis = face % 3;

        Vector3 result(
            matrix[axis],
            matrix[axis + 3],
            matrix[axis + 6]
        );
        float scale = static_cast<float>(1 - 2 * (face / 3));
        model->setDirection(result * scale);
    }
}