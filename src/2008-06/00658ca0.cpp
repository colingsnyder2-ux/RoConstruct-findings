// from server: 93% by EspClaude
// from server: 86% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client-dll roc_espclaude_bc8bb2fd7e7b88fd.cpp

// Candidate translation unit (score above; library headers required).
#include <G3D/Vector3.h>
typedef G3D::Vector3 Vector3;
struct Cofm {
    const Vector3& getCofmInBody() const;
};

struct Body {
    unsigned char padding[0x28];
    Cofm* cofm;
};

struct Transform {
    Vector3 apply(const Vector3& value) const;
};

struct S {
    Body* body;
    unsigned char padding[8];
    Transform transform;

    Vector3 f() const;
};

Vector3 S::f() const
{
    const Vector3* value;
    if (body->cofm) {
        value = &body->cofm->getCofmInBody();
    } else {
        static const Vector3 zero(0.0f, 0.0f, 0.0f);
        value = &zero;
    }

    Vector3 v = *value;
    Vector3 negative = -v;
    return transform.apply(negative);
}
