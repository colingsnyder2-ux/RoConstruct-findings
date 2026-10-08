// from server: 100% by auto
// roc 2009-06 00575300  unit: G3D::BinaryInput  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00575300
//
// 00575300  8bc1                 mov eax, ecx
// 00575302  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00575306  d901                 fld dword ptr [ecx]
// 00575308  d918                 fstp dword ptr [eax]
// 0057530a  d94104               fld dword ptr [ecx + 4]
// 0057530d  d95804               fstp dword ptr [eax + 4]
// 00575310  d9442408             fld dword ptr [esp + 8]
// 00575314  d95808               fstp dword ptr [eax + 8]
// 00575317  c20800               ret 8
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ??0Vector3@G3D@@QAE@ABVVector2@1@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
