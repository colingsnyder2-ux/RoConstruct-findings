// roc 2007-03 0051ec50  unit: seg_00510000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051ec50
//
// 0051ec50  8b442404             mov eax, dword ptr [esp + 4]
// 0051ec54  d9410c               fld dword ptr [ecx + 0xc]
// 0051ec57  d918                 fstp dword ptr [eax]
// 0051ec59  d94110               fld dword ptr [ecx + 0x10]
// 0051ec5c  d95804               fstp dword ptr [eax + 4]
// 0051ec5f  d94114               fld dword ptr [ecx + 0x14]
// 0051ec62  d95808               fstp dword ptr [eax + 8]
// 0051ec65  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\Capsule.cpp (function ?getPoint2@Capsule@G3D@@QBE?AVVector3@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/Capsule.cpp
