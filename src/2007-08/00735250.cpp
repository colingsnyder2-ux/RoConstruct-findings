// roc 2007-08 00735250  unit: G3D::Sky  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00735250
//
// 00735250  d9442404             fld dword ptr [esp + 4]
// 00735254  d999f4000000         fstp dword ptr [ecx + 0xf4]
// 0073525a  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\LightingParameters.cpp (function ?setLatitude@LightingParameters@G3D@@QAEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/LightingParameters.cpp
