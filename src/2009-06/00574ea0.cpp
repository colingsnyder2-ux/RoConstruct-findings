// from server: 100% by auto
// roc 2009-06 00574ea0  unit: G3D::BinaryInput  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00574ea0
//
// 00574ea0  8b442404             mov eax, dword ptr [esp + 4]
// 00574ea4  6a01                 push 1
// 00574ea6  50                   push eax
// 00574ea7  e81451f3ff           call 0x4a9fc0
// 00574eac  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?resize@?$Array@PBX@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
