// roc 2011-06 005530d0  unit: G3D::LineSegment  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005530d0
//
// 005530d0  8b442404             mov eax, dword ptr [esp + 4]
// 005530d4  d901                 fld dword ptr [ecx]
// 005530d6  d918                 fstp dword ptr [eax]
// 005530d8  d94104               fld dword ptr [ecx + 4]
// 005530db  d95804               fstp dword ptr [eax + 4]
// 005530de  d94108               fld dword ptr [ecx + 8]
// 005530e1  d95808               fstp dword ptr [eax + 8]
// 005530e4  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?xyz@Vector3@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
