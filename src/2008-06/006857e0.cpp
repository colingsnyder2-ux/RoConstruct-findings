// from server: 100% by king_originala
// roc 2008-06 006857e0  unit: Ogre::RbxSubEntity  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006857e0
//
// 006857e0  b801000000           mov eax, 1
// 006857e5  840534dc9700         test byte ptr [0x97dc34], al
// 006857eb  752c                 jne 0x685819
// 006857ed  090534dc9700         or dword ptr [0x97dc34], eax
// 006857f3  d9810c010000         fld dword ptr [ecx + 0x10c]
// 006857f9  d9811c010000         fld dword ptr [ecx + 0x11c]
// 006857ff  d981fc000000         fld dword ptr [ecx + 0xfc]
// 00685805  d91d28dc9700         fstp dword ptr [0x97dc28]
// 0068580b  d9c9                 fxch st(1)
// 0068580d  d91d2cdc9700         fstp dword ptr [0x97dc2c]
// 00685813  d91d30dc9700         fstp dword ptr [0x97dc30]
// 00685819  b828dc9700           mov eax, 0x97dc28
// 0068581e  c3                   ret 

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
