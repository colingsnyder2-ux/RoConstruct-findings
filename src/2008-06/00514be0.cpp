// from server: 100% by auto
// roc 2008-06 00514be0  unit: seg_00510000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00514be0
//
// 00514be0  8bc1                 mov eax, ecx
// 00514be2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00514be6  d901                 fld dword ptr [ecx]
// 00514be8  d918                 fstp dword ptr [eax]
// 00514bea  d94104               fld dword ptr [ecx + 4]
// 00514bed  d95804               fstp dword ptr [eax + 4]
// 00514bf0  d94108               fld dword ptr [ecx + 8]
// 00514bf3  d95808               fstp dword ptr [eax + 8]
// 00514bf6  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ??0Vector3@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
