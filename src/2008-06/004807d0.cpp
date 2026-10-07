// roc 2008-06 004807d0  unit: G3D::Win32Window  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004807d0
//
// 004807d0  8b442404             mov eax, dword ptr [esp + 4]
// 004807d4  6a01                 push 1
// 004807d6  50                   push eax
// 004807d7  e8d4fdffff           call 0x4805b0
// 004807dc  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?resize@?$Array@PBX@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
