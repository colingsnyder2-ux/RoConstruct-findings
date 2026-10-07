// roc 2010-06 00490aa0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00490aa0
//
// 00490aa0  8bc1                 mov eax, ecx
// 00490aa2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00490aa6  d901                 fld dword ptr [ecx]
// 00490aa8  d918                 fstp dword ptr [eax]
// 00490aaa  d94104               fld dword ptr [ecx + 4]
// 00490aad  d95804               fstp dword ptr [eax + 4]
// 00490ab0  d94108               fld dword ptr [ecx + 8]
// 00490ab3  d95808               fstp dword ptr [eax + 8]
// 00490ab6  d9410c               fld dword ptr [ecx + 0xc]
// 00490ab9  d9580c               fstp dword ptr [eax + 0xc]
// 00490abc  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector4.cpp (function ??0Vector4@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector4.cpp
