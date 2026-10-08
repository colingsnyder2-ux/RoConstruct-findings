// roc 2009-12 004d66c0  unit: G3D::GWindow  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d66c0
//
// 004d66c0  56                   push esi
// 004d66c1  8bf1                 mov esi, ecx
// 004d66c3  57                   push edi
// 004d66c4  c7069c799b00         mov dword ptr [esi], 0x9b799c
// 004d66ca  33ff                 xor edi, edi
// 004d66cc  393548d0b700         cmp dword ptr [0xb7d048], esi
// 004d66d2  7506                 jne 0x4d66da
// 004d66d4  893d48d0b700         mov dword ptr [0xb7d048], edi
// 004d66da  8b4604               mov eax, dword ptr [esi + 4]
// 004d66dd  50                   push eax
// 004d66de  e8fd3c1100           call 0x5ea3e0
// 004d66e3  83c404               add esp, 4
// 004d66e6  f644240c01           test byte ptr [esp + 0xc], 1
// 004d66eb  897e04               mov dword ptr [esi + 4], edi
// 004d66ee  897e08               mov dword ptr [esi + 8], edi
// 004d66f1  897e0c               mov dword ptr [esi + 0xc], edi
// 004d66f4  7409                 je 0x4d66ff
// 004d66f6  56                   push esi
// 004d66f7  e85ed13100           call 0x7f385a
// 004d66fc  83c404               add esp, 4
// 004d66ff  5f                   pop edi
// 004d6700  8bc6                 mov eax, esi
// 004d6702  5e                   pop esi
// 004d6703  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ??_GGWindow@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
