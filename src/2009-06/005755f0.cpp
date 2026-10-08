// from server: 100% by auto
// roc 2009-06 005755f0  unit: G3D::BinaryInput  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005755f0
//
// 005755f0  8b442404             mov eax, dword ptr [esp + 4]
// 005755f4  d901                 fld dword ptr [ecx]
// 005755f6  d918                 fstp dword ptr [eax]
// 005755f8  d901                 fld dword ptr [ecx]
// 005755fa  d95804               fstp dword ptr [eax + 4]
// 005755fd  d901                 fld dword ptr [ecx]
// 005755ff  d95808               fstp dword ptr [eax + 8]
// 00575602  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?xxx@Vector3@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
