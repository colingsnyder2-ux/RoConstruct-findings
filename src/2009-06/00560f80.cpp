// from server: 100% by auto
// roc 2009-06 00560f80  unit: RBX::Mesh::Level  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00560f80
//
// 00560f80  8b442404             mov eax, dword ptr [esp + 4]
// 00560f84  8b09                 mov ecx, dword ptr [ecx]
// 00560f86  8d0440               lea eax, [eax + eax*2]
// 00560f89  8d0481               lea eax, [ecx + eax*4]
// 00560f8c  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??A?$Array@V?$Array@PBX@G3D@@@G3D@@QAEAAV?$Array@PBX@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
