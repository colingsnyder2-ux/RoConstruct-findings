// roc 2012-06 0082de60  unit: RBX::BallBlockContact  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0082de60
//
// 0082de60  8b442404             mov eax, dword ptr [esp + 4]
// 0082de64  6a01                 push 1
// 0082de66  50                   push eax
// 0082de67  e814f9ffff           call 0x82d780
// 0082de6c  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?resize@?$Array@PBX@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
