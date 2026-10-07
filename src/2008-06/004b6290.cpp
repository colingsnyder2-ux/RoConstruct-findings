// roc 2008-06 004b6290  unit: RBX::Network::InterpolatingPhysicsReceiver  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b6290
//
// 004b6290  56                   push esi
// 004b6291  8bf1                 mov esi, ecx
// 004b6293  8d4e08               lea ecx, [esi + 8]
// 004b6296  e855f6ffff           call 0x4b58f0
// 004b629b  f644240801           test byte ptr [esp + 8], 1
// 004b62a0  7409                 je 0x4b62ab
// 004b62a2  56                   push esi
// 004b62a3  e8d2a31e00           call 0x6a067a
// 004b62a8  83c404               add esp, 4
// 004b62ab  8bc6                 mov eax, esi
// 004b62ad  5e                   pop esi
// 004b62ae  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Framebuffer.cpp (function ??_GNode@?$Table@W4AttachmentPoint@Framebuffer@G3D@@VAttachment@23@@G3D@@QAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Framebuffer.cpp
