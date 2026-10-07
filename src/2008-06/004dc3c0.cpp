// roc 2008-06 004dc3c0  unit: RBX::ViewNew::ViewG3D  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004dc3c0
//
// 004dc3c0  8b01                 mov eax, dword ptr [ecx]
// 004dc3c2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004dc3c6  8d04c8               lea eax, [eax + ecx*8]
// 004dc3c9  c20400               ret 4
// library g3d-6.09/G3Dcpp\ConvexPolyhedron.cpp (function ??A?$Array@VVector2@G3D@@@G3D@@QBEABVVector2@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/ConvexPolyhedron.cpp
