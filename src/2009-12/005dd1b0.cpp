// roc 2009-12 005dd1b0  unit: RBX::ImmediateMeshGenAdapter  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005dd1b0
//
// 005dd1b0  8bc1                 mov eax, ecx
// 005dd1b2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005dd1b6  d901                 fld dword ptr [ecx]
// 005dd1b8  d918                 fstp dword ptr [eax]
// 005dd1ba  d94104               fld dword ptr [ecx + 4]
// 005dd1bd  d95804               fstp dword ptr [eax + 4]
// 005dd1c0  d94108               fld dword ptr [ecx + 8]
// 005dd1c3  d95808               fstp dword ptr [eax + 8]
// 005dd1c6  d9410c               fld dword ptr [ecx + 0xc]
// 005dd1c9  d9580c               fstp dword ptr [eax + 0xc]
// 005dd1cc  d94110               fld dword ptr [ecx + 0x10]
// 005dd1cf  d95810               fstp dword ptr [eax + 0x10]
// 005dd1d2  d94114               fld dword ptr [ecx + 0x14]
// 005dd1d5  d95814               fstp dword ptr [eax + 0x14]
// 005dd1d8  c20400               ret 4
// library g3d-6.09/G3Dcpp\AABox.cpp (function ??4AABox@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/AABox.cpp
