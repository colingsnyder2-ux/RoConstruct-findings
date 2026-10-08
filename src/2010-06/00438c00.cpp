// from server: 100% by auto
// roc 2010-06 00438c00  unit: std::D::DU?$char_traits::V?$basic_string::?$XItem  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00438c00
//
// 00438c00  8bc1                 mov eax, ecx
// 00438c02  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00438c06  d901                 fld dword ptr [ecx]
// 00438c08  d918                 fstp dword ptr [eax]
// 00438c0a  d94104               fld dword ptr [ecx + 4]
// 00438c0d  d95804               fstp dword ptr [eax + 4]
// 00438c10  d94108               fld dword ptr [ecx + 8]
// 00438c13  d95808               fstp dword ptr [eax + 8]
// 00438c16  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ??0Vector3@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
