// from server: 100% by auto
// roc 2009-06 00589d30  unit: seg_00580000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00589d30
//
// 00589d30  d94104               fld dword ptr [ecx + 4]
// 00589d33  8b442404             mov eax, dword ptr [esp + 4]
// 00589d37  d918                 fstp dword ptr [eax]
// 00589d39  d94108               fld dword ptr [ecx + 8]
// 00589d3c  d95804               fstp dword ptr [eax + 4]
// 00589d3f  d9410c               fld dword ptr [ecx + 0xc]
// 00589d42  d95808               fstp dword ptr [eax + 8]
// 00589d45  8b442408             mov eax, dword ptr [esp + 8]
// 00589d49  d94110               fld dword ptr [ecx + 0x10]
// 00589d4c  d9e0                 fchs 
// 00589d4e  d918                 fstp dword ptr [eax]
// 00589d50  c20800               ret 8
// library g3d-6.09/G3Dcpp\Plane.cpp (function ?getEquation@Plane@G3D@@QBEXAAVVector3@2@AAM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Plane.cpp
