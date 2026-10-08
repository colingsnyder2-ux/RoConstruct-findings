// roc 2009-12 0060bfa0  unit: seg_00600000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060bfa0
//
// 0060bfa0  8b442404             mov eax, dword ptr [esp + 4]
// 0060bfa4  d9410c               fld dword ptr [ecx + 0xc]
// 0060bfa7  d918                 fstp dword ptr [eax]
// 0060bfa9  d94110               fld dword ptr [ecx + 0x10]
// 0060bfac  d95804               fstp dword ptr [eax + 4]
// 0060bfaf  d94114               fld dword ptr [ecx + 0x14]
// 0060bfb2  d95808               fstp dword ptr [eax + 8]
// 0060bfb5  c20400               ret 4
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ?getPoint2@Capsule@G3D@@QBE?AVVector3@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
