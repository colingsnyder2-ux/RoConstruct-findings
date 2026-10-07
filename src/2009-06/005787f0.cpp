// roc 2009-06 005787f0  unit: G3D::LineSegment  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005787f0
//
// 005787f0  8bc1                 mov eax, ecx
// 005787f2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005787f6  d901                 fld dword ptr [ecx]
// 005787f8  d918                 fstp dword ptr [eax]
// 005787fa  d94104               fld dword ptr [ecx + 4]
// 005787fd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00578801  d95804               fstp dword ptr [eax + 4]
// 00578804  d901                 fld dword ptr [ecx]
// 00578806  d95808               fstp dword ptr [eax + 8]
// 00578809  d94104               fld dword ptr [ecx + 4]
// 0057880c  d9580c               fstp dword ptr [eax + 0xc]
// 0057880f  c20800               ret 8
// library g3d-6.09/G3Dcpp\Vector4.cpp (function ??0Vector4@G3D@@QAE@ABVVector2@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector4.cpp
