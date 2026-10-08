// from server: 100% by auto
// roc 2008-06 00518ed0  unit: G3D::Sphere  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00518ed0
//
// 00518ed0  d9ee                 fldz 
// 00518ed2  8bc1                 mov eax, ecx
// 00518ed4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00518ed8  d910                 fst dword ptr [eax]
// 00518eda  d95004               fst dword ptr [eax + 4]
// 00518edd  d95008               fst dword ptr [eax + 8]
// 00518ee0  d9500c               fst dword ptr [eax + 0xc]
// 00518ee3  d95010               fst dword ptr [eax + 0x10]
// 00518ee6  d95814               fstp dword ptr [eax + 0x14]
// 00518ee9  d901                 fld dword ptr [ecx]
// 00518eeb  d918                 fstp dword ptr [eax]
// 00518eed  d94104               fld dword ptr [ecx + 4]
// 00518ef0  d95804               fstp dword ptr [eax + 4]
// 00518ef3  d94108               fld dword ptr [ecx + 8]
// 00518ef6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00518efa  d95808               fstp dword ptr [eax + 8]
// 00518efd  d901                 fld dword ptr [ecx]
// 00518eff  d9580c               fstp dword ptr [eax + 0xc]
// 00518f02  d94104               fld dword ptr [ecx + 4]
// 00518f05  d95810               fstp dword ptr [eax + 0x10]
// 00518f08  d94108               fld dword ptr [ecx + 8]
// 00518f0b  d95814               fstp dword ptr [eax + 0x14]
// 00518f0e  c20800               ret 8
// library g3d-6.09/G3Dcpp\Box.cpp (function ??0AABox@G3D@@QAE@ABVVector3@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Box.cpp
