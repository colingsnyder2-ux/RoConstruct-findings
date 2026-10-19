// from server: 59% by colin
// from server: 58% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
#include <intrin.h>
struct Vector {
    float x, y, z;
};

struct Box {
    Vector low, high;
};

struct Matrix {
    float elements[9];
    Matrix(const Matrix&);
};

struct Frame {
    Matrix rotation;
    Vector translation;
};

extern float halfScale;
extern Vector zeroVector;
extern unsigned int zeroFlags;

extern const Matrix& __cdecl identityMatrix();
extern void __cdecl drawBox(const Box&, const Frame&,
                           unsigned int, unsigned int, unsigned int);

void __cdecl renderBox(const Box& box, unsigned int a,
                       unsigned int b, unsigned int c)
{
    Vector center = {
        (box.high.x + box.low.x) * halfScale,
        (box.high.y + box.low.y) * halfScale,
        (box.high.z + box.low.z) * halfScale
    };

    Frame frame = { identityMatrix(), center };

    Vector extent = {
        (box.high.x - box.low.x) * halfScale,
        (box.high.y - box.low.y) * halfScale,
        (box.high.z - box.low.z) * halfScale
    };

    if (!(zeroFlags & 1)) {
        zeroFlags |= 1;
        _ReadWriteBarrier();
        zeroVector.x = 0.0f;
        zeroVector.y = 0.0f;
        zeroVector.z = 0.0f;
    }

    Box local = {
        {
            zeroVector.x - extent.x,
            zeroVector.y - extent.y,
            zeroVector.z - extent.z
        },
        {
            zeroVector.x + extent.x,
            zeroVector.y + extent.y,
            zeroVector.z + extent.z
        }
    };

    drawBox(local, frame, a, b, c);
}
