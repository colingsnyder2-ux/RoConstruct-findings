// from server: 88% by colin
// roc 2007-08 0057a9e0  unit: RBX::SpecialShape  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057a9e0

extern float g_scale;

struct Vector3 {
    float x, y, z;
};

struct SpecialShape {
    Vector3 getMeshScale() const;
};

extern "C" Vector3* __stdcall getMeshScaleHelper(Vector3* out, int type);

Vector3 SpecialShape::getMeshScale() const {
    Vector3 tmp;
    tmp.x = g_scale;
    Vector3* p = getMeshScaleHelper(&tmp, 2);
    Vector3 result;
    result.x = p->x * tmp.x;
    result.y = p->y * tmp.x;
    result.z = p->z * tmp.x;
    return result;
}
