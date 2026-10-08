// from server: 100% by auto
// roc 2008-06 00479a60  unit: CInstanceRecord::CNameItem  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00479a60
//
// 00479a60  8b442404             mov eax, dword ptr [esp + 4]
// 00479a64  6a01                 push 1
// 00479a66  50                   push eax
// 00479a67  e864f1ffff           call 0x478bd0
// 00479a6c  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?resize@?$Array@PBX@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
