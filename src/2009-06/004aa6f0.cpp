// from server: 100% by auto
// roc 2009-06 004aa6f0  unit: G3D::Win32Window  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004aa6f0
//
// 004aa6f0  8b442404             mov eax, dword ptr [esp + 4]
// 004aa6f4  6a01                 push 1
// 004aa6f6  50                   push eax
// 004aa6f7  e8d4fdffff           call 0x4aa4d0
// 004aa6fc  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?resize@?$Array@PBX@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
