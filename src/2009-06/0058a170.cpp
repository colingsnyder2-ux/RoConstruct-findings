// roc 2009-06 0058a170  unit: seg_00580000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058a170
//
// 0058a170  8b442404             mov eax, dword ptr [esp + 4]
// 0058a174  d9410c               fld dword ptr [ecx + 0xc]
// 0058a177  d918                 fstp dword ptr [eax]
// 0058a179  d94110               fld dword ptr [ecx + 0x10]
// 0058a17c  d95804               fstp dword ptr [eax + 4]
// 0058a17f  d94114               fld dword ptr [ecx + 0x14]
// 0058a182  d95808               fstp dword ptr [eax + 8]
// 0058a185  c20400               ret 4
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ?getPoint2@Capsule@G3D@@QBE?AVVector3@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
