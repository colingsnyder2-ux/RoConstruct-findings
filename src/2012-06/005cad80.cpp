// from server: 100% by auto
// roc 2012-06 005cad80  unit: Ogre::istreamDataStream  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005cad80
//
// 005cad80  8bc1                 mov eax, ecx
// 005cad82  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005cad86  d901                 fld dword ptr [ecx]
// 005cad88  d918                 fstp dword ptr [eax]
// 005cad8a  d94104               fld dword ptr [ecx + 4]
// 005cad8d  d95804               fstp dword ptr [eax + 4]
// 005cad90  d94108               fld dword ptr [ecx + 8]
// 005cad93  d95808               fstp dword ptr [eax + 8]
// 005cad96  d9410c               fld dword ptr [ecx + 0xc]
// 005cad99  d9580c               fstp dword ptr [eax + 0xc]
// 005cad9c  d94110               fld dword ptr [ecx + 0x10]
// 005cad9f  d95810               fstp dword ptr [eax + 0x10]
// 005cada2  d94114               fld dword ptr [ecx + 0x14]
// 005cada5  d95814               fstp dword ptr [eax + 0x14]
// 005cada8  c20400               ret 4
// library g3d-6.09/G3Dcpp\AABox.cpp (function ??4AABox@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/AABox.cpp
