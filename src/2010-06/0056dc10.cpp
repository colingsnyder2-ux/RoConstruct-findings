// roc 2010-06 0056dc10  unit: G3D::LineSegment  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056dc10
//
// 0056dc10  8b442404             mov eax, dword ptr [esp + 4]
// 0056dc14  d901                 fld dword ptr [ecx]
// 0056dc16  d918                 fstp dword ptr [eax]
// 0056dc18  d94104               fld dword ptr [ecx + 4]
// 0056dc1b  d95804               fstp dword ptr [eax + 4]
// 0056dc1e  d94108               fld dword ptr [ecx + 8]
// 0056dc21  d95808               fstp dword ptr [eax + 8]
// 0056dc24  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?xyz@Vector3@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
