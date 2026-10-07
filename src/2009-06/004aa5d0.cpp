// roc 2009-06 004aa5d0  unit: G3D::Win32Window  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004aa5d0
//
// 004aa5d0  8b442404             mov eax, dword ptr [esp + 4]
// 004aa5d4  6a01                 push 1
// 004aa5d6  50                   push eax
// 004aa5d7  e8e4faffff           call 0x4aa0c0
// 004aa5dc  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?resize@?$Array@PBX@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
