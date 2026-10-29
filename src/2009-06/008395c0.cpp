// roc 2009-06 008395c0  unit: Ogre::RbxSubEntity  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008395c0
//
// 008395c0  b801000000           mov eax, 1
// 008395c5  84050089a500         test byte ptr [0xa58900], al
// 008395cb  752c                 jne 0x8395f9
// 008395cd  09050089a500         or dword ptr [0xa58900], eax
// 008395d3  d9810c010000         fld dword ptr [ecx + 0x10c]
// 008395d9  d9811c010000         fld dword ptr [ecx + 0x11c]
// 008395df  d981fc000000         fld dword ptr [ecx + 0xfc]
// 008395e5  d91df488a500         fstp dword ptr [0xa588f4]
// 008395eb  d9c9                 fxch st(1)
// 008395ed  d91df888a500         fstp dword ptr [0xa588f8]
// 008395f3  d91dfc88a500         fstp dword ptr [0xa588fc]
// 008395f9  b8f488a500           mov eax, 0xa588f4
// 008395fe  c3                   ret 
// copied from an identical function in another client (function ?position@RbxSubEntity@Ogre@@QBEABUVector3@2@XZ)

// from server: 93% by Espeon
#include <intrin.h>
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
namespace Ogre {
struct Vector3 {float x,y,z; Vector3(float a,float b,float c):x(a),y(b),z(c){}};
struct Matrix4 {float m[4][4];const float* operator[](int row)const{return m[row];} Vector3 getTrans()const{_ReadWriteBarrier();return Vector3(m[0][3],m[1][3],m[2][3]);}};
struct RbxSubEntity {
 char pad[0xf0];
 Matrix4 transform;
 const Vector3& position()const;
};
const Vector3& RbxSubEntity::position()const{
 static const Vector3 translation(transform.getTrans());
 return translation;
}
}