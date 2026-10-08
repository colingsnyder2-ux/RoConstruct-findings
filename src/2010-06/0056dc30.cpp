// from server: 100% by auto
// roc 2010-06 0056dc30  unit: G3D::LineSegment  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056dc30
//
// 0056dc30  8b442404             mov eax, dword ptr [esp + 4]
// 0056dc34  d9410c               fld dword ptr [ecx + 0xc]
// 0056dc37  d918                 fstp dword ptr [eax]
// 0056dc39  d94110               fld dword ptr [ecx + 0x10]
// 0056dc3c  d95804               fstp dword ptr [eax + 4]
// 0056dc3f  d94114               fld dword ptr [ecx + 0x14]
// 0056dc42  d95808               fstp dword ptr [eax + 8]
// 0056dc45  c20400               ret 4
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ?getPoint2@Capsule@G3D@@QBE?AVVector3@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
