// roc 2009-06 006d2b30  unit: RBX::Block  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d2b30
//
// 006d2b30  83ec14               sub esp, 0x14
// 006d2b33  8b542418             mov edx, dword ptr [esp + 0x18]
// 006d2b37  8b442420             mov eax, dword ptr [esp + 0x20]
// 006d2b3b  d94218               fld dword ptr [edx + 0x18]
// 006d2b3e  d84808               fmul dword ptr [eax + 8]
// 006d2b41  d9420c               fld dword ptr [edx + 0xc]
// 006d2b44  d84804               fmul dword ptr [eax + 4]
// 006d2b47  dec1                 faddp st(1)
// 006d2b49  d902                 fld dword ptr [edx]
// 006d2b4b  d808                 fmul dword ptr [eax]
// 006d2b4d  dec1                 faddp st(1)
// 006d2b4f  d95c2408             fstp dword ptr [esp + 8]
// 006d2b53  d9421c               fld dword ptr [edx + 0x1c]
// 006d2b56  d84808               fmul dword ptr [eax + 8]
// 006d2b59  d94210               fld dword ptr [edx + 0x10]
// 006d2b5c  d84804               fmul dword ptr [eax + 4]
// 006d2b5f  dec1                 faddp st(1)
// 006d2b61  d94204               fld dword ptr [edx + 4]
// 006d2b64  d808                 fmul dword ptr [eax]
// 006d2b66  dec1                 faddp st(1)
// 006d2b68  d95c240c             fstp dword ptr [esp + 0xc]
// 006d2b6c  d94220               fld dword ptr [edx + 0x20]
// 006d2b6f  d84808               fmul dword ptr [eax + 8]
// 006d2b72  d94214               fld dword ptr [edx + 0x14]
// 006d2b75  d84804               fmul dword ptr [eax + 4]
// 006d2b78  dec1                 faddp st(1)
// 006d2b7a  d94208               fld dword ptr [edx + 8]
// 006d2b7d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006d2b81  d808                 fmul dword ptr [eax]
// 006d2b83  52                   push edx
// 006d2b84  8d44240c             lea eax, [esp + 0xc]
// 006d2b88  50                   push eax
// 006d2b89  dec1                 faddp st(1)
// 006d2b8b  8d442408             lea eax, [esp + 8]
// 006d2b8f  50                   push eax
// 006d2b90  d95c241c             fstp dword ptr [esp + 0x1c]
// 006d2b94  e8f7feffff           call 0x6d2a90
// 006d2b99  d9ee                 fldz 
// 006d2b9b  d8542404             fcom dword ptr [esp + 4]
// 006d2b9f  dfe0                 fnstsw ax
// 006d2ba1  d81c24               fcomp dword ptr [esp]
// 006d2ba4  f6c405               test ah, 5
// 006d2ba7  dfe0                 fnstsw ax
// 006d2ba9  7a1f                 jp 0x6d2bca
// 006d2bab  f6c405               test ah, 5
// 006d2bae  7a0d                 jp 0x6d2bbd
// 006d2bb0  8d049500000000       lea eax, [edx*4]
// 006d2bb7  83c414               add esp, 0x14
// 006d2bba  c20c00               ret 0xc
// 006d2bbd  8d049501000000       lea eax, [edx*4 + 1]
// 006d2bc4  83c414               add esp, 0x14
// 006d2bc7  c20c00               ret 0xc
// 006d2bca  f6c405               test ah, 5
// 006d2bcd  8d049503000000       lea eax, [edx*4 + 3]
// 006d2bd4  7b07                 jnp 0x6d2bdd
// 006d2bd6  8d049502000000       lea eax, [edx*4 + 2]
// 006d2bdd  83c414               add esp, 0x14
// 006d2be0  c20c00               ret 0xc
// copied from an identical function in another client (function ?getClosestEdge@Block@RBX@@QAEHABVMatrix3@G3D@@W4NormalId@2@AAVVector3@4@@Z)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
namespace G3D {
class Vector2 {
public:
    float x, y;
};
class Matrix3 {
public:
    float elt[3][3];
};
class Vector3 {
public:
    float x, y, z;
    Vector3() {}
    Vector3(float a, float b, float c) : x(a), y(b), z(c) {}
    const float& operator[](int i) const { return ((const float*)this)[i]; }
    float& operator[](int i) { return ((float*)this)[i]; }
};
inline Vector3 operator*(const Vector3& v, const Matrix3& m)
{
    const Vector3& rkPoint = v;
    Vector3 kProd;
    for (int r = 0; r < 3; ++r) {
        kProd[r] = rkPoint[2] * m.elt[2][r] + rkPoint[1] * m.elt[1][r] + rkPoint[0] * m.elt[0][r];
    }
    return kProd;
}
}
namespace RBX {
enum NormalId { NORM_X, NORM_Y, NORM_Z, NORM_X_NEG, NORM_Y_NEG, NORM_Z_NEG };
class Block {
public:
    G3D::Vector2 getProjectedVertex(const G3D::Vector3& v, NormalId id);
    int getClosestEdge(const G3D::Matrix3& rotation, NormalId normalID, G3D::Vector3& crossAxis);
};
G3D::Vector2 Block::getProjectedVertex(const G3D::Vector3& vertex, NormalId normalID)
{
    G3D::Vector2 result;
    switch (normalID)
    {
    case NORM_X: result.x = vertex.y; result.y = vertex.z; break;
    case NORM_Y: result.x = vertex.z; result.y = vertex.x; break;
    case NORM_Z: result.x = vertex.x; result.y = vertex.y; break;
    case NORM_X_NEG: result.x = vertex.z; result.y = vertex.y; break;
    case NORM_Y_NEG: result.x = vertex.x; result.y = vertex.z; break;
    case NORM_Z_NEG: result.x = vertex.y; result.y = vertex.x; break;
    }
    return result;
}

int Block::getClosestEdge(const G3D::Matrix3& rotation, NormalId normalID, G3D::Vector3& crossAxis)
{
    G3D::Vector3 axisInBody = crossAxis * rotation;
    G3D::Vector2 projected = this->getProjectedVertex(axisInBody, normalID);

    if (projected.y > 0.0f)
    {
        if (projected.x > 0.0f)
            return 4 * normalID;
        return 4 * normalID + 1;
    }
    else if (projected.x > 0.0f)
    {
        return 4 * normalID + 3;
    }
    else
    {
        return 4 * normalID + 2;
    }
}
}