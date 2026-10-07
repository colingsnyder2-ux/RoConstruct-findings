// roc 2009-06 00560f90  unit: RBX::Mesh::Level  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00560f90
//
// 00560f90  8b01                 mov eax, dword ptr [ecx]
// 00560f92  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00560f96  8d0488               lea eax, [eax + ecx*4]
// 00560f99  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??A?$Array@PBX@G3D@@QAEAAPBXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
