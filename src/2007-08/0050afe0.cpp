// roc 2007-08 0050afe0  unit: seg_00500000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050afe0
//
// 0050afe0  8bc1                 mov eax, ecx
// 0050afe2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0050afe6  d901                 fld dword ptr [ecx]
// 0050afe8  d918                 fstp dword ptr [eax]
// 0050afea  d94104               fld dword ptr [ecx + 4]
// 0050afed  d95804               fstp dword ptr [eax + 4]
// 0050aff0  d9442408             fld dword ptr [esp + 8]
// 0050aff4  d95808               fstp dword ptr [eax + 8]
// 0050aff7  d944240c             fld dword ptr [esp + 0xc]
// 0050affb  d9580c               fstp dword ptr [eax + 0xc]
// 0050affe  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\Vector4.cpp (function ??0Vector4@G3D@@QAE@ABVVector2@1@MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector4.cpp
