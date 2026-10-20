// from server: 78% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_gridleveldelta270112a100926be7.cpp

// Candidate translation unit (score above; library headers required).
#include "util/Vector3int32.h"
typedef RBX::Vector3int32 Vec3i;
namespace RBX {
    class MotorJoint {
        char pad[0xa8];
        bool a, b, c;
    public:
        int isActive() const;
    };
}

extern int levelCount;
extern int baseSize;
extern int sizeLimit;

extern void __cdecl calculateBounds(int, const void *, Vec3i *, Vec3i *);

void __cdecl selectLevel(int *level, const RBX::MotorJoint *joint,
                        const void *input, Vec3i *minimum, Vec3i *maximum)
{
    *level = 0;
    calculateBounds(0, input, minimum, maximum);

    Vec3i delta=Vec3i(maximum->x-minimum->x,maximum->y-minimum->y,maximum->z-minimum->z);
    int volume=(delta.x+1)*(delta.y+1)*(delta.z+1);

    while (volume > 100) {
        int current = *level;
        if (current >= levelCount - 1)
            break;

        if ((unsigned char)joint->isActive() &&
            (double)(baseSize << current) == (double)sizeLimit)
            break;

        ++current;
        *level = current;
        calculateBounds(current, input, minimum, maximum);

        delta=Vec3i(maximum->x-minimum->x,maximum->y-minimum->y,maximum->z-minimum->z);
        volume=(delta.x+1)*(delta.y+1)*(delta.z+1);
    }
}
