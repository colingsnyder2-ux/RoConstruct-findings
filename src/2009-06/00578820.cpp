// from server: 100% by auto
// roc 2009-06 00578820  unit: G3D::LineSegment  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00578820
//
// 00578820  8bc1                 mov eax, ecx
// 00578822  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00578826  d901                 fld dword ptr [ecx]
// 00578828  d918                 fstp dword ptr [eax]
// 0057882a  d94104               fld dword ptr [ecx + 4]
// 0057882d  d95804               fstp dword ptr [eax + 4]
// 00578830  d9442408             fld dword ptr [esp + 8]
// 00578834  d95808               fstp dword ptr [eax + 8]
// 00578837  d944240c             fld dword ptr [esp + 0xc]
// 0057883b  d9580c               fstp dword ptr [eax + 0xc]
// 0057883e  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\Vector4.cpp (function ??0Vector4@G3D@@QAE@ABVVector2@1@MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector4.cpp
