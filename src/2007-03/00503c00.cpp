// roc 2007-03 00503c00  unit: seg_00500000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00503c00
//
// 00503c00  8b442404             mov eax, dword ptr [esp + 4]
// 00503c04  d901                 fld dword ptr [ecx]
// 00503c06  d918                 fstp dword ptr [eax]
// 00503c08  d901                 fld dword ptr [ecx]
// 00503c0a  d95804               fstp dword ptr [eax + 4]
// 00503c0d  d901                 fld dword ptr [ecx]
// 00503c0f  d95808               fstp dword ptr [eax + 8]
// 00503c12  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\Quat.cpp (function ?xxx@Quat@G3D@@QBE?AVVector3@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Quat.cpp
