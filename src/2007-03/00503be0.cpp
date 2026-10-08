// roc 2007-03 00503be0  unit: seg_00500000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00503be0
//
// 00503be0  8b442404             mov eax, dword ptr [esp + 4]
// 00503be4  d94104               fld dword ptr [ecx + 4]
// 00503be7  d918                 fstp dword ptr [eax]
// 00503be9  d94108               fld dword ptr [ecx + 8]
// 00503bec  d95804               fstp dword ptr [eax + 4]
// 00503bef  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\Quat.cpp (function ?yz@Quat@G3D@@QBE?AVVector2@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/Quat.cpp
