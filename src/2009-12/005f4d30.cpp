// roc 2009-12 005f4d30  unit: seg_005f0000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f4d30
//
// 005f4d30  8b442404             mov eax, dword ptr [esp + 4]
// 005f4d34  d94104               fld dword ptr [ecx + 4]
// 005f4d37  d918                 fstp dword ptr [eax]
// 005f4d39  d94108               fld dword ptr [ecx + 8]
// 005f4d3c  d95804               fstp dword ptr [eax + 4]
// 005f4d3f  c20400               ret 4
// library g3d-6.09/G3Dcpp\Quat.cpp (function ?yz@Quat@G3D@@QBE?AVVector2@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Quat.cpp
