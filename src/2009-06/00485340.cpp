// roc 2009-06 00485340  unit: RBX::MeshGen  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00485340
//
// 00485340  8b442404             mov eax, dword ptr [esp + 4]
// 00485344  6a01                 push 1
// 00485346  50                   push eax
// 00485347  e8f4feffff           call 0x485240
// 0048534c  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?resize@?$Array@PBX@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
