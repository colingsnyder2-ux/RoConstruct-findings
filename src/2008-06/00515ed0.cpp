// from server: 100% by auto
// roc 2008-06 00515ed0  unit: G3D::BinaryInput  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00515ed0
//
// 00515ed0  8b442404             mov eax, dword ptr [esp + 4]
// 00515ed4  6a01                 push 1
// 00515ed6  50                   push eax
// 00515ed7  e844a0f6ff           call 0x47ff20
// 00515edc  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?resize@?$Array@PBX@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
