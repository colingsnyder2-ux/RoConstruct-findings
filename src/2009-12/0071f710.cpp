// roc 2009-12 0071f710  unit: RBX::VInstance::?$NonFactoryProduct  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0071f710
//
// 0071f710  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0071f714  8b442404             mov eax, dword ptr [esp + 4]
// 0071f718  d94108               fld dword ptr [ecx + 8]
// 0071f71b  f30f1001             movss xmm0, dword ptr [ecx]
// 0071f71f  d95804               fstp dword ptr [eax + 4]
// 0071f722  d94104               fld dword ptr [ecx + 4]
// 0071f725  0f570510169b00       xorps xmm0, xmmword ptr [0x9b1610]
// 0071f72c  d95808               fstp dword ptr [eax + 8]
// 0071f72f  f30f1100             movss dword ptr [eax], xmm0
// 0071f733  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000_008275f0@@YA?AUVector3@@ABU1@@Z)

// from server: 100% by intel
// roc 2012-06 008275f0  unit: RBX::$01::?$SurfaceDescriptor  size: 36 bytes
// from server: 55% by colin (header only)
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE

struct Vector3 { float x, y, z; Vector3() {} Vector3(float a, float b, float c) : x(a), y(b), z(c) {} };

Vector3 func_008275f0(const Vector3& v)
{
    return Vector3(-v.x, v.z, v.y);
}