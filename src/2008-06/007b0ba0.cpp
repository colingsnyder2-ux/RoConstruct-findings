// roc 2008-06 007b0ba0  unit: RBX::RenderNew::TextureProxy  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b0ba0
//
// 007b0ba0  6aff                 push -1
// 007b0ba2  6828ae7d00           push 0x7dae28
// 007b0ba7  64a100000000         mov eax, dword ptr fs:[0]
// 007b0bad  50                   push eax
// 007b0bae  64892500000000       mov dword ptr fs:[0], esp
// 007b0bb5  83ec1c               sub esp, 0x1c
// 007b0bb8  8b442430             mov eax, dword ptr [esp + 0x30]
// 007b0bbc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007b0bc0  50                   push eax
// 007b0bc1  51                   push ecx
// 007b0bc2  8d542408             lea edx, [esp + 8]
// 007b0bc6  52                   push edx
// 007b0bc7  e8647cd6ff           call 0x518830
// 007b0bcc  d9442448             fld dword ptr [esp + 0x48]
// 007b0bd0  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007b0bd4  d95c2408             fstp dword ptr [esp + 8]
// 007b0bd8  8b542440             mov edx, dword ptr [esp + 0x40]
// 007b0bdc  83c408               add esp, 8
// 007b0bdf  51                   push ecx
// 007b0be0  52                   push edx
// 007b0be1  50                   push eax
// 007b0be2  c744243400000000     mov dword ptr [esp + 0x34], 0
// 007b0bea  e8c1f9ffff           call 0x7b05b0
// 007b0bef  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007b0bf3  64890d00000000       mov dword ptr fs:[0], ecx
// 007b0bfa  83c438               add esp, 0x38
// 007b0bfd  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ?arrow@Draw@G3D@@SAXABVVector3@2@0PAVRenderDevice@2@ABVColor4@2@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
