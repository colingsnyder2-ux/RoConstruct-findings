// roc 2008-06 0047faf0  unit: G3D::GWindow  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047faf0
//
// 0047faf0  56                   push esi
// 0047faf1  8bf1                 mov esi, ecx
// 0047faf3  57                   push edi
// 0047faf4  c70604f18100         mov dword ptr [esi], 0x81f104
// 0047fafa  33ff                 xor edi, edi
// 0047fafc  3935f4ef9600         cmp dword ptr [0x96eff4], esi
// 0047fb02  7506                 jne 0x47fb0a
// 0047fb04  893df4ef9600         mov dword ptr [0x96eff4], edi
// 0047fb0a  8b4604               mov eax, dword ptr [esi + 4]
// 0047fb0d  50                   push eax
// 0047fb0e  e80d820800           call 0x507d20
// 0047fb13  83c404               add esp, 4
// 0047fb16  f644240c01           test byte ptr [esp + 0xc], 1
// 0047fb1b  897e04               mov dword ptr [esi + 4], edi
// 0047fb1e  897e08               mov dword ptr [esi + 8], edi
// 0047fb21  897e0c               mov dword ptr [esi + 0xc], edi
// 0047fb24  7409                 je 0x47fb2f
// 0047fb26  56                   push esi
// 0047fb27  e84e0b2200           call 0x6a067a
// 0047fb2c  83c404               add esp, 4
// 0047fb2f  5f                   pop edi
// 0047fb30  8bc6                 mov eax, esi
// 0047fb32  5e                   pop esi
// 0047fb33  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ??_GGWindow@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
