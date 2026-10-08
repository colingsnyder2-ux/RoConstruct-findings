// from server: 100% by auto
// roc 2009-06 00566a20  unit: RBX::RbxG3D::RenderScene  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00566a20
//
// 00566a20  8b442404             mov eax, dword ptr [esp + 4]
// 00566a24  6a01                 push 1
// 00566a26  50                   push eax
// 00566a27  e814f5ffff           call 0x565f40
// 00566a2c  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?resize@?$Array@PBX@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
