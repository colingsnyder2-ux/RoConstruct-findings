// roc 2007-03 00503bc0  unit: seg_00500000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00503bc0
//
// 00503bc0  8b442404             mov eax, dword ptr [esp + 4]
// 00503bc4  d901                 fld dword ptr [ecx]
// 00503bc6  d918                 fstp dword ptr [eax]
// 00503bc8  d94108               fld dword ptr [ecx + 8]
// 00503bcb  d95804               fstp dword ptr [eax + 4]
// 00503bce  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\Quat.cpp (function ?xz@Quat@G3D@@QBE?AVVector2@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/Quat.cpp
