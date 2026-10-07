// roc 2012-06 004b94e0  unit: RBX::DS::CVideoStreamFilter  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004b94e0
//
// 004b94e0  8bc1                 mov eax, ecx
// 004b94e2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004b94e6  d901                 fld dword ptr [ecx]
// 004b94e8  d918                 fstp dword ptr [eax]
// 004b94ea  d94104               fld dword ptr [ecx + 4]
// 004b94ed  d95804               fstp dword ptr [eax + 4]
// 004b94f0  d94108               fld dword ptr [ecx + 8]
// 004b94f3  d95808               fstp dword ptr [eax + 8]
// 004b94f6  d9410c               fld dword ptr [ecx + 0xc]
// 004b94f9  d9580c               fstp dword ptr [eax + 0xc]
// 004b94fc  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector4.cpp (function ??0Vector4@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector4.cpp
