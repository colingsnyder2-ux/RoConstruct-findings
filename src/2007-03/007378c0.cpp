// roc 2007-03 007378c0  unit: seg_00730000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007378c0
//
// 007378c0  d9442404             fld dword ptr [esp + 4]
// 007378c4  d999f4000000         fstp dword ptr [ecx + 0xf4]
// 007378ca  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\LightingParameters.cpp (function ?setLatitude@LightingParameters@G3D@@QAEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/LightingParameters.cpp
