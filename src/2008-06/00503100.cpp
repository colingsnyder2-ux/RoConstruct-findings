// roc 2008-06 00503100  unit: RBX::Render::RenderScene  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00503100
//
// 00503100  8b442404             mov eax, dword ptr [esp + 4]
// 00503104  6a01                 push 1
// 00503106  50                   push eax
// 00503107  e8b4f4ffff           call 0x5025c0
// 0050310c  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?resize@?$Array@PBX@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
