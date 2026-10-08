// from server: 100% by auto
// roc 2008-06 004ca010  unit: RBX::Network::RoundRobinPhysicsSender  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ca010
//
// 004ca010  56                   push esi
// 004ca011  8bf1                 mov esi, ecx
// 004ca013  8d4e08               lea ecx, [esi + 8]
// 004ca016  e805b31100           call 0x5e5320
// 004ca01b  f644240801           test byte ptr [esp + 8], 1
// 004ca020  7409                 je 0x4ca02b
// 004ca022  56                   push esi
// 004ca023  e852661d00           call 0x6a067a
// 004ca028  83c404               add esp, 4
// 004ca02b  8bc6                 mov eax, esi
// 004ca02d  5e                   pop esi
// 004ca02e  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Framebuffer.cpp (function ??_GNode@?$Table@W4AttachmentPoint@Framebuffer@G3D@@VAttachment@23@@G3D@@QAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Framebuffer.cpp
